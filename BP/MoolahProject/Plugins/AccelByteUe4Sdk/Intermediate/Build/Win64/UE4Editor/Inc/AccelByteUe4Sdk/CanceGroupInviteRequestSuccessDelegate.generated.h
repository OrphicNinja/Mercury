// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMemberRequestGroupResponse;
#ifdef ACCELBYTEUE4SDK_CanceGroupInviteRequestSuccessDelegate_generated_h
#error "CanceGroupInviteRequestSuccessDelegate.generated.h already included, missing '#pragma once' in CanceGroupInviteRequestSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_CanceGroupInviteRequestSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_CanceGroupInviteRequestSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventCanceGroupInviteRequestSuccess_Parms \
{ \
	FAccelByteModelsMemberRequestGroupResponse Response; \
}; \
static inline void FCanceGroupInviteRequestSuccess_DelegateWrapper(const FScriptDelegate& CanceGroupInviteRequestSuccess, FAccelByteModelsMemberRequestGroupResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventCanceGroupInviteRequestSuccess_Parms Parms; \
	Parms.Response=Response; \
	CanceGroupInviteRequestSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_CanceGroupInviteRequestSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
