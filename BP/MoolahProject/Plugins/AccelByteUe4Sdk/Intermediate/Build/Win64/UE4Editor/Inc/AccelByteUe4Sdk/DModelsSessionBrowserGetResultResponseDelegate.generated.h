// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserGetResult;
#ifdef ACCELBYTEUE4SDK_DModelsSessionBrowserGetResultResponseDelegate_generated_h
#error "DModelsSessionBrowserGetResultResponseDelegate.generated.h already included, missing '#pragma once' in DModelsSessionBrowserGetResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSessionBrowserGetResultResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserGetResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSessionBrowserGetResultResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserGetResult Response; \
}; \
static inline void FDModelsSessionBrowserGetResultResponse_DelegateWrapper(const FScriptDelegate& DModelsSessionBrowserGetResultResponse, FAccelByteModelsSessionBrowserGetResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSessionBrowserGetResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsSessionBrowserGetResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserGetResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
