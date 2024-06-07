// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSessionBrowserAddPlayerResponse;
#ifdef ACCELBYTEUE4SDK_DServerSessionBrowserAddPlayerResponseDelegate_generated_h
#error "DServerSessionBrowserAddPlayerResponseDelegate.generated.h already included, missing '#pragma once' in DServerSessionBrowserAddPlayerResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DServerSessionBrowserAddPlayerResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserAddPlayerResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDServerSessionBrowserAddPlayerResponse_Parms \
{ \
	FAccelByteModelsSessionBrowserAddPlayerResponse Response; \
}; \
static inline void FDServerSessionBrowserAddPlayerResponse_DelegateWrapper(const FScriptDelegate& DServerSessionBrowserAddPlayerResponse, FAccelByteModelsSessionBrowserAddPlayerResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDServerSessionBrowserAddPlayerResponse_Parms Parms; \
	Parms.Response=Response; \
	DServerSessionBrowserAddPlayerResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionBrowserAddPlayerResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
