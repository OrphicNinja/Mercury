// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMemberRequestGroupResponse;
#ifdef ACCELBYTEUE4SDK_RejectGroupJoinRequestSuccessDelegate_generated_h
#error "RejectGroupJoinRequestSuccessDelegate.generated.h already included, missing '#pragma once' in RejectGroupJoinRequestSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_RejectGroupJoinRequestSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_RejectGroupJoinRequestSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventRejectGroupJoinRequestSuccess_Parms \
{ \
	FAccelByteModelsMemberRequestGroupResponse Response; \
}; \
static inline void FRejectGroupJoinRequestSuccess_DelegateWrapper(const FScriptDelegate& RejectGroupJoinRequestSuccess, FAccelByteModelsMemberRequestGroupResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventRejectGroupJoinRequestSuccess_Parms Parms; \
	Parms.Response=Response; \
	RejectGroupJoinRequestSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_RejectGroupJoinRequestSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
