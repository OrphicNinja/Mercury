// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPowerUpChargesState : uint8;
#ifdef STARBREEZE_SBZPowerUpChargesStateDelegateDelegate_generated_h
#error "SBZPowerUpChargesStateDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPowerUpChargesStateDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPowerUpChargesStateDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPowerUpChargesStateDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPowerUpChargesStateDelegate_Parms \
{ \
	ESBZPowerUpChargesState OldState; \
	ESBZPowerUpChargesState NewState; \
}; \
static inline void FSBZPowerUpChargesStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZPowerUpChargesStateDelegate, ESBZPowerUpChargesState OldState, ESBZPowerUpChargesState NewState) \
{ \
	_Script_Starbreeze_eventSBZPowerUpChargesStateDelegate_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	SBZPowerUpChargesStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPowerUpChargesStateDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
