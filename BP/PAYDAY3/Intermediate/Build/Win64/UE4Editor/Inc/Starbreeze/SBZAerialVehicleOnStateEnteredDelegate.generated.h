// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
#ifdef STARBREEZE_SBZAerialVehicleOnStateEnteredDelegate_generated_h
#error "SBZAerialVehicleOnStateEnteredDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnStateEnteredDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnStateEnteredDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnStateEnteredDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnStateEntered_Parms \
{ \
	ASBZAerialVehicle* Vehicle; \
	FName State; \
}; \
static inline void FSBZAerialVehicleOnStateEntered_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnStateEntered, ASBZAerialVehicle* Vehicle, FName State) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnStateEntered_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	Parms.State=State; \
	SBZAerialVehicleOnStateEntered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnStateEnteredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
