// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMemberRequestGroupResponse;
#ifdef ACCELBYTEUE4SDK_LeaveGroupSuccessDelegate_generated_h
#error "LeaveGroupSuccessDelegate.generated.h already included, missing '#pragma once' in LeaveGroupSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_LeaveGroupSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_LeaveGroupSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventLeaveGroupSuccess_Parms \
{ \
	FAccelByteModelsMemberRequestGroupResponse Response; \
}; \
static inline void FLeaveGroupSuccess_DelegateWrapper(const FScriptDelegate& LeaveGroupSuccess, FAccelByteModelsMemberRequestGroupResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventLeaveGroupSuccess_Parms Parms; \
	Parms.Response=Response; \
	LeaveGroupSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_LeaveGroupSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
