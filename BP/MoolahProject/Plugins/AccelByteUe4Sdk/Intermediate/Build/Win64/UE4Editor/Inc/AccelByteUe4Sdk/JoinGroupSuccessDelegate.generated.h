// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsJoinGroupResponse;
#ifdef ACCELBYTEUE4SDK_JoinGroupSuccessDelegate_generated_h
#error "JoinGroupSuccessDelegate.generated.h already included, missing '#pragma once' in JoinGroupSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_JoinGroupSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_JoinGroupSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventJoinGroupSuccess_Parms \
{ \
	FAccelByteModelsJoinGroupResponse Response; \
}; \
static inline void FJoinGroupSuccess_DelegateWrapper(const FScriptDelegate& JoinGroupSuccess, FAccelByteModelsJoinGroupResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventJoinGroupSuccess_Parms Parms; \
	Parms.Response=Response; \
	JoinGroupSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_JoinGroupSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
