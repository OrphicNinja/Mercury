// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
class ASBZSpline;
#ifdef STARBREEZE_SBZAerialVehicleOnSplineLeftDelegate_generated_h
#error "SBZAerialVehicleOnSplineLeftDelegate.generated.h already included, missing '#pragma once' in SBZAerialVehicleOnSplineLeftDelegate.h"
#endif
#define STARBREEZE_SBZAerialVehicleOnSplineLeftDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnSplineLeftDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZAerialVehicleOnSplineLeft_Parms \
{ \
	ASBZAerialVehicle* Vehicle; \
	ASBZSpline* Spline; \
}; \
static inline void FSBZAerialVehicleOnSplineLeft_DelegateWrapper(const FMulticastScriptDelegate& SBZAerialVehicleOnSplineLeft, ASBZAerialVehicle* Vehicle, ASBZSpline* Spline) \
{ \
	_Script_Starbreeze_eventSBZAerialVehicleOnSplineLeft_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	Parms.Spline=Spline; \
	SBZAerialVehicleOnSplineLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAerialVehicleOnSplineLeftDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
