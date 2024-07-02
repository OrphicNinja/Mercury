// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZOnPlayerStartTravelEventDelegate_generated_h
#error "SBZOnPlayerStartTravelEventDelegate.generated.h already included, missing '#pragma once' in SBZOnPlayerStartTravelEventDelegate.h"
#endif
#define STARBREEZE_SBZOnPlayerStartTravelEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerStartTravelEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlayerStartTravelEvent_Parms \
{ \
	FUniqueNetIdRepl InPlayerId; \
}; \
static inline void FSBZOnPlayerStartTravelEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlayerStartTravelEvent, FUniqueNetIdRepl const& InPlayerId) \
{ \
	_Script_Starbreeze_eventSBZOnPlayerStartTravelEvent_Parms Parms; \
	Parms.InPlayerId=InPlayerId; \
	SBZOnPlayerStartTravelEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerStartTravelEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
