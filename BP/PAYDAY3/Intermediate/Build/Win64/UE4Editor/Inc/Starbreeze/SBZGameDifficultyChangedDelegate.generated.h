// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZGameDifficultyChangedEvent;
#ifdef STARBREEZE_SBZGameDifficultyChangedDelegate_generated_h
#error "SBZGameDifficultyChangedDelegate.generated.h already included, missing '#pragma once' in SBZGameDifficultyChangedDelegate.h"
#endif
#define STARBREEZE_SBZGameDifficultyChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameDifficultyChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZGameDifficultyChanged_Parms \
{ \
	FSBZGameDifficultyChangedEvent GameDifficultyData; \
}; \
static inline void FSBZGameDifficultyChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZGameDifficultyChanged, FSBZGameDifficultyChangedEvent const& GameDifficultyData) \
{ \
	_Script_Starbreeze_eventSBZGameDifficultyChanged_Parms Parms; \
	Parms.GameDifficultyData=GameDifficultyData; \
	SBZGameDifficultyChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameDifficultyChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
