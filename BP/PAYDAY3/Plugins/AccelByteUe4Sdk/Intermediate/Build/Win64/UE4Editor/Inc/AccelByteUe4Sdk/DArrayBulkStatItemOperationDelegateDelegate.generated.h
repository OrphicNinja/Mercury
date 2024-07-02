// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBulkStatItemOperationResult;
#ifdef ACCELBYTEUE4SDK_DArrayBulkStatItemOperationDelegateDelegate_generated_h
#error "DArrayBulkStatItemOperationDelegateDelegate.generated.h already included, missing '#pragma once' in DArrayBulkStatItemOperationDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayBulkStatItemOperationDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayBulkStatItemOperationDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayBulkStatItemOperationDelegate_Parms \
{ \
	TArray<FAccelByteModelsBulkStatItemOperationResult> Response; \
}; \
static inline void FDArrayBulkStatItemOperationDelegate_DelegateWrapper(const FScriptDelegate& DArrayBulkStatItemOperationDelegate, const TArray<FAccelByteModelsBulkStatItemOperationResult>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayBulkStatItemOperationDelegate_Parms Parms; \
	Parms.Response=Response; \
	DArrayBulkStatItemOperationDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayBulkStatItemOperationDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
