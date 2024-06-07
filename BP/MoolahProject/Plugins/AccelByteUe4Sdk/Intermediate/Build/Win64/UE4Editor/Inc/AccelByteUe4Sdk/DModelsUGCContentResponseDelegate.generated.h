// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCContentResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCContentResponseDelegate_generated_h
#error "DModelsUGCContentResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCContentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCContentResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCContentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCContentResponse_Parms \
{ \
	FAccelByteModelsUGCContentResponse Response; \
}; \
static inline void FDModelsUGCContentResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCContentResponse, FAccelByteModelsUGCContentResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCContentResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCContentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCContentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
