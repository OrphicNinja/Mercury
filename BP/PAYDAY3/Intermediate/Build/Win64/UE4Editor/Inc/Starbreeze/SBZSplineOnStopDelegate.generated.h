// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
class AActor;
#ifdef STARBREEZE_SBZSplineOnStopDelegate_generated_h
#error "SBZSplineOnStopDelegate.generated.h already included, missing '#pragma once' in SBZSplineOnStopDelegate.h"
#endif
#define STARBREEZE_SBZSplineOnStopDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSplineOnStopDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZSplineOnStop_Parms \
{ \
	ASBZSpline* Spline; \
	AActor* Actor; \
	float Distance; \
}; \
static inline void FSBZSplineOnStop_DelegateWrapper(const FMulticastScriptDelegate& SBZSplineOnStop, ASBZSpline* Spline, AActor* Actor, float Distance) \
{ \
	_Script_Starbreeze_eventSBZSplineOnStop_Parms Parms; \
	Parms.Spline=Spline; \
	Parms.Actor=Actor; \
	Parms.Distance=Distance; \
	SBZSplineOnStop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSplineOnStopDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
