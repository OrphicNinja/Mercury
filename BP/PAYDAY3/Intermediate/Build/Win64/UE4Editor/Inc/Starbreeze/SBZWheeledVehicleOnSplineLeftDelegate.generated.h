// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZWheeledVehicle;
class ASBZSpline;
#ifdef STARBREEZE_SBZWheeledVehicleOnSplineLeftDelegate_generated_h
#error "SBZWheeledVehicleOnSplineLeftDelegate.generated.h already included, missing '#pragma once' in SBZWheeledVehicleOnSplineLeftDelegate.h"
#endif
#define STARBREEZE_SBZWheeledVehicleOnSplineLeftDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnSplineLeftDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZWheeledVehicleOnSplineLeft_Parms \
{ \
	ASBZWheeledVehicle* Vehicle; \
	ASBZSpline* Spline; \
}; \
static inline void FSBZWheeledVehicleOnSplineLeft_DelegateWrapper(const FMulticastScriptDelegate& SBZWheeledVehicleOnSplineLeft, ASBZWheeledVehicle* Vehicle, ASBZSpline* Spline) \
{ \
	_Script_Starbreeze_eventSBZWheeledVehicleOnSplineLeft_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	Parms.Spline=Spline; \
	SBZWheeledVehicleOnSplineLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnSplineLeftDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
