// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsReplaceUserRecordResponse;
#ifdef ACCELBYTEUE4SDK_DModelsReplaceUserRecordResponseDelegate_generated_h
#error "DModelsReplaceUserRecordResponseDelegate.generated.h already included, missing '#pragma once' in DModelsReplaceUserRecordResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsReplaceUserRecordResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsReplaceUserRecordResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsReplaceUserRecordResponse_Parms \
{ \
	FAccelByteModelsReplaceUserRecordResponse Response; \
}; \
static inline void FDModelsReplaceUserRecordResponse_DelegateWrapper(const FScriptDelegate& DModelsReplaceUserRecordResponse, FAccelByteModelsReplaceUserRecordResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsReplaceUserRecordResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsReplaceUserRecordResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsReplaceUserRecordResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
