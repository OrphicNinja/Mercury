// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZEquippable;
#ifdef STARBREEZE_SBZEquippableOnEquippedDelegate_generated_h
#error "SBZEquippableOnEquippedDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnEquippedDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnEquippedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnEquippedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnEquipped_Parms \
{ \
	const ASBZEquippable* Equippable; \
}; \
static inline void FSBZEquippableOnEquipped_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnEquipped, const ASBZEquippable* Equippable) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnEquipped_Parms Parms; \
	Parms.Equippable=Equippable; \
	SBZEquippableOnEquipped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnEquippedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
