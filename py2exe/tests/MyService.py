#
# A sample service to be 'compiled' into an exe-file with py2exe.
#
# See also
#    setup.py - the distutils' setup script
#    setup.cfg - the distutils' config file for this
#    README.txt - detailed usage notes
#
# A minimal service, doing nothing else than
#    - write 'start' and 'stop' entries into the NT event log
#    - when started, waits to be stopped again.
#
import win32serviceutil
import win32service
import win32event
import win32api
import win32evtlogutil

class MyService(win32serviceutil.ServiceFramework):
    _svc_name_ = "MyService"
    _svc_display_name_ = "My Service"
    def __init__(self, args):
        import sys
        # The exe-file has messages for the Event Log Viewer.
        # Register the exe-file as event source.
        #
        # Probably it would be better if this is done at installation time,
        # so that it also could be removed if the service is uninstalled.
        # Unfortunately it cannot be done in the 'if __name__ == "__main__"'
        # block below, because the 'frozen' exe-file does not run this code.
        #
        win32evtlogutil.AddSourceToRegistry(self._svc_display_name_,
                                            sys.executable,
                                            "Application")
        win32serviceutil.ServiceFramework.__init__(self, args)
        self.hWaitStop = win32event.CreateEvent(None, 0, 0, None)

    def SvcStop(self):
        self.ReportServiceStatus(win32service.SERVICE_STOP_PENDING)
        win32event.SetEvent(self.hWaitStop)

    def SvcDoRun(self):
        import servicemanager
        # Write a 'started' event to the event log...
        win32evtlogutil.ReportEvent(self._svc_display_name_,
                                    servicemanager.PYS_SERVICE_STARTED,
                                    0, # category
                                    servicemanager.EVENTLOG_INFORMATION_TYPE,
                                    (self._svc_name_, ''))

        # wait for beeing stopped...
        win32event.WaitForSingleObject(self.hWaitStop, win32event.INFINITE)

        # and write a 'stopped' event to the event log.
        win32evtlogutil.ReportEvent(self._svc_display_name_,
                                    servicemanager.PYS_SERVICE_STOPPED,
                                    0, # category
                                    servicemanager.EVENTLOG_INFORMATION_TYPE,
                                    (self._svc_name_, ''))


if __name__ == '__main__':
    # Note that this code will not be run in the 'frozen' exe-file!!!
    win32serviceutil.HandleCommandLine(MyService)
