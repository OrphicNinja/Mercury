// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZInteractionActor;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZActorOnInteractionDelegate_generated_h
#error "SBZActorOnInteractionDelegate.generated.h already included, missing '#pragma once' in SBZActorOnInteractionDelegate.h"
#endif
#define STARBREEZE_SBZActorOnInteractionDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorOnInteractionDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZActorOnInteraction_Parms \
{ \
	ASBZInteractionActor* Interactable; \
	USBZInteractorComponent* Interactor; \
}; \
static inline void FSBZActorOnInteraction_DelegateWrapper(const FMulticastScriptDelegate& SBZActorOnInteraction, ASBZInteractionActor* Interactable, USBZInteractorComponent* Interactor) \
{ \
	_Script_Starbreeze_eventSBZActorOnInteraction_Parms Parms; \
	Parms.Interactable=Interactable; \
	Parms.Interactor=Interactor; \
	SBZActorOnInteraction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorOnInteractionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
