// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsEntitlementPagingSlicedResult;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate_generated_h
#error "DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsEntitlementPagingSlicedResultResponse_Parms \
{ \
	FAccelByteModelsEntitlementPagingSlicedResult Response; \
}; \
static inline void FDAccelByteModelsEntitlementPagingSlicedResultResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsEntitlementPagingSlicedResultResponse, FAccelByteModelsEntitlementPagingSlicedResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsEntitlementPagingSlicedResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsEntitlementPagingSlicedResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
