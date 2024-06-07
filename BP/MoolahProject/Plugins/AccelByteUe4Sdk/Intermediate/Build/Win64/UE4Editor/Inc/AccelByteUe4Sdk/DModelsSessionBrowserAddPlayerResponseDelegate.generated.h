// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserAddPlayerResponse;
#ifdef ACCELBYTEUE4SDK_DModelsSessionBrowserAddPlayerResponseDelegate_generated_h
#error "DModelsSessionBrowserAddPlayerResponseDelegate.generated.h already included, missing '#pragma once' in DModelsSessionBrowserAddPlayerResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSessionBrowserAddPlayerResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserAddPlayerResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSessionBrowserAddPlayerResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserAddPlayerResponse Response; \
}; \
static inline void FDModelsSessionBrowserAddPlayerResponse_DelegateWrapper(const FScriptDelegate& DModelsSessionBrowserAddPlayerResponse, FAccelByteModelsSessionBrowserAddPlayerResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSessionBrowserAddPlayerResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsSessionBrowserAddPlayerResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSessionBrowserAddPlayerResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
