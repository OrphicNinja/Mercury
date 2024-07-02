// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedPublicAchievement;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedPublicAchievementResponseDelegate_generated_h
#error "DModelsPaginatedPublicAchievementResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedPublicAchievementResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedPublicAchievementResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedPublicAchievementResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedPublicAchievementResponse_Parms \
{ \
	FAccelByteModelsPaginatedPublicAchievement Response; \
}; \
static inline void FDModelsPaginatedPublicAchievementResponse_DelegateWrapper(const FScriptDelegate& DModelsPaginatedPublicAchievementResponse, FAccelByteModelsPaginatedPublicAchievement Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedPublicAchievementResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedPublicAchievementResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedPublicAchievementResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
