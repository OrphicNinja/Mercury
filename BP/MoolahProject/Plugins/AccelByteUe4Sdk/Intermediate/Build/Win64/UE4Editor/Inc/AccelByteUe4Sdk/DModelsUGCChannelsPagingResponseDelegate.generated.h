// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCChannelsPagingResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCChannelsPagingResponseDelegate_generated_h
#error "DModelsUGCChannelsPagingResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCChannelsPagingResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCChannelsPagingResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCChannelsPagingResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCChannelsPagingResponse_Parms \
{ \
	FAccelByteModelsUGCChannelsPagingResponse Response; \
}; \
static inline void FDModelsUGCChannelsPagingResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCChannelsPagingResponse, FAccelByteModelsUGCChannelsPagingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCChannelsPagingResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCChannelsPagingResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCChannelsPagingResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
