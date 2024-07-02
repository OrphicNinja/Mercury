// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCharacter;
#ifdef STARBREEZE_SBZOnEnabledAsObjectiveDelegate_generated_h
#error "SBZOnEnabledAsObjectiveDelegate.generated.h already included, missing '#pragma once' in SBZOnEnabledAsObjectiveDelegate.h"
#endif
#define STARBREEZE_SBZOnEnabledAsObjectiveDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnEnabledAsObjectiveDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnEnabledAsObjective_Parms \
{ \
	ASBZCharacter* FoundBy; \
}; \
static inline void FSBZOnEnabledAsObjective_DelegateWrapper(const FMulticastScriptDelegate& SBZOnEnabledAsObjective, ASBZCharacter* FoundBy) \
{ \
	_Script_Starbreeze_eventSBZOnEnabledAsObjective_Parms Parms; \
	Parms.FoundBy=FoundBy; \
	SBZOnEnabledAsObjective.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnEnabledAsObjectiveDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
