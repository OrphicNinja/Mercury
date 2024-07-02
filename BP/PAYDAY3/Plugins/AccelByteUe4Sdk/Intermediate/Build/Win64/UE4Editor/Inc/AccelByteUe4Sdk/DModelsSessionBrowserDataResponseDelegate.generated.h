// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserData;
#ifdef ACCELBYTEUE4SDK_DModelsSessionBrowserDataResponseDelegate_generated_h
#error "DModelsSessionBrowserDataResponseDelegate.generated.h already included, missing '#pragma once' in DModelsSessionBrowserDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSessionBrowserDataResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSessionBrowserDataResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserData Response; \
}; \
static inline void FDModelsSessionBrowserDataResponse_DelegateWrapper(const FScriptDelegate& DModelsSessionBrowserDataResponse, FAccelByteModelsSessionBrowserData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSessionBrowserDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsSessionBrowserDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
