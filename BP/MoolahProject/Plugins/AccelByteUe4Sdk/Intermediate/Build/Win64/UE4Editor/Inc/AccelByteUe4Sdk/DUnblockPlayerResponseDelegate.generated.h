// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUnblockPlayerResponse;
#ifdef ACCELBYTEUE4SDK_DUnblockPlayerResponseDelegate_generated_h
#error "DUnblockPlayerResponseDelegate.generated.h already included, missing '#pragma once' in DUnblockPlayerResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUnblockPlayerResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnblockPlayerResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUnblockPlayerResponse_Parms \
{ \
	FAccelByteModelsUnblockPlayerResponse Response; \
}; \
static inline void FDUnblockPlayerResponse_DelegateWrapper(const FScriptDelegate& DUnblockPlayerResponse, FAccelByteModelsUnblockPlayerResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDUnblockPlayerResponse_Parms Parms; \
	Parms.Response=Response; \
	DUnblockPlayerResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnblockPlayerResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
