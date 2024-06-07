// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsItemPagingSlicedResult;
#ifdef ACCELBYTEUE4SDK_DModelsItemPagingSlicedResultResponseDelegate_generated_h
#error "DModelsItemPagingSlicedResultResponseDelegate.generated.h already included, missing '#pragma once' in DModelsItemPagingSlicedResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsItemPagingSlicedResultResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsItemPagingSlicedResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsItemPagingSlicedResultResponse_Parms \
{ \
	FAccelByteModelsItemPagingSlicedResult Response; \
}; \
static inline void FDModelsItemPagingSlicedResultResponse_DelegateWrapper(const FScriptDelegate& DModelsItemPagingSlicedResultResponse, FAccelByteModelsItemPagingSlicedResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsItemPagingSlicedResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsItemPagingSlicedResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsItemPagingSlicedResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
