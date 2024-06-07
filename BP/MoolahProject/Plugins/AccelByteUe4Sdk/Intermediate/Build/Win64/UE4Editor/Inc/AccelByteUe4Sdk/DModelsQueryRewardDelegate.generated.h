// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsQueryReward;
#ifdef ACCELBYTEUE4SDK_DModelsQueryRewardDelegate_generated_h
#error "DModelsQueryRewardDelegate.generated.h already included, missing '#pragma once' in DModelsQueryRewardDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsQueryRewardDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsQueryRewardDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsQueryReward_Parms \
{ \
	FAccelByteModelsQueryReward Response; \
}; \
static inline void FDModelsQueryReward_DelegateWrapper(const FScriptDelegate& DModelsQueryReward, FAccelByteModelsQueryReward Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsQueryReward_Parms Parms; \
	Parms.Response=Response; \
	DModelsQueryReward.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsQueryRewardDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
