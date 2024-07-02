// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMatchmakingResponse;
#ifdef ACCELBYTEUE4SDK_DCancelMatchmakingResponseDelegate_generated_h
#error "DCancelMatchmakingResponseDelegate.generated.h already included, missing '#pragma once' in DCancelMatchmakingResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DCancelMatchmakingResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCancelMatchmakingResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDCancelMatchmakingResponse_Parms \
{ \
	FAccelByteModelsMatchmakingResponse Response; \
}; \
static inline void FDCancelMatchmakingResponse_DelegateWrapper(const FScriptDelegate& DCancelMatchmakingResponse, FAccelByteModelsMatchmakingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDCancelMatchmakingResponse_Parms Parms; \
	Parms.Response=Response; \
	DCancelMatchmakingResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCancelMatchmakingResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
