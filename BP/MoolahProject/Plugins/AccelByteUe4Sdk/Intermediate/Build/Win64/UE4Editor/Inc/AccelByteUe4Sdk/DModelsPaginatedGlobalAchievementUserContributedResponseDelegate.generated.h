// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedGlobalAchievementUserContributed;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedGlobalAchievementUserContributedResponseDelegate_generated_h
#error "DModelsPaginatedGlobalAchievementUserContributedResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedGlobalAchievementUserContributedResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedGlobalAchievementUserContributedResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedGlobalAchievementUserContributedResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedGlobalAchievementUserContributedResponse_Parms \
{ \
	FAccelByteModelsPaginatedGlobalAchievementUserContributed Response; \
}; \
static inline void FDModelsPaginatedGlobalAchievementUserContributedResponse_DelegateWrapper(const FScriptDelegate& DModelsPaginatedGlobalAchievementUserContributedResponse, FAccelByteModelsPaginatedGlobalAchievementUserContributed Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedGlobalAchievementUserContributedResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedGlobalAchievementUserContributedResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedGlobalAchievementUserContributedResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
