// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCServerResponseDelegate_generated_h
#error "DModelsUGCServerResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCServerResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCServerResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCServerResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCServerResponse_Parms \
{ \
	FAccelByteModelsUGCResponse Response; \
}; \
static inline void FDModelsUGCServerResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCServerResponse, FAccelByteModelsUGCResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCServerResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCServerResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCServerResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
