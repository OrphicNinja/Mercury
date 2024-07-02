// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
#ifdef STARBREEZE_SBZAerialVehicleOnStoppedDelegate_generated_h
#error "SBZAerialVehicleOnStoppedDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnStoppedDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnStoppedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnStoppedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnStopped_Parms \
{ \
	ASBZAerialVehicle* Vehicle; \
}; \
static inline void FSBZAerialVehicleOnStopped_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnStopped, ASBZAerialVehicle* Vehicle) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnStopped_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	SBZAerialVehicleOnStopped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnStoppedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
