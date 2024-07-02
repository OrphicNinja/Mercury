// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCContentResponseV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCBulkContentResponseV2Delegate_generated_h
#error "DModelsUGCBulkContentResponseV2Delegate.generated.h already included, missing '#pragma once' in DModelsUGCBulkContentResponseV2Delegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCBulkContentResponseV2Delegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCBulkContentResponseV2Delegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCBulkContentResponseV2_Parms \
{ \
	TArray<FAccelByteModelsUGCContentResponseV2> Response; \
}; \
static inline void FDModelsUGCBulkContentResponseV2_DelegateWrapper(const FScriptDelegate& DModelsUGCBulkContentResponseV2, const TArray<FAccelByteModelsUGCContentResponseV2>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCBulkContentResponseV2_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCBulkContentResponseV2.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCBulkContentResponseV2Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
