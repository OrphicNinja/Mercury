// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetMemberRequestsListResponse;
#ifdef ACCELBYTEUE4SDK_GetGroupInvitationRequestsSuccessDelegate_generated_h
#error "GetGroupInvitationRequestsSuccessDelegate.generated.h already included, missing '#pragma once' in GetGroupInvitationRequestsSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetGroupInvitationRequestsSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetGroupInvitationRequestsSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetGroupInvitationRequestsSuccess_Parms \
{ \
	FAccelByteModelsGetMemberRequestsListResponse Response; \
}; \
static inline void FGetGroupInvitationRequestsSuccess_DelegateWrapper(const FScriptDelegate& GetGroupInvitationRequestsSuccess, FAccelByteModelsGetMemberRequestsListResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetGroupInvitationRequestsSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetGroupInvitationRequestsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetGroupInvitationRequestsSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
