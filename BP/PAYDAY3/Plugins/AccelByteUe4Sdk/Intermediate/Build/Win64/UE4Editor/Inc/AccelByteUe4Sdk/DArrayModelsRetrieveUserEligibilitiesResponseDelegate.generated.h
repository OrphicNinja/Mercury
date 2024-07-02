// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsRetrieveUserEligibilitiesResponse;
#ifdef ACCELBYTEUE4SDK_DArrayModelsRetrieveUserEligibilitiesResponseDelegate_generated_h
#error "DArrayModelsRetrieveUserEligibilitiesResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsRetrieveUserEligibilitiesResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsRetrieveUserEligibilitiesResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsRetrieveUserEligibilitiesResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsRetrieveUserEligibilitiesResponse_Parms \
{ \
	FArrayModelsRetrieveUserEligibilitiesResponse Response; \
}; \
static inline void FDArrayModelsRetrieveUserEligibilitiesResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsRetrieveUserEligibilitiesResponse, FArrayModelsRetrieveUserEligibilitiesResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsRetrieveUserEligibilitiesResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsRetrieveUserEligibilitiesResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsRetrieveUserEligibilitiesResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
