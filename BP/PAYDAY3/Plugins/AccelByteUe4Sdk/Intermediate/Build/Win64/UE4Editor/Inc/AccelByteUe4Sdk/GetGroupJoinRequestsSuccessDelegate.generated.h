// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetMemberRequestsListResponse;
#ifdef ACCELBYTEUE4SDK_GetGroupJoinRequestsSuccessDelegate_generated_h
#error "GetGroupJoinRequestsSuccessDelegate.generated.h already included, missing '#pragma once' in GetGroupJoinRequestsSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetGroupJoinRequestsSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetGroupJoinRequestsSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetGroupJoinRequestsSuccess_Parms \
{ \
	FAccelByteModelsGetMemberRequestsListResponse Response; \
}; \
static inline void FGetGroupJoinRequestsSuccess_DelegateWrapper(const FScriptDelegate& GetGroupJoinRequestsSuccess, FAccelByteModelsGetMemberRequestsListResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetGroupJoinRequestsSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetGroupJoinRequestsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetGroupJoinRequestsSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
