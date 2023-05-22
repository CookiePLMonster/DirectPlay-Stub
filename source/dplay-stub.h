#pragma once

// Some DirectPlay error codes we need
#include <winerror.h>

#define _FACDP  0x877
#define MAKE_DPHRESULT( code )    MAKE_HRESULT( 1, _FACDP, code )

#define DP_OK                           S_OK
#define DPERR_INVALIDPARAM              E_INVALIDARG
#define DPERR_UNSUPPORTED               E_NOTIMPL
