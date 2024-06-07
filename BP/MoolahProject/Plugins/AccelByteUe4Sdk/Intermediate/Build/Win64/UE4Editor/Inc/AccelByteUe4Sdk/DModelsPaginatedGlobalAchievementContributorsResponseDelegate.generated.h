// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedGlobalAchievementContributors;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedGlobalAchievementContributorsResponseDelegate_generated_h
#error "DModelsPaginatedGlobalAchievementContributorsResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedGlobalAchievementContributorsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedGlobalAchievementContributorsResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedGlobalAchievementContributorsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedGlobalAchievementContributorsResponse_Parms \
{ \
	FAccelByteModelsPaginatedGlobalAchievementContributors Response; \
}; \
static inline void FDModelsPaginatedGlobalAchievementContributorsResponse_DelegateWrapper(const FScriptDelegate& DModelsPaginatedGlobalAchievementContributorsResponse, FAccelByteModelsPaginatedGlobalAchievementContributors Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedGlobalAchievementContributorsResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedGlobalAchievementContributorsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedGlobalAchievementContributorsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
