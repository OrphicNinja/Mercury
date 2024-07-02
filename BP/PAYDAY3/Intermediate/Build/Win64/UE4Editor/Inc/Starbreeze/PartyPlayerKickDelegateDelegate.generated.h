// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PartyPlayerKickDelegateDelegate_generated_h
#error "PartyPlayerKickDelegateDelegate.generated.h already included, missing '#pragma once' in PartyPlayerKickDelegateDelegate.h"
#endif
#define STARBREEZE_PartyPlayerKickDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PartyPlayerKickDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPartyPlayerKickDelegate_Parms \
{ \
	FString PlayerId; \
}; \
static inline void FPartyPlayerKickDelegate_DelegateWrapper(const FMulticastScriptDelegate& PartyPlayerKickDelegate, const FString& PlayerId) \
{ \
	_Script_Starbreeze_eventPartyPlayerKickDelegate_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	PartyPlayerKickDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PartyPlayerKickDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
