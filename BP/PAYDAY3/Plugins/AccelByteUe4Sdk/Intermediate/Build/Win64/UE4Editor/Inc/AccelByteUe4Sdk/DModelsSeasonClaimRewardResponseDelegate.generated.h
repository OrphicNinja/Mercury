// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSeasonClaimRewardResponse;
#ifdef ACCELBYTEUE4SDK_DModelsSeasonClaimRewardResponseDelegate_generated_h
#error "DModelsSeasonClaimRewardResponseDelegate.generated.h already included, missing '#pragma once' in DModelsSeasonClaimRewardResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSeasonClaimRewardResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSeasonClaimRewardResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSeasonClaimRewardResponse_Parms \
{ \
	FAccelByteModelsSeasonClaimRewardResponse Response; \
}; \
static inline void FDModelsSeasonClaimRewardResponse_DelegateWrapper(const FScriptDelegate& DModelsSeasonClaimRewardResponse, FAccelByteModelsSeasonClaimRewardResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSeasonClaimRewardResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsSeasonClaimRewardResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSeasonClaimRewardResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
