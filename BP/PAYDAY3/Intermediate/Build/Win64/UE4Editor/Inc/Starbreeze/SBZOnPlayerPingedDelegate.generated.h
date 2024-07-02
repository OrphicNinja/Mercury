// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerPingEvent;
#ifdef STARBREEZE_SBZOnPlayerPingedDelegate_generated_h
#error "SBZOnPlayerPingedDelegate.generated.h already included, missing '#pragma once' in SBZOnPlayerPingedDelegate.h"
#endif
#define STARBREEZE_SBZOnPlayerPingedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerPingedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlayerPinged_Parms \
{ \
	FSBZPlayerPingEvent PingEventData; \
}; \
static inline void FSBZOnPlayerPinged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlayerPinged, FSBZPlayerPingEvent const& PingEventData) \
{ \
	_Script_Starbreeze_eventSBZOnPlayerPinged_Parms Parms; \
	Parms.PingEventData=PingEventData; \
	SBZOnPlayerPinged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlayerPingedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
