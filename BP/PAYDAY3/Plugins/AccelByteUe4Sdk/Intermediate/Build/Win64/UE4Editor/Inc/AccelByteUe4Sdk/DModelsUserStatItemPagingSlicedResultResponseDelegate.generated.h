// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserStatItemPagingSlicedResult;
#ifdef ACCELBYTEUE4SDK_DModelsUserStatItemPagingSlicedResultResponseDelegate_generated_h
#error "DModelsUserStatItemPagingSlicedResultResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUserStatItemPagingSlicedResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUserStatItemPagingSlicedResultResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserStatItemPagingSlicedResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUserStatItemPagingSlicedResultResponse_Parms \
{ \
	FAccelByteModelsUserStatItemPagingSlicedResult Response; \
}; \
static inline void FDModelsUserStatItemPagingSlicedResultResponse_DelegateWrapper(const FScriptDelegate& DModelsUserStatItemPagingSlicedResultResponse, FAccelByteModelsUserStatItemPagingSlicedResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUserStatItemPagingSlicedResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUserStatItemPagingSlicedResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserStatItemPagingSlicedResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
