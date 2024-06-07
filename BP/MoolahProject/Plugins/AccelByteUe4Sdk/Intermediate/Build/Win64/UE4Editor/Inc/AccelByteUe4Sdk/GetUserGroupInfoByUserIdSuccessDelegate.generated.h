// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetUserGroupInfoResponse;
#ifdef ACCELBYTEUE4SDK_GetUserGroupInfoByUserIdSuccessDelegate_generated_h
#error "GetUserGroupInfoByUserIdSuccessDelegate.generated.h already included, missing '#pragma once' in GetUserGroupInfoByUserIdSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetUserGroupInfoByUserIdSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetUserGroupInfoByUserIdSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetUserGroupInfoByUserIdSuccess_Parms \
{ \
	FAccelByteModelsGetUserGroupInfoResponse Response; \
}; \
static inline void FGetUserGroupInfoByUserIdSuccess_DelegateWrapper(const FScriptDelegate& GetUserGroupInfoByUserIdSuccess, FAccelByteModelsGetUserGroupInfoResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetUserGroupInfoByUserIdSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetUserGroupInfoByUserIdSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetUserGroupInfoByUserIdSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
