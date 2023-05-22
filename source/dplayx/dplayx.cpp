#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <windows.h>
#include <combaseapi.h>

#include "../dplay-stub.h"

HRESULT WINAPI DirectPlayCreate_Stub(LPGUID lpGUID, LPVOID* lplpDP, IUnknown* lpUnk)
{
	if (lpUnk != nullptr)
	{
		return CLASS_E_NOAGGREGATION;
	}
	if (lpGUID == nullptr || lplpDP == nullptr)
	{
		return DPERR_INVALIDPARAM;
	}

	*lplpDP = nullptr;
	return DPERR_UNSUPPORTED;
}

HRESULT WINAPI DirectPlayEnumerate_Stub(LPVOID lpEnumCallback, LPVOID /*lpContext*/)
{
	if (lpEnumCallback == nullptr)
	{
		return DPERR_INVALIDPARAM;
	}
	return DP_OK;
}

HRESULT WINAPI DirectPlayLobbyCreate_Stub(LPGUID lpGUIDDSP, LPVOID* lplpDPL, IUnknown* lpUnk, void* lpData, DWORD dwDataSize)
{
	if (lpGUIDDSP != nullptr && *lpGUIDDSP != GUID_NULL)
	{
		return DPERR_INVALIDPARAM;
	}
	if (lpUnk != nullptr)
	{
		return CLASS_E_NOAGGREGATION;
	}
	if (lpData != nullptr || dwDataSize != 0)
	{
		return DPERR_INVALIDPARAM;
	}

	// lplpDPL is not checked for validity in the real DLL...
	*lplpDPL = nullptr;
	return DPERR_UNSUPPORTED;
}
