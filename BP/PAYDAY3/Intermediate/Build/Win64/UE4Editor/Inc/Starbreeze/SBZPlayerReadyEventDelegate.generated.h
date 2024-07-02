// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZPlayerReadyEventDelegate_generated_h
#error "SBZPlayerReadyEventDelegate.generated.h already included, missing '#pragma once' in SBZPlayerReadyEventDelegate.h"
#endif
#define STARBREEZE_SBZPlayerReadyEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerReadyEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerReadyEvent_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
}; \
static inline void FSBZPlayerReadyEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerReadyEvent, FUniqueNetIdRepl const& PlayerId) \
{ \
	_Script_Starbreeze_eventSBZPlayerReadyEvent_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	SBZPlayerReadyEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerReadyEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
