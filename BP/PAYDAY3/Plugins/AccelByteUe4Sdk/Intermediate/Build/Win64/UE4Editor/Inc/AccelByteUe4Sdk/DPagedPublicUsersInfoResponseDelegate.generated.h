// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPagedPublicUsersInfo;
#ifdef ACCELBYTEUE4SDK_DPagedPublicUsersInfoResponseDelegate_generated_h
#error "DPagedPublicUsersInfoResponseDelegate.generated.h already included, missing '#pragma once' in DPagedPublicUsersInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPagedPublicUsersInfoResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPagedPublicUsersInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPagedPublicUsersInfoResponse_Parms \
{ \
	FPagedPublicUsersInfo Response; \
}; \
static inline void FDPagedPublicUsersInfoResponse_DelegateWrapper(const FScriptDelegate& DPagedPublicUsersInfoResponse, FPagedPublicUsersInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPagedPublicUsersInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DPagedPublicUsersInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPagedPublicUsersInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
