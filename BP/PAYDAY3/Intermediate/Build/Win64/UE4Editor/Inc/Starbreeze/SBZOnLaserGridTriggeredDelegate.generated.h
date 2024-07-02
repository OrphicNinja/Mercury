// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZLaserGrid;
class ASBZPlayerCharacter;
#ifdef STARBREEZE_SBZOnLaserGridTriggeredDelegate_generated_h
#error "SBZOnLaserGridTriggeredDelegate.generated.h already included, missing '#pragma once' in SBZOnLaserGridTriggeredDelegate.h"
#endif
#define STARBREEZE_SBZOnLaserGridTriggeredDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnLaserGridTriggeredDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZOnLaserGridTriggered_Parms \
{ \
	ASBZLaserGrid* LaserGrid; \
	ASBZPlayerCharacter* PlayerCharacter; \
}; \
static inline void FSBZOnLaserGridTriggered_DelegateWrapper(const FMulticastScriptDelegate& SBZOnLaserGridTriggered, ASBZLaserGrid* LaserGrid, ASBZPlayerCharacter* PlayerCharacter) \
{ \
	_Script_Starbreeze_eventSBZOnLaserGridTriggered_Parms Parms; \
	Parms.LaserGrid=LaserGrid; \
	Parms.PlayerCharacter=PlayerCharacter; \
	SBZOnLaserGridTriggered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnLaserGridTriggeredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
