// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserRecentPlayerGetResult;
#ifdef ACCELBYTEUE4SDK_DServerSessionBrowserRecentPlayerGetResultResponseDelegate_generated_h
#error "DServerSessionBrowserRecentPlayerGetResultResponseDelegate.generated.h already included, missing '#pragma once' in DServerSessionBrowserRecentPlayerGetResultResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DServerSessionBrowserRecentPlayerGetResultResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserRecentPlayerGetResultResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDServerSessionBrowserRecentPlayerGetResultResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserRecentPlayerGetResult Response; \
}; \
static inline void FDServerSessionBrowserRecentPlayerGetResultResponse_DelegateWrapper(const FScriptDelegate& DServerSessionBrowserRecentPlayerGetResultResponse, FAccelByteModelsSessionBrowserRecentPlayerGetResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDServerSessionBrowserRecentPlayerGetResultResponse_Parms Parms; \
	Parms.Response=Response; \
	DServerSessionBrowserRecentPlayerGetResultResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserRecentPlayerGetResultResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
