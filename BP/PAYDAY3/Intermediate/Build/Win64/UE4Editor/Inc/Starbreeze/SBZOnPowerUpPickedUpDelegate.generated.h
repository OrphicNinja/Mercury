// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPowerUp;
#ifdef STARBREEZE_SBZOnPowerUpPickedUpDelegate_generated_h
#error "SBZOnPowerUpPickedUpDelegate.generated.h already included, missing '#pragma once' in SBZOnPowerUpPickedUpDelegate.h"
#endif
#define STARBREEZE_SBZOnPowerUpPickedUpDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPowerUpPickedUpDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPowerUpPickedUp_Parms \
{ \
	ASBZPowerUp* PowerUp; \
}; \
static inline void FSBZOnPowerUpPickedUp_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPowerUpPickedUp, ASBZPowerUp* PowerUp) \
{ \
	_Script_Starbreeze_eventSBZOnPowerUpPickedUp_Parms Parms; \
	Parms.PowerUp=PowerUp; \
	SBZOnPowerUpPickedUp.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPowerUpPickedUpDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
