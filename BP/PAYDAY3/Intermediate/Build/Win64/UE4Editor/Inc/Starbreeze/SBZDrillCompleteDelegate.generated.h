// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZDrill;
#ifdef STARBREEZE_SBZDrillCompleteDelegate_generated_h
#error "SBZDrillCompleteDelegate.generated.h already included, missing '#pragma once' in SBZDrillCompleteDelegate.h"
#endif
#define STARBREEZE_SBZDrillCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDrillCompleteDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZDrillComplete_Parms \
{ \
	ASBZDrill* Drill; \
}; \
static inline void FSBZDrillComplete_DelegateWrapper(const FMulticastScriptDelegate& SBZDrillComplete, ASBZDrill* Drill) \
{ \
	_Script_Starbreeze_eventSBZDrillComplete_Parms Parms; \
	Parms.Drill=Drill; \
	SBZDrillComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDrillCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
