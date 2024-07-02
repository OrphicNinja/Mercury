// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserRankingDataV3;
#ifdef ACCELBYTEUE4SDK_DModelsUserRankingDataV3Delegate_generated_h
#error "DModelsUserRankingDataV3Delegate.generated.h already included, missing '#pragma once' in DModelsUserRankingDataV3Delegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUserRankingDataV3Delegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserRankingDataV3Delegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUserRankingDataV3_Parms \
{ \
	FAccelByteModelsUserRankingDataV3 Response; \
}; \
static inline void FDModelsUserRankingDataV3_DelegateWrapper(const FScriptDelegate& DModelsUserRankingDataV3, FAccelByteModelsUserRankingDataV3 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUserRankingDataV3_Parms Parms; \
	Parms.Response=Response; \
	DModelsUserRankingDataV3.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserRankingDataV3Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
