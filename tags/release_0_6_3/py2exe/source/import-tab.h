#define Py_Initialize ((void(*)(void))imports[0].proc)
#define PyRun_SimpleString ((int(*)(char *))imports[1].proc)
#define Py_Finalize ((void(*)(void))imports[2].proc)
#define Py_GetPath ((char *(*)(void))imports[3].proc)
#define Py_SetPythonHome ((void(*)(char *))imports[4].proc)
#define Py_SetProgramName ((void(*)(char *))imports[5].proc)
#define PyMarshal_ReadObjectFromString ((PyObject *(*)(char *, int))imports[6].proc)
#define PyObject_CallFunction ((PyObject *(*)(PyObject *, char *, ...))imports[7].proc)
#define PyString_AsStringAndSize ((int(*)(PyObject *, char **, int *))imports[8].proc)
#define PyString_AsString ((char *(*)(PyObject *))imports[9].proc)
#define PyArg_ParseTuple ((int(*)(PyObject *, char *, ...))imports[10].proc)
#define PyErr_Format ((PyObject *(*)(PyObject *, const char *, ...))imports[11].proc)
#define PyImport_ImportModule ((PyObject *(*)(char *))imports[12].proc)
#define PyInt_FromLong ((PyObject *(*)(long))imports[13].proc)
#define PyInt_AsLong ((long(*)(PyObject *))imports[14].proc)
#define PyLong_FromVoidPtr ((PyObject *(*)(void *))imports[15].proc)
#define Py_InitModule4 ((PyObject *(*)(char *, PyMethodDef *, char *, PyObject *, int))imports[16].proc)
#define PyTuple_New ((PyObject *(*)(int))imports[17].proc)
#define PyTuple_SetItem ((int(*)(PyObject*, int, PyObject *))imports[18].proc)
#define Py_IsInitialized ((int(*)(void))imports[19].proc)
#define PyObject_SetAttrString ((int(*)(PyObject *, char *, PyObject *))imports[20].proc)
#define PyCFunction_NewEx ((PyObject *(*)(PyMethodDef *, PyObject *, PyObject *))imports[21].proc)
#define PyObject_GetAttrString ((PyObject *(*)(PyObject *, char *))imports[22].proc)
#define Py_BuildValue ((PyObject *(*)(char *, ...))imports[23].proc)
#define PyObject_Call ((PyObject *(*)(PyObject *, PyObject *, PyObject *))imports[24].proc)
#define PySys_WriteStderr ((void(*)(const char *, ...))imports[25].proc)
#define PyErr_Occurred ((PyObject *(*)(void))imports[26].proc)
#define PyErr_Clear ((void(*)(void))imports[27].proc)
#define PyObject_IsInstance ((int(*)(PyObject *, PyObject *))imports[28].proc)
#define PyInt_Type (*(PyObject(*))imports[29].proc)
#define _Py_NoneStruct (*(PyObject(*))imports[30].proc)
#define PyExc_ImportError (*(PyObject *(*))imports[31].proc)
#define _Py_PackageContext (*(char *(*))imports[32].proc)
#define PyGILState_Ensure ((PyGILState_STATE(*)(void))imports[33].proc)
#define PyGILState_Release ((void(*)(PyGILState_STATE))imports[34].proc)
#define PySys_SetObject ((void(*)(char *, PyObject *))imports[35].proc)
#define PySys_GetObject ((PyObject *(*)(char *))imports[36].proc)
#define PyString_FromString ((PyObject *(*)(char *))imports[37].proc)
#define Py_FdIsInteractive ((int(*)(FILE *, char *))imports[38].proc)
#define PyRun_InteractiveLoop ((int(*)(FILE *, char *))imports[39].proc)
#define PySys_SetArgv ((void(*)(int, char **))imports[40].proc)
#define PyImport_AddModule ((PyObject *(*)(char *))imports[41].proc)
#define PyModule_GetDict ((PyObject *(*)(PyObject *))imports[42].proc)
#define PySequence_Length ((int(*)(PyObject *))imports[43].proc)
#define PySequence_GetItem ((PyObject *(*)(PyObject *, int))imports[44].proc)
#define PyEval_EvalCode ((PyObject *(*)(PyCodeObject *, PyObject *, PyObject *))imports[45].proc)
#define PyErr_Print ((void(*)(void))imports[46].proc)
#define PyBool_FromLong ((PyObject *(*)(long))imports[47].proc)
#define Py_VerboseFlag (*(int(*))imports[48].proc)
#define Py_NoSiteFlag (*(int(*))imports[49].proc)
#define Py_OptimizeFlag (*(int(*))imports[50].proc)
