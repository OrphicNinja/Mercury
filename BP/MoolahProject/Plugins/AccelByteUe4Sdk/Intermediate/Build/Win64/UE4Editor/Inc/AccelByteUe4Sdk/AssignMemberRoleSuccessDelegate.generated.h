// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetUserGroupInfoResponse;
#ifdef ACCELBYTEUE4SDK_AssignMemberRoleSuccessDelegate_generated_h
#error "AssignMemberRoleSuccessDelegate.generated.h already included, missing '#pragma once' in AssignMemberRoleSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_AssignMemberRoleSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AssignMemberRoleSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventAssignMemberRoleSuccess_Parms \
{ \
	FAccelByteModelsGetUserGroupInfoResponse Response; \
}; \
static inline void FAssignMemberRoleSuccess_DelegateWrapper(const FScriptDelegate& AssignMemberRoleSuccess, FAccelByteModelsGetUserGroupInfoResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventAssignMemberRoleSuccess_Parms Parms; \
	Parms.Response=Response; \
	AssignMemberRoleSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AssignMemberRoleSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
