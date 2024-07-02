// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMatchmakingResponse;
#ifdef ACCELBYTEUE4SDK_DStartMatchmakingResponseDelegate_generated_h
#error "DStartMatchmakingResponseDelegate.generated.h already included, missing '#pragma once' in DStartMatchmakingResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DStartMatchmakingResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DStartMatchmakingResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDStartMatchmakingResponse_Parms \
{ \
	FAccelByteModelsMatchmakingResponse Response; \
}; \
static inline void FDStartMatchmakingResponse_DelegateWrapper(const FScriptDelegate& DStartMatchmakingResponse, FAccelByteModelsMatchmakingResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDStartMatchmakingResponse_Parms Parms; \
	Parms.Response=Response; \
	DStartMatchmakingResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DStartMatchmakingResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
