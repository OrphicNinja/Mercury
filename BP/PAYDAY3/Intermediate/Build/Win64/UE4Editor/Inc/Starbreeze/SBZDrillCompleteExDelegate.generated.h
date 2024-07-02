// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZDrillEx;
#ifdef STARBREEZE_SBZDrillCompleteExDelegate_generated_h
#error "SBZDrillCompleteExDelegate.generated.h already included, missing '#pragma once' in SBZDrillCompleteExDelegate.h"
#endif
#define STARBREEZE_SBZDrillCompleteExDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDrillCompleteExDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZDrillCompleteEx_Parms \
{ \
	ASBZDrillEx* Drill; \
}; \
static inline void FSBZDrillCompleteEx_DelegateWrapper(const FMulticastScriptDelegate& SBZDrillCompleteEx, ASBZDrillEx* Drill) \
{ \
	_Script_Starbreeze_eventSBZDrillCompleteEx_Parms Parms; \
	Parms.Drill=Drill; \
	SBZDrillCompleteEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDrillCompleteExDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
