// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZModuleActorState : uint8;
#ifdef STARBREEZE_SBZModuleActorStateChangedDelegateDelegate_generated_h
#error "SBZModuleActorStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZModuleActorStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZModuleActorStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModuleActorStateChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZModuleActorStateChangedDelegate_Parms \
{ \
	ESBZModuleActorState NewState; \
}; \
static inline void FSBZModuleActorStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZModuleActorStateChangedDelegate, ESBZModuleActorState NewState) \
{ \
	_Script_Starbreeze_eventSBZModuleActorStateChangedDelegate_Parms Parms; \
	Parms.NewState=NewState; \
	SBZModuleActorStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModuleActorStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
