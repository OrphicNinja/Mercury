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
enum class ESBZLifeActionStopReason : uint8;
#ifdef STARBREEZE_SBZLifeActionStopEventDelegateDelegate_generated_h
#error "SBZLifeActionStopEventDelegateDelegate.generated.h already included, missing '#pragma once' in SBZLifeActionStopEventDelegateDelegate.h"
#endif
#define STARBREEZE_SBZLifeActionStopEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLifeActionStopEventDelegateDelegate_h_10_DELEGATE \
struct _Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms \
{ \
	ASBZCharacter* Character; \
	USBZLifeActionInstance* ActionInstance; \
	USBZLifeActionSlot* ActionSlot; \
	ESBZLifeActionStopReason Result; \
}; \
static inline void FSBZLifeActionStopEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZLifeActionStopEventDelegate, ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) \
{ \
	_Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.ActionInstance=ActionInstance; \
	Parms.ActionSlot=ActionSlot; \
	Parms.Result=Result; \
	SBZLifeActionStopEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLifeActionStopEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
