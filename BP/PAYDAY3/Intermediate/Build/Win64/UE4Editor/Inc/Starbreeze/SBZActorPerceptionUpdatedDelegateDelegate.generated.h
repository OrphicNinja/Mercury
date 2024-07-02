// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef STARBREEZE_SBZActorPerceptionUpdatedDelegateDelegate_generated_h
#error "SBZActorPerceptionUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZActorPerceptionUpdatedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZActorPerceptionUpdatedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorPerceptionUpdatedDelegateDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZActorPerceptionUpdatedDelegate_Parms \
{ \
	AActor* Actor; \
	FAIStimulus Stimulus; \
}; \
static inline void FSBZActorPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZActorPerceptionUpdatedDelegate, AActor* Actor, FAIStimulus Stimulus) \
{ \
	_Script_Starbreeze_eventSBZActorPerceptionUpdatedDelegate_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Stimulus=Stimulus; \
	SBZActorPerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorPerceptionUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
