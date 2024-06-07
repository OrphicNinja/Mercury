// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserRankingData;
#ifdef ACCELBYTEUE4SDK_DModelsUserRankingDataResponseDelegate_generated_h
#error "DModelsUserRankingDataResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUserRankingDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUserRankingDataResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserRankingDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUserRankingDataResponse_Parms \
{ \
	FAccelByteModelsUserRankingData Response; \
}; \
static inline void FDModelsUserRankingDataResponse_DelegateWrapper(const FScriptDelegate& DModelsUserRankingDataResponse, FAccelByteModelsUserRankingData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUserRankingDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUserRankingDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserRankingDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
