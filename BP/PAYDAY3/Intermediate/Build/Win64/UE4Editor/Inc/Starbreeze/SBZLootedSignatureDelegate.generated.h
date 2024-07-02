// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZInstantLoot;
class ASBZPlayerCharacter;
#ifdef STARBREEZE_SBZLootedSignatureDelegate_generated_h
#error "SBZLootedSignatureDelegate.generated.h already included, missing '#pragma once' in SBZLootedSignatureDelegate.h"
#endif
#define STARBREEZE_SBZLootedSignatureDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLootedSignatureDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZLootedSignature_Parms \
{ \
	ASBZInstantLoot* InstantLoot; \
	ASBZPlayerCharacter* TakenByPlayer; \
}; \
static inline void FSBZLootedSignature_DelegateWrapper(const FMulticastScriptDelegate& SBZLootedSignature, ASBZInstantLoot* InstantLoot, ASBZPlayerCharacter* TakenByPlayer) \
{ \
	_Script_Starbreeze_eventSBZLootedSignature_Parms Parms; \
	Parms.InstantLoot=InstantLoot; \
	Parms.TakenByPlayer=TakenByPlayer; \
	SBZLootedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLootedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
