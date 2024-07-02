// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
#ifdef STARBREEZE_SBZAerialVehicleOnBeginStopDelegate_generated_h
#error "SBZAerialVehicleOnBeginStopDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnBeginStopDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnBeginStopDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnBeginStopDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnBeginStop_Parms \
{ \
	ASBZAerialVehicle* Vehicle; \
}; \
static inline void FSBZAerialVehicleOnBeginStop_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnBeginStop, ASBZAerialVehicle* Vehicle) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnBeginStop_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	SBZAerialVehicleOnBeginStop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnBeginStopDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
