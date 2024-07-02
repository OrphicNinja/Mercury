// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMemberRequestGroupResponse;
#ifdef ACCELBYTEUE4SDK_AcceptGroupJoinRequestSuccessDelegate_generated_h
#error "AcceptGroupJoinRequestSuccessDelegate.generated.h already included, missing '#pragma once' in AcceptGroupJoinRequestSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_AcceptGroupJoinRequestSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AcceptGroupJoinRequestSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventAcceptGroupJoinRequestSuccess_Parms \
{ \
	FAccelByteModelsMemberRequestGroupResponse Response; \
}; \
static inline void FAcceptGroupJoinRequestSuccess_DelegateWrapper(const FScriptDelegate& AcceptGroupJoinRequestSuccess, FAccelByteModelsMemberRequestGroupResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventAcceptGroupJoinRequestSuccess_Parms Parms; \
	Parms.Response=Response; \
	AcceptGroupJoinRequestSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AcceptGroupJoinRequestSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
