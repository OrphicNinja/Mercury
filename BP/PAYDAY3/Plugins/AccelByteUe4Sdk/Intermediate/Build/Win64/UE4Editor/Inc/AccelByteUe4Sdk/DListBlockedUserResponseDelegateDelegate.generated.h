// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListBlockedUserResponse;
#ifdef ACCELBYTEUE4SDK_DListBlockedUserResponseDelegateDelegate_generated_h
#error "DListBlockedUserResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DListBlockedUserResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListBlockedUserResponseDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListBlockedUserResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListBlockedUserResponseDelegate_Parms \
{ \
	FAccelByteModelsListBlockedUserResponse Response; \
}; \
static inline void FDListBlockedUserResponseDelegate_DelegateWrapper(const FScriptDelegate& DListBlockedUserResponseDelegate, FAccelByteModelsListBlockedUserResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListBlockedUserResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DListBlockedUserResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListBlockedUserResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
