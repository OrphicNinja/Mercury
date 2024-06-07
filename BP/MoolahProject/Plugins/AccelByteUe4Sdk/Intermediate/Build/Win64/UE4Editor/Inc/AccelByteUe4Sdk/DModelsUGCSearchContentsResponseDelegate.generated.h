// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCSearchContentsPagingResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCSearchContentsResponseDelegate_generated_h
#error "DModelsUGCSearchContentsResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCSearchContentsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCSearchContentsResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCSearchContentsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCSearchContentsResponse_Parms \
{ \
	FAccelByteModelsUGCSearchContentsPagingResponse Response; \
}; \
static inline void FDModelsUGCSearchContentsResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCSearchContentsResponse, FAccelByteModelsUGCSearchContentsPagingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCSearchContentsResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCSearchContentsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCSearchContentsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
