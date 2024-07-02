// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCSearchContentsPagingResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCSearchContentsPagingResponseDelegate_generated_h
#error "DModelsUGCSearchContentsPagingResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCSearchContentsPagingResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCSearchContentsPagingResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCSearchContentsPagingResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCSearchContentsPagingResponse_Parms \
{ \
	FAccelByteModelsUGCSearchContentsPagingResponse Response; \
}; \
static inline void FDModelsUGCSearchContentsPagingResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCSearchContentsPagingResponse, FAccelByteModelsUGCSearchContentsPagingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCSearchContentsPagingResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCSearchContentsPagingResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCSearchContentsPagingResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
