// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCContentResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCBulkContentResponseDelegate_generated_h
#error "DModelsUGCBulkContentResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCBulkContentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCBulkContentResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCBulkContentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCBulkContentResponse_Parms \
{ \
	TArray<FAccelByteModelsUGCContentResponse> Response; \
}; \
static inline void FDModelsUGCBulkContentResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCBulkContentResponse, const TArray<FAccelByteModelsUGCContentResponse>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCBulkContentResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCBulkContentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCBulkContentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
