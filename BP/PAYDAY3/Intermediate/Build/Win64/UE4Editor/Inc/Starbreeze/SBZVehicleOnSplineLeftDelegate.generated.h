// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
#ifdef STARBREEZE_SBZVehicleOnSplineLeftDelegate_generated_h
#error "SBZVehicleOnSplineLeftDelegate.generated.h already included, missing '#pragma once' in SBZVehicleOnSplineLeftDelegate.h"
#endif
#define STARBREEZE_SBZVehicleOnSplineLeftDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSplineLeftDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZVehicleOnSplineLeft_Parms \
{ \
	ASBZSpline* Spline; \
}; \
static inline void FSBZVehicleOnSplineLeft_DelegateWrapper(const FMulticastScriptDelegate& SBZVehicleOnSplineLeft, ASBZSpline* Spline) \
{ \
	_Script_Starbreeze_eventSBZVehicleOnSplineLeft_Parms Parms; \
	Parms.Spline=Spline; \
	SBZVehicleOnSplineLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSplineLeftDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
