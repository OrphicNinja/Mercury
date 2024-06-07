// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserGetResult;
#ifdef ACCELBYTEUE4SDK_DServerSessionBrowserGetResultResponseDelegate_generated_h
#error "DServerSessionBrowserGetResultResponseDelegate.generated.h already included, missing '#pragma once' in DServerSessionBrowserGetResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DServerSessionBrowserGetResultResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserGetResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDServerSessionBrowserGetResultResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserGetResult Response; \
}; \
static inline void FDServerSessionBrowserGetResultResponse_DelegateWrapper(const FScriptDelegate& DServerSessionBrowserGetResultResponse, FAccelByteModelsSessionBrowserGetResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDServerSessionBrowserGetResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DServerSessionBrowserGetResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserGetResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
