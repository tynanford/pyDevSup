#ifndef _PYTHON_DEFINED
#define _PYTHON_DEFINED
#ifdef _DEBUG
#undef _DEBUG
#include <Python.h>
#define _DEBUG
#else  // _DEBUG
#include <Python.h>
#endif // _DEBUG
#endif // _PYTHON_DEFINED
