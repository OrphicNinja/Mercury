// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PartyPlayerLeaveDelegateDelegate_generated_h
#error "PartyPlayerLeaveDelegateDelegate.generated.h already included, missing '#pragma once' in PartyPlayerLeaveDelegateDelegate.h"
#endif
#define STARBREEZE_PartyPlayerLeaveDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PartyPlayerLeaveDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPartyPlayerLeaveDelegate_Parms \
{ \
	FString PlayerId; \
}; \
static inline void FPartyPlayerLeaveDelegate_DelegateWrapper(const FMulticastScriptDelegate& PartyPlayerLeaveDelegate, const FString& PlayerId) \
{ \
	_Script_Starbreeze_eventPartyPlayerLeaveDelegate_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	PartyPlayerLeaveDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PartyPlayerLeaveDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
