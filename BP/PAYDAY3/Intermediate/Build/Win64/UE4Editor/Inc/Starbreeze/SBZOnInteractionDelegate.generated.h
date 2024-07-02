// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZOnInteractionDelegate_generated_h
#error "SBZOnInteractionDelegate.generated.h already included, missing '#pragma once' in SBZOnInteractionDelegate.h"
#endif
#define STARBREEZE_SBZOnInteractionDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnInteractionDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZOnInteraction_Parms \
{ \
	USBZBaseInteractableComponent* Interactable; \
	USBZInteractorComponent* Interactor; \
	bool bIsLocallyControlledInteractor; \
}; \
static inline void FSBZOnInteraction_DelegateWrapper(const FMulticastScriptDelegate& SBZOnInteraction, USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) \
{ \
	_Script_Starbreeze_eventSBZOnInteraction_Parms Parms; \
	Parms.Interactable=Interactable; \
	Parms.Interactor=Interactor; \
	Parms.bIsLocallyControlledInteractor=bIsLocallyControlledInteractor ? true : false; \
	SBZOnInteraction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnInteractionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
