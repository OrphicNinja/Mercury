// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZReviveEvent;
#ifdef STARBREEZE_CharacterRevivedDelegate_generated_h
#error "CharacterRevivedDelegate.generated.h already included, missing '#pragma once' in CharacterRevivedDelegate.h"
#endif
#define STARBREEZE_CharacterRevivedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_CharacterRevivedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventCharacterRevived_Parms \
{ \
	FSBZReviveEvent ReviveEventData; \
}; \
static inline void FCharacterRevived_DelegateWrapper(const FMulticastScriptDelegate& CharacterRevived, FSBZReviveEvent const& ReviveEventData) \
{ \
	_Script_Starbreeze_eventCharacterRevived_Parms Parms; \
	Parms.ReviveEventData=ReviveEventData; \
	CharacterRevived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_CharacterRevivedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
