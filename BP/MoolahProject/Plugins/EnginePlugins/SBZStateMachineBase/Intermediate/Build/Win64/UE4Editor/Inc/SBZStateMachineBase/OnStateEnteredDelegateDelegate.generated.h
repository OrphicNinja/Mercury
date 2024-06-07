// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SBZSTATEMACHINEBASE_OnStateEnteredDelegateDelegate_generated_h
#error "OnStateEnteredDelegateDelegate.generated.h already included, missing '#pragma once' in OnStateEnteredDelegateDelegate.h"
#endif
#define SBZSTATEMACHINEBASE_OnStateEnteredDelegateDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_SBZStateMachineBase_Source_SBZStateMachineBase_Public_OnStateEnteredDelegateDelegate_h_5_DELEGATE \
struct _Script_SBZStateMachineBase_eventOnStateEnteredDelegate_Parms \
{ \
	FName StateName; \
}; \
static inline void FOnStateEnteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStateEnteredDelegate, FName StateName) \
{ \
	_Script_SBZStateMachineBase_eventOnStateEnteredDelegate_Parms Parms; \
	Parms.StateName=StateName; \
	OnStateEnteredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_SBZStateMachineBase_Source_SBZStateMachineBase_Public_OnStateEnteredDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
