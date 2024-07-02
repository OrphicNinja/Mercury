// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMatchmakingResult;
#ifdef ACCELBYTEUE4SDK_DMatchmakingResultDelegateDelegate_generated_h
#error "DMatchmakingResultDelegateDelegate.generated.h already included, missing '#pragma once' in DMatchmakingResultDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DMatchmakingResultDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DMatchmakingResultDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDMatchmakingResultDelegate_Parms \
{ \
	FAccelByteModelsMatchmakingResult Response; \
}; \
static inline void FDMatchmakingResultDelegate_DelegateWrapper(const FScriptDelegate& DMatchmakingResultDelegate, FAccelByteModelsMatchmakingResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDMatchmakingResultDelegate_Parms Parms; \
	Parms.Response=Response; \
	DMatchmakingResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DMatchmakingResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
