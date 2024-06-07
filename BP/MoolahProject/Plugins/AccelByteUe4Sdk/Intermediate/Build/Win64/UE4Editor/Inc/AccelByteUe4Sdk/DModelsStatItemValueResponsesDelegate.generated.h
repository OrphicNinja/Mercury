// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsStatItemValueResponse;
#ifdef ACCELBYTEUE4SDK_DModelsStatItemValueResponsesDelegate_generated_h
#error "DModelsStatItemValueResponsesDelegate.generated.h already included, missing '#pragma once' in DModelsStatItemValueResponsesDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsStatItemValueResponsesDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsStatItemValueResponsesDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsStatItemValueResponses_Parms \
{ \
	TArray<FAccelByteModelsStatItemValueResponse> Response; \
}; \
static inline void FDModelsStatItemValueResponses_DelegateWrapper(const FScriptDelegate& DModelsStatItemValueResponses, const TArray<FAccelByteModelsStatItemValueResponse>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsStatItemValueResponses_Parms Parms; \
	Parms.Response=Response; \
	DModelsStatItemValueResponses.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsStatItemValueResponsesDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
