// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetMemberRequestsListResponse;
#ifdef ACCELBYTEUE4SDK_GetMyJoinGroupRequestSuccessDelegate_generated_h
#error "GetMyJoinGroupRequestSuccessDelegate.generated.h already included, missing '#pragma once' in GetMyJoinGroupRequestSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetMyJoinGroupRequestSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetMyJoinGroupRequestSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetMyJoinGroupRequestSuccess_Parms \
{ \
	FAccelByteModelsGetMemberRequestsListResponse Response; \
}; \
static inline void FGetMyJoinGroupRequestSuccess_DelegateWrapper(const FScriptDelegate& GetMyJoinGroupRequestSuccess, FAccelByteModelsGetMemberRequestsListResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetMyJoinGroupRequestSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetMyJoinGroupRequestSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetMyJoinGroupRequestSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
