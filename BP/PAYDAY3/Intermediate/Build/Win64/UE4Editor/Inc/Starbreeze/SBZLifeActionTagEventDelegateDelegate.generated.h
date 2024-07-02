// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
class USBZLifeActionSlot;
struct FGameplayTag;
#ifdef STARBREEZE_SBZLifeActionTagEventDelegateDelegate_generated_h
#error "SBZLifeActionTagEventDelegateDelegate.generated.h already included, missing '#pragma once' in SBZLifeActionTagEventDelegateDelegate.h"
#endif
#define STARBREEZE_SBZLifeActionTagEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTagEventDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZLifeActionTagEventDelegate_Parms \
{ \
	ASBZCharacter* Character; \
	USBZLifeActionSlot* ActionSlot; \
	FGameplayTag Tag; \
	bool bActive; \
}; \
static inline void FSBZLifeActionTagEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZLifeActionTagEventDelegate, ASBZCharacter* Character, USBZLifeActionSlot* ActionSlot, FGameplayTag const& Tag, bool bActive) \
{ \
	_Script_Starbreeze_eventSBZLifeActionTagEventDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.ActionSlot=ActionSlot; \
	Parms.Tag=Tag; \
	Parms.bActive=bActive ? true : false; \
	SBZLifeActionTagEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionTagEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
