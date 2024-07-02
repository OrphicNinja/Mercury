// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsBulkStatItemOperationResultResponse;
#ifdef ACCELBYTEUE4SDK_DArrayModelsBulkStatItemOperationResultResponseDelegate_generated_h
#error "DArrayModelsBulkStatItemOperationResultResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsBulkStatItemOperationResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsBulkStatItemOperationResultResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsBulkStatItemOperationResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsBulkStatItemOperationResultResponse_Parms \
{ \
	FArrayModelsBulkStatItemOperationResultResponse Response; \
}; \
static inline void FDArrayModelsBulkStatItemOperationResultResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsBulkStatItemOperationResultResponse, FArrayModelsBulkStatItemOperationResultResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsBulkStatItemOperationResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsBulkStatItemOperationResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsBulkStatItemOperationResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
