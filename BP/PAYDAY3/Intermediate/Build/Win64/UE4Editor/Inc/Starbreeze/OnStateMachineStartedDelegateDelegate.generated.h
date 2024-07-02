// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZGameStateMachine;
#ifdef STARBREEZE_OnStateMachineStartedDelegateDelegate_generated_h
#error "OnStateMachineStartedDelegateDelegate.generated.h already included, missing '#pragma once' in OnStateMachineStartedDelegateDelegate.h"
#endif
#define STARBREEZE_OnStateMachineStartedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnStateMachineStartedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnStateMachineStartedDelegate_Parms \
{ \
	USBZGameStateMachine* StateMachine; \
}; \
static inline void FOnStateMachineStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStartedDelegate, USBZGameStateMachine* StateMachine) \
{ \
	_Script_Starbreeze_eventOnStateMachineStartedDelegate_Parms Parms; \
	Parms.StateMachine=StateMachine; \
	OnStateMachineStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnStateMachineStartedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
