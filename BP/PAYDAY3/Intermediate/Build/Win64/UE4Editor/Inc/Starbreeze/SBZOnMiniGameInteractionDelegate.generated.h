// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3MiniGameState : uint8;
#ifdef STARBREEZE_SBZOnMiniGameInteractionDelegate_generated_h
#error "SBZOnMiniGameInteractionDelegate.generated.h already included, missing '#pragma once' in SBZOnMiniGameInteractionDelegate.h"
#endif
#define STARBREEZE_SBZOnMiniGameInteractionDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnMiniGameInteractionDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnMiniGameInteraction_Parms \
{ \
	EPD3MiniGameState OldState; \
	EPD3MiniGameState NewState; \
	bool bInIsLocallyControlled; \
}; \
static inline void FSBZOnMiniGameInteraction_DelegateWrapper(const FMulticastScriptDelegate& SBZOnMiniGameInteraction, EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled) \
{ \
	_Script_Starbreeze_eventSBZOnMiniGameInteraction_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	Parms.bInIsLocallyControlled=bInIsLocallyControlled ? true : false; \
	SBZOnMiniGameInteraction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnMiniGameInteractionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
