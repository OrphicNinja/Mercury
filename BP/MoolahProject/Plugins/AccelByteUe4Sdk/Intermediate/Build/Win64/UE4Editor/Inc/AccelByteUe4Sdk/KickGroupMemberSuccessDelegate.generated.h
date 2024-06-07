// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsKickGroupMemberResponse;
#ifdef ACCELBYTEUE4SDK_KickGroupMemberSuccessDelegate_generated_h
#error "KickGroupMemberSuccessDelegate.generated.h already included, missing '#pragma once' in KickGroupMemberSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_KickGroupMemberSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_KickGroupMemberSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventKickGroupMemberSuccess_Parms \
{ \
	FAccelByteModelsKickGroupMemberResponse Response; \
}; \
static inline void FKickGroupMemberSuccess_DelegateWrapper(const FScriptDelegate& KickGroupMemberSuccess, FAccelByteModelsKickGroupMemberResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventKickGroupMemberSuccess_Parms Parms; \
	Parms.Response=Response; \
	KickGroupMemberSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_KickGroupMemberSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
