// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
#ifdef STARBREEZE_SBZVehicleOnSplineEndReachedDelegate_generated_h
#error "SBZVehicleOnSplineEndReachedDelegate.generated.h already included, missing '#pragma once' in SBZVehicleOnSplineEndReachedDelegate.h"
#endif
#define STARBREEZE_SBZVehicleOnSplineEndReachedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSplineEndReachedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZVehicleOnSplineEndReached_Parms \
{ \
	ASBZSpline* Spline; \
}; \
static inline void FSBZVehicleOnSplineEndReached_DelegateWrapper(const FMulticastScriptDelegate& SBZVehicleOnSplineEndReached, ASBZSpline* Spline) \
{ \
	_Script_Starbreeze_eventSBZVehicleOnSplineEndReached_Parms Parms; \
	Parms.Spline=Spline; \
	SBZVehicleOnSplineEndReached.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleOnSplineEndReachedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
