// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAICharacter;
class ASBZCharacter;
#ifdef STARBREEZE_SBZOnHumanShieldDelegate_generated_h
#error "SBZOnHumanShieldDelegate.generated.h already included, missing '#pragma once' in SBZOnHumanShieldDelegate.h"
#endif
#define STARBREEZE_SBZOnHumanShieldDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnHumanShieldDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZOnHumanShield_Parms \
{ \
	ASBZAICharacter* Character; \
	ASBZCharacter* Instigator; \
	bool bHumanShield; \
}; \
static inline void FSBZOnHumanShield_DelegateWrapper(const FMulticastScriptDelegate& SBZOnHumanShield, ASBZAICharacter* Character, ASBZCharacter* Instigator, bool bHumanShield) \
{ \
	_Script_Starbreeze_eventSBZOnHumanShield_Parms Parms; \
	Parms.Character=Character; \
	Parms.Instigator=Instigator; \
	Parms.bHumanShield=bHumanShield ? true : false; \
	SBZOnHumanShield.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnHumanShieldDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
