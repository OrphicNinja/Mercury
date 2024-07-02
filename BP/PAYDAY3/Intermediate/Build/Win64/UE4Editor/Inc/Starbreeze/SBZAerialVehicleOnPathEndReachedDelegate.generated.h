// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
#ifdef STARBREEZE_SBZAerialVehicleOnPathEndReachedDelegate_generated_h
#error "SBZAerialVehicleOnPathEndReachedDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnPathEndReachedDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnPathEndReachedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnPathEndReachedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnPathEndReached_Parms \
{ \
	ASBZAerialVehicle* Vehicle; \
}; \
static inline void FSBZAerialVehicleOnPathEndReached_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnPathEndReached, ASBZAerialVehicle* Vehicle) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnPathEndReached_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	SBZAerialVehicleOnPathEndReached.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnPathEndReachedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
