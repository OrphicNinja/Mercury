// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZPlayerPressedReadyEventDelegate_generated_h
#error "SBZPlayerPressedReadyEventDelegate.generated.h already included, missing '#pragma once' in SBZPlayerPressedReadyEventDelegate.h"
#endif
#define STARBREEZE_SBZPlayerPressedReadyEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerPressedReadyEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerPressedReadyEvent_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
}; \
static inline void FSBZPlayerPressedReadyEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerPressedReadyEvent, FUniqueNetIdRepl const& PlayerId) \
{ \
	_Script_Starbreeze_eventSBZPlayerPressedReadyEvent_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	SBZPlayerPressedReadyEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerPressedReadyEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
