// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsStatItemValueResponse;
#ifdef ACCELBYTEUE4SDK_DFetchUserStatisticDelegate_generated_h
#error "DFetchUserStatisticDelegate.generated.h already included, missing '#pragma once' in DFetchUserStatisticDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DFetchUserStatisticDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DFetchUserStatisticDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDFetchUserStatistic_Parms \
{ \
	TArray<FAccelByteModelsStatItemValueResponse> Response; \
}; \
static inline void FDFetchUserStatistic_DelegateWrapper(const FScriptDelegate& DFetchUserStatistic, const TArray<FAccelByteModelsStatItemValueResponse>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDFetchUserStatistic_Parms Parms; \
	Parms.Response=Response; \
	DFetchUserStatistic.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DFetchUserStatisticDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
