// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
#ifdef STARBREEZE_SBZAerialVehicleOnStateExitDelegate_generated_h
#error "SBZAerialVehicleOnStateExitDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnStateExitDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnStateExitDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnStateExitDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnStateExit_Parms \
{ \
	ASBZAerialVehicle* Vehicle; \
	FName State; \
}; \
static inline void FSBZAerialVehicleOnStateExit_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnStateExit, ASBZAerialVehicle* Vehicle, FName State) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnStateExit_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	Parms.State=State; \
	SBZAerialVehicleOnStateExit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnStateExitDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
