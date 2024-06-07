// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCChannelResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCChannelResponseDelegate_generated_h
#error "DModelsUGCChannelResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCChannelResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCChannelResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCChannelResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCChannelResponse_Parms \
{ \
	FAccelByteModelsUGCChannelResponse Response; \
}; \
static inline void FDModelsUGCChannelResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCChannelResponse, FAccelByteModelsUGCChannelResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCChannelResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCChannelResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCChannelResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
