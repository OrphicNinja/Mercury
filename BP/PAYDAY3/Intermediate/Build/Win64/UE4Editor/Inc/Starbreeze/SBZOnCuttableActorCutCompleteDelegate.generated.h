// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZCuttableActor;
#ifdef STARBREEZE_SBZOnCuttableActorCutCompleteDelegate_generated_h
#error "SBZOnCuttableActorCutCompleteDelegate.generated.h already included, missing '#pragma once' in SBZOnCuttableActorCutCompleteDelegate.h"
#endif
#define STARBREEZE_SBZOnCuttableActorCutCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnCuttableActorCutCompleteDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnCuttableActorCutComplete_Parms \
{ \
	ASBZCuttableActor* CuttableActor; \
}; \
static inline void FSBZOnCuttableActorCutComplete_DelegateWrapper(const FMulticastScriptDelegate& SBZOnCuttableActorCutComplete, ASBZCuttableActor* CuttableActor) \
{ \
	_Script_Starbreeze_eventSBZOnCuttableActorCutComplete_Parms Parms; \
	Parms.CuttableActor=CuttableActor; \
	SBZOnCuttableActorCutComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnCuttableActorCutCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
