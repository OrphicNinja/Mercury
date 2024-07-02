// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef STARBREEZE_OnPlayableLevelInitializedDelegateDelegate_generated_h
#error "OnPlayableLevelInitializedDelegateDelegate.generated.h already included, missing '#pragma once' in OnPlayableLevelInitializedDelegateDelegate.h"
#endif
#define STARBREEZE_OnPlayableLevelInitializedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayableLevelInitializedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnPlayableLevelInitializedDelegate_Parms \
{ \
	UWorld* World; \
}; \
static inline void FOnPlayableLevelInitializedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayableLevelInitializedDelegate, UWorld* World) \
{ \
	_Script_Starbreeze_eventOnPlayableLevelInitializedDelegate_Parms Parms; \
	Parms.World=World; \
	OnPlayableLevelInitializedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayableLevelInitializedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
