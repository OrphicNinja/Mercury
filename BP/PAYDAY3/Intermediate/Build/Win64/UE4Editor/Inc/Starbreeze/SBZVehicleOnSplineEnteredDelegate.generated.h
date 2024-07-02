// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
#ifdef STARBREEZE_SBZVehicleOnSplineEnteredDelegate_generated_h
#error "SBZVehicleOnSplineEnteredDelegate.generated.h already included, missing '#pragma once' in SBZVehicleOnSplineEnteredDelegate.h"
#endif
#define STARBREEZE_SBZVehicleOnSplineEnteredDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSplineEnteredDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZVehicleOnSplineEntered_Parms \
{ \
	ASBZSpline* Spline; \
	bool bPathEntered; \
	bool bTeleportToPathStart; \
}; \
static inline void FSBZVehicleOnSplineEntered_DelegateWrapper(const FMulticastScriptDelegate& SBZVehicleOnSplineEntered, ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart) \
{ \
	_Script_Starbreeze_eventSBZVehicleOnSplineEntered_Parms Parms; \
	Parms.Spline=Spline; \
	Parms.bPathEntered=bPathEntered ? true : false; \
	Parms.bTeleportToPathStart=bTeleportToPathStart ? true : false; \
	SBZVehicleOnSplineEntered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSplineEnteredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
