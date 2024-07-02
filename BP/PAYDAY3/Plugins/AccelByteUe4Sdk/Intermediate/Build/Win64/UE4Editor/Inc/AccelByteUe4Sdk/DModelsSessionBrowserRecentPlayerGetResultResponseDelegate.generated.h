// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserRecentPlayerGetResult;
#ifdef ACCELBYTEUE4SDK_DModelsSessionBrowserRecentPlayerGetResultResponseDelegate_generated_h
#error "DModelsSessionBrowserRecentPlayerGetResultResponseDelegate.generated.h already included, missing '#pragma once' in DModelsSessionBrowserRecentPlayerGetResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSessionBrowserRecentPlayerGetResultResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserRecentPlayerGetResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSessionBrowserRecentPlayerGetResultResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserRecentPlayerGetResult Response; \
}; \
static inline void FDModelsSessionBrowserRecentPlayerGetResultResponse_DelegateWrapper(const FScriptDelegate& DModelsSessionBrowserRecentPlayerGetResultResponse, FAccelByteModelsSessionBrowserRecentPlayerGetResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSessionBrowserRecentPlayerGetResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsSessionBrowserRecentPlayerGetResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserRecentPlayerGetResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
