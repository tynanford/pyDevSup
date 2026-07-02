#ifndef _NDARRAYOBJECT_DEFINED
#define _NDARRAYOBJECT_DEFINED
#ifdef _DEBUG
#undef _DEBUG
#include <Python.h>
#include <numpy/ndarrayobject.h>
#define _DEBUG
#else  // _DEBUG
#include <Python.h>
#include <numpy/ndarrayobject.h>
#endif // _DEBUG
#endif // _NDARRAYOBJECT_DEFINED
