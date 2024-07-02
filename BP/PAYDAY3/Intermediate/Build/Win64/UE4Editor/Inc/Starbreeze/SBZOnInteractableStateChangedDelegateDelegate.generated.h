// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
#ifdef STARBREEZE_SBZOnInteractableStateChangedDelegateDelegate_generated_h
#error "SBZOnInteractableStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnInteractableStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnInteractableStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnInteractableStateChangedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnInteractableStateChangedDelegate_Parms \
{ \
	const USBZBaseInteractableComponent* InteractableComponent; \
	bool bInNewState; \
}; \
static inline void FSBZOnInteractableStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnInteractableStateChangedDelegate, const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) \
{ \
	_Script_Starbreeze_eventSBZOnInteractableStateChangedDelegate_Parms Parms; \
	Parms.InteractableComponent=InteractableComponent; \
	Parms.bInNewState=bInNewState ? true : false; \
	SBZOnInteractableStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnInteractableStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
