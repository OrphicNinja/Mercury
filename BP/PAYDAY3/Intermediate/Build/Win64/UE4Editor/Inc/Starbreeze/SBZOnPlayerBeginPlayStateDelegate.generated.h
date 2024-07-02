// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerController;
#ifdef STARBREEZE_SBZOnPlayerBeginPlayStateDelegate_generated_h
#error "SBZOnPlayerBeginPlayStateDelegate.generated.h already included, missing '#pragma once' in SBZOnPlayerBeginPlayStateDelegate.h"
#endif
#define STARBREEZE_SBZOnPlayerBeginPlayStateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerBeginPlayStateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlayerBeginPlayState_Parms \
{ \
	ASBZPlayerController* PlayerController; \
}; \
static inline void FSBZOnPlayerBeginPlayState_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlayerBeginPlayState, ASBZPlayerController* PlayerController) \
{ \
	_Script_Starbreeze_eventSBZOnPlayerBeginPlayState_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	SBZOnPlayerBeginPlayState.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerBeginPlayStateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
