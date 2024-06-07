// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsLeaderboardRankingResult;
#ifdef ACCELBYTEUE4SDK_DModelsLeaderboardRankingResultResponseDelegate_generated_h
#error "DModelsLeaderboardRankingResultResponseDelegate.generated.h already included, missing '#pragma once' in DModelsLeaderboardRankingResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsLeaderboardRankingResultResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsLeaderboardRankingResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsLeaderboardRankingResultResponse_Parms \
{ \
	FAccelByteModelsLeaderboardRankingResult Response; \
}; \
static inline void FDModelsLeaderboardRankingResultResponse_DelegateWrapper(const FScriptDelegate& DModelsLeaderboardRankingResultResponse, FAccelByteModelsLeaderboardRankingResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsLeaderboardRankingResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsLeaderboardRankingResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsLeaderboardRankingResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
