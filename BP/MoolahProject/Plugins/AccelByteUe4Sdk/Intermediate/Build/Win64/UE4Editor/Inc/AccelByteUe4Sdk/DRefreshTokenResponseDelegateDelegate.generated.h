// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRefreshTokenResponse;
#ifdef ACCELBYTEUE4SDK_DRefreshTokenResponseDelegateDelegate_generated_h
#error "DRefreshTokenResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DRefreshTokenResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRefreshTokenResponseDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRefreshTokenResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRefreshTokenResponseDelegate_Parms \
{ \
	FAccelByteModelsRefreshTokenResponse Response; \
}; \
static inline void FDRefreshTokenResponseDelegate_DelegateWrapper(const FScriptDelegate& DRefreshTokenResponseDelegate, FAccelByteModelsRefreshTokenResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDRefreshTokenResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DRefreshTokenResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRefreshTokenResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
