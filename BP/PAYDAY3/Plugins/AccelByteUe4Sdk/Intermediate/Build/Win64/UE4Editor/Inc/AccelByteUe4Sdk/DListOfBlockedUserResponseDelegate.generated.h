// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListBlockedUserResponse;
#ifdef ACCELBYTEUE4SDK_DListOfBlockedUserResponseDelegate_generated_h
#error "DListOfBlockedUserResponseDelegate.generated.h already included, missing '#pragma once' in DListOfBlockedUserResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListOfBlockedUserResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListOfBlockedUserResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListOfBlockedUserResponse_Parms \
{ \
	FAccelByteModelsListBlockedUserResponse Response; \
}; \
static inline void FDListOfBlockedUserResponse_DelegateWrapper(const FScriptDelegate& DListOfBlockedUserResponse, FAccelByteModelsListBlockedUserResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListOfBlockedUserResponse_Parms Parms; \
	Parms.Response=Response; \
	DListOfBlockedUserResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListOfBlockedUserResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
