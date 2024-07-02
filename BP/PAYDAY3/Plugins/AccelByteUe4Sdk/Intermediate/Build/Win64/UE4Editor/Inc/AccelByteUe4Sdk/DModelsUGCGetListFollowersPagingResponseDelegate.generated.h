// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCGetListFollowersPagingResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCGetListFollowersPagingResponseDelegate_generated_h
#error "DModelsUGCGetListFollowersPagingResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCGetListFollowersPagingResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCGetListFollowersPagingResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCGetListFollowersPagingResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCGetListFollowersPagingResponse_Parms \
{ \
	FAccelByteModelsUGCGetListFollowersPagingResponse Response; \
}; \
static inline void FDModelsUGCGetListFollowersPagingResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCGetListFollowersPagingResponse, FAccelByteModelsUGCGetListFollowersPagingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCGetListFollowersPagingResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCGetListFollowersPagingResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCGetListFollowersPagingResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
