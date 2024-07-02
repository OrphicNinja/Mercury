// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserData;
#ifdef ACCELBYTEUE4SDK_DServerSessionBrowserDataResponseDelegate_generated_h
#error "DServerSessionBrowserDataResponseDelegate.generated.h already included, missing '#pragma once' in DServerSessionBrowserDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DServerSessionBrowserDataResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDServerSessionBrowserDataResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserData Response; \
}; \
static inline void FDServerSessionBrowserDataResponse_DelegateWrapper(const FScriptDelegate& DServerSessionBrowserDataResponse, FAccelByteModelsSessionBrowserData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDServerSessionBrowserDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DServerSessionBrowserDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
