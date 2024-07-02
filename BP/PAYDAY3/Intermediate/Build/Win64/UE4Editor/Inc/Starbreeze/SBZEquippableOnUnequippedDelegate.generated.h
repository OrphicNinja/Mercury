// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZEquippable;
#ifdef STARBREEZE_SBZEquippableOnUnequippedDelegate_generated_h
#error "SBZEquippableOnUnequippedDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnUnequippedDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnUnequippedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnUnequippedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnUnequipped_Parms \
{ \
	const ASBZEquippable* Equippable; \
}; \
static inline void FSBZEquippableOnUnequipped_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnUnequipped, const ASBZEquippable* Equippable) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnUnequipped_Parms Parms; \
	Parms.Equippable=Equippable; \
	SBZEquippableOnUnequipped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnUnequippedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
