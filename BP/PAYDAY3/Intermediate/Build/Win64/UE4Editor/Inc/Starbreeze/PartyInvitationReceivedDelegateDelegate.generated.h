// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PartyInvitationReceivedDelegateDelegate_generated_h
#error "PartyInvitationReceivedDelegateDelegate.generated.h already included, missing '#pragma once' in PartyInvitationReceivedDelegateDelegate.h"
#endif
#define STARBREEZE_PartyInvitationReceivedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PartyInvitationReceivedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPartyInvitationReceivedDelegate_Parms \
{ \
	FString FromPlayerId; \
}; \
static inline void FPartyInvitationReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PartyInvitationReceivedDelegate, const FString& FromPlayerId) \
{ \
	_Script_Starbreeze_eventPartyInvitationReceivedDelegate_Parms Parms; \
	Parms.FromPlayerId=FromPlayerId; \
	PartyInvitationReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PartyInvitationReceivedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
