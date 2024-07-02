// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZEquippable;
#ifdef STARBREEZE_SBZEquippableOnUndroppedDelegate_generated_h
#error "SBZEquippableOnUndroppedDelegate.generated.h already included, missing '#pragma once' in SBZEquippableOnUndroppedDelegate.h"
#endif
#define STARBREEZE_SBZEquippableOnUndroppedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnUndroppedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZEquippableOnUndropped_Parms \
{ \
	const ASBZEquippable* Equippable; \
}; \
static inline void FSBZEquippableOnUndropped_DelegateWrapper(const FMulticastScriptDelegate& SBZEquippableOnUndropped, const ASBZEquippable* Equippable) \
{ \
	_Script_Starbreeze_eventSBZEquippableOnUndropped_Parms Parms; \
	Parms.Equippable=Equippable; \
	SBZEquippableOnUndropped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableOnUndroppedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
