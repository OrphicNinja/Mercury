// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAerialVehicleOnDoorStateChangedDelegate_generated_h
#error "SBZAerialVehicleOnDoorStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnDoorStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnDoorStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnDoorStateChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnDoorStateChanged_Parms \
{ \
	uint8 NewState; \
	uint8 OldState; \
}; \
static inline void FSBZAerialVehicleOnDoorStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnDoorStateChanged, uint8 NewState, uint8 OldState) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnDoorStateChanged_Parms Parms; \
	Parms.NewState=NewState; \
	Parms.OldState=OldState; \
	SBZAerialVehicleOnDoorStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnDoorStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
