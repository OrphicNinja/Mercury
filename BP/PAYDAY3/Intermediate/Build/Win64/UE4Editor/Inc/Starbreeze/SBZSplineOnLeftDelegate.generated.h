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
#ifdef STARBREEZE_SBZSplineOnLeftDelegate_generated_h
#error "SBZSplineOnLeftDelegate.generated.h already included, missing '#pragma once' in SBZSplineOnLeftDelegate.h"
#endif
#define STARBREEZE_SBZSplineOnLeftDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSplineOnLeftDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZSplineOnLeft_Parms \
{ \
	ASBZSpline* Spline; \
	AActor* Actor; \
}; \
static inline void FSBZSplineOnLeft_DelegateWrapper(const FMulticastScriptDelegate& SBZSplineOnLeft, ASBZSpline* Spline, AActor* Actor) \
{ \
	_Script_Starbreeze_eventSBZSplineOnLeft_Parms Parms; \
	Parms.Spline=Spline; \
	Parms.Actor=Actor; \
	SBZSplineOnLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSplineOnLeftDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
