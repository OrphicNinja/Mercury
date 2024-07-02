// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetGroupMemberListResponse;
#ifdef ACCELBYTEUE4SDK_GetMyJoinedGroupInfoSuccessDelegate_generated_h
#error "GetMyJoinedGroupInfoSuccessDelegate.generated.h already included, missing '#pragma once' in GetMyJoinedGroupInfoSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetMyJoinedGroupInfoSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetMyJoinedGroupInfoSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetMyJoinedGroupInfoSuccess_Parms \
{ \
	FAccelByteModelsGetGroupMemberListResponse Response; \
}; \
static inline void FGetMyJoinedGroupInfoSuccess_DelegateWrapper(const FScriptDelegate& GetMyJoinedGroupInfoSuccess, FAccelByteModelsGetGroupMemberListResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetMyJoinedGroupInfoSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetMyJoinedGroupInfoSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetMyJoinedGroupInfoSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
