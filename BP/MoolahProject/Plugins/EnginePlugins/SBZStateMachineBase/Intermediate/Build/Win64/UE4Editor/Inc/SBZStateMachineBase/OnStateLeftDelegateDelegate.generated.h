// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SBZSTATEMACHINEBASE_OnStateLeftDelegateDelegate_generated_h
#error "OnStateLeftDelegateDelegate.generated.h already included, missing '#pragma once' in OnStateLeftDelegateDelegate.h"
#endif
#define SBZSTATEMACHINEBASE_OnStateLeftDelegateDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_SBZStateMachineBase_Source_SBZStateMachineBase_Public_OnStateLeftDelegateDelegate_h_5_DELEGATE \
struct _Script_SBZStateMachineBase_eventOnStateLeftDelegate_Parms \
{ \
	FName StateName; \
}; \
static inline void FOnStateLeftDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStateLeftDelegate, FName StateName) \
{ \
	_Script_SBZStateMachineBase_eventOnStateLeftDelegate_Parms Parms; \
	Parms.StateName=StateName; \
	OnStateLeftDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_SBZStateMachineBase_Source_SBZStateMachineBase_Public_OnStateLeftDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
