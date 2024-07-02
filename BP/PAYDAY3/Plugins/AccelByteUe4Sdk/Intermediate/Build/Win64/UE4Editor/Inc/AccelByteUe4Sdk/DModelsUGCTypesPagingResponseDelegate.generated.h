// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCTypesPagingResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCTypesPagingResponseDelegate_generated_h
#error "DModelsUGCTypesPagingResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCTypesPagingResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCTypesPagingResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCTypesPagingResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCTypesPagingResponse_Parms \
{ \
	FAccelByteModelsUGCTypesPagingResponse Response; \
}; \
static inline void FDModelsUGCTypesPagingResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCTypesPagingResponse, FAccelByteModelsUGCTypesPagingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCTypesPagingResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCTypesPagingResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCTypesPagingResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
