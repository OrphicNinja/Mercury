// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZGateState : uint8;
#ifdef STARBREEZE_SBZGateStateChangedDelegateDelegate_generated_h
#error "SBZGateStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZGateStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZGateStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGateStateChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZGateStateChangedDelegate_Parms \
{ \
	ESBZGateState OldState; \
	ESBZGateState State; \
}; \
static inline void FSBZGateStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZGateStateChangedDelegate, ESBZGateState OldState, ESBZGateState State) \
{ \
	_Script_Starbreeze_eventSBZGateStateChangedDelegate_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.State=State; \
	SBZGateStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGateStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
