// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;
#ifdef STARBREEZE_SBZLifeActionEventDelegateDelegate_generated_h
#error "SBZLifeActionEventDelegateDelegate.generated.h already included, missing '#pragma once' in SBZLifeActionEventDelegateDelegate.h"
#endif
#define STARBREEZE_SBZLifeActionEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionEventDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZLifeActionEventDelegate_Parms \
{ \
	ASBZCharacter* Character; \
	USBZLifeActionInstance* ActionInstance; \
	USBZLifeActionSlot* ActionSlot; \
}; \
static inline void FSBZLifeActionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZLifeActionEventDelegate, ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) \
{ \
	_Script_Starbreeze_eventSBZLifeActionEventDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.ActionInstance=ActionInstance; \
	Parms.ActionSlot=ActionSlot; \
	SBZLifeActionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
