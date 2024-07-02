// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZOnPlayerDisconnectedEventDelegate_generated_h
#error "SBZOnPlayerDisconnectedEventDelegate.generated.h already included, missing '#pragma once' in SBZOnPlayerDisconnectedEventDelegate.h"
#endif
#define STARBREEZE_SBZOnPlayerDisconnectedEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerDisconnectedEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlayerDisconnectedEvent_Parms \
{ \
	FUniqueNetIdRepl InPlayerId; \
}; \
static inline void FSBZOnPlayerDisconnectedEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlayerDisconnectedEvent, FUniqueNetIdRepl const& InPlayerId) \
{ \
	_Script_Starbreeze_eventSBZOnPlayerDisconnectedEvent_Parms Parms; \
	Parms.InPlayerId=InPlayerId; \
	SBZOnPlayerDisconnectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerDisconnectedEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
