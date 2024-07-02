// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsLeaderboardRankingResultV3;
#ifdef ACCELBYTEUE4SDK_DModelsLeaderboardRankingResultV3Delegate_generated_h
#error "DModelsLeaderboardRankingResultV3Delegate.generated.h already included, missing '#pragma once' in DModelsLeaderboardRankingResultV3Delegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsLeaderboardRankingResultV3Delegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsLeaderboardRankingResultV3Delegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsLeaderboardRankingResultV3_Parms \
{ \
	FAccelByteModelsLeaderboardRankingResultV3 Response; \
}; \
static inline void FDModelsLeaderboardRankingResultV3_DelegateWrapper(const FScriptDelegate& DModelsLeaderboardRankingResultV3, FAccelByteModelsLeaderboardRankingResultV3 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsLeaderboardRankingResultV3_Parms Parms; \
	Parms.Response=Response; \
	DModelsLeaderboardRankingResultV3.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsLeaderboardRankingResultV3Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
