// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZOnPlayerToReadyEventDelegate_generated_h
#error "SBZOnPlayerToReadyEventDelegate.generated.h already included, missing '#pragma once' in SBZOnPlayerToReadyEventDelegate.h"
#endif
#define STARBREEZE_SBZOnPlayerToReadyEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerToReadyEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlayerToReadyEvent_Parms \
{ \
	FUniqueNetIdRepl InPlayerId; \
	FString PlayerDisplayName; \
}; \
static inline void FSBZOnPlayerToReadyEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlayerToReadyEvent, FUniqueNetIdRepl const& InPlayerId, const FString& PlayerDisplayName) \
{ \
	_Script_Starbreeze_eventSBZOnPlayerToReadyEvent_Parms Parms; \
	Parms.InPlayerId=InPlayerId; \
	Parms.PlayerDisplayName=PlayerDisplayName; \
	SBZOnPlayerToReadyEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerToReadyEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
