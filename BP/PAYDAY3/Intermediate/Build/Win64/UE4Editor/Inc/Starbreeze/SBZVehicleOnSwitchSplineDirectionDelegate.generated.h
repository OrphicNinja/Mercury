// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
#ifdef STARBREEZE_SBZVehicleOnSwitchSplineDirectionDelegate_generated_h
#error "SBZVehicleOnSwitchSplineDirectionDelegate.generated.h already included, missing '#pragma once' in SBZVehicleOnSwitchSplineDirectionDelegate.h"
#endif
#define STARBREEZE_SBZVehicleOnSwitchSplineDirectionDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSwitchSplineDirectionDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZVehicleOnSwitchSplineDirection_Parms \
{ \
	ASBZSpline* Spline; \
}; \
static inline void FSBZVehicleOnSwitchSplineDirection_DelegateWrapper(const FMulticastScriptDelegate& SBZVehicleOnSwitchSplineDirection, ASBZSpline* Spline) \
{ \
	_Script_Starbreeze_eventSBZVehicleOnSwitchSplineDirection_Parms Parms; \
	Parms.Spline=Spline; \
	SBZVehicleOnSwitchSplineDirection.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSwitchSplineDirectionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
