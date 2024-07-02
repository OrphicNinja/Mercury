// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMultiLanguageAchievement;
#ifdef ACCELBYTEUE4SDK_DModelsMultiLanguageAchievementResponseDelegate_generated_h
#error "DModelsMultiLanguageAchievementResponseDelegate.generated.h already included, missing '#pragma once' in DModelsMultiLanguageAchievementResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsMultiLanguageAchievementResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsMultiLanguageAchievementResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsMultiLanguageAchievementResponse_Parms \
{ \
	FAccelByteModelsMultiLanguageAchievement Response; \
}; \
static inline void FDModelsMultiLanguageAchievementResponse_DelegateWrapper(const FScriptDelegate& DModelsMultiLanguageAchievementResponse, FAccelByteModelsMultiLanguageAchievement Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsMultiLanguageAchievementResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsMultiLanguageAchievementResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsMultiLanguageAchievementResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
