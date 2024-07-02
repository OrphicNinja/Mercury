// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZEquippable;
#ifdef STARBREEZE_SBZEquippableOnUsedDelegate_generated_h
#error "SBZEquippableOnUsedDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnUsedDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnUsedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnUsedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnUsed_Parms \
{ \
	const ASBZEquippable* Equippable; \
}; \
static inline void FSBZEquippableOnUsed_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnUsed, const ASBZEquippable* Equippable) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnUsed_Parms Parms; \
	Parms.Equippable=Equippable; \
	SBZEquippableOnUsed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnUsedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
