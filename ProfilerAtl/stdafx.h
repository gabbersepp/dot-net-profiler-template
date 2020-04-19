#pragma once

#ifndef STRICT
#define STRICT
#endif

#ifndef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WIN7 
#endif

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>

using namespace ATL;