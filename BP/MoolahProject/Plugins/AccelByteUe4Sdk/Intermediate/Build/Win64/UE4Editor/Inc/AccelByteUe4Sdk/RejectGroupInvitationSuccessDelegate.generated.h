// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMemberRequestGroupResponse;
#ifdef ACCELBYTEUE4SDK_RejectGroupInvitationSuccessDelegate_generated_h
#error "RejectGroupInvitationSuccessDelegate.generated.h already included, missing '#pragma once' in RejectGroupInvitationSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_RejectGroupInvitationSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_RejectGroupInvitationSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventRejectGroupInvitationSuccess_Parms \
{ \
	FAccelByteModelsMemberRequestGroupResponse Response; \
}; \
static inline void FRejectGroupInvitationSuccess_DelegateWrapper(const FScriptDelegate& RejectGroupInvitationSuccess, FAccelByteModelsMemberRequestGroupResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventRejectGroupInvitationSuccess_Parms Parms; \
	Parms.Response=Response; \
	RejectGroupInvitationSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_RejectGroupInvitationSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
