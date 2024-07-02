// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBlockPlayerResponse;
#ifdef ACCELBYTEUE4SDK_DBlockPlayerResponseDelegate_generated_h
#error "DBlockPlayerResponseDelegate.generated.h already included, missing '#pragma once' in DBlockPlayerResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DBlockPlayerResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBlockPlayerResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDBlockPlayerResponse_Parms \
{ \
	FAccelByteModelsBlockPlayerResponse Response; \
}; \
static inline void FDBlockPlayerResponse_DelegateWrapper(const FScriptDelegate& DBlockPlayerResponse, FAccelByteModelsBlockPlayerResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDBlockPlayerResponse_Parms Parms; \
	Parms.Response=Response; \
	DBlockPlayerResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBlockPlayerResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
