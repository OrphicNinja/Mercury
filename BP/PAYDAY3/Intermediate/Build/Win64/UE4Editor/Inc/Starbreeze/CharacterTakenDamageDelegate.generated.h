// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZDamageEvent;
#ifdef STARBREEZE_CharacterTakenDamageDelegate_generated_h
#error "CharacterTakenDamageDelegate.generated.h already included, missing '#pragma once' in CharacterTakenDamageDelegate.h"
#endif
#define STARBREEZE_CharacterTakenDamageDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_CharacterTakenDamageDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventCharacterTakenDamage_Parms \
{ \
	FSBZDamageEvent DamageEventData; \
}; \
static inline void FCharacterTakenDamage_DelegateWrapper(const FMulticastScriptDelegate& CharacterTakenDamage, FSBZDamageEvent const& DamageEventData) \
{ \
	_Script_Starbreeze_eventCharacterTakenDamage_Parms Parms; \
	Parms.DamageEventData=DamageEventData; \
	CharacterTakenDamage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_CharacterTakenDamageDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
