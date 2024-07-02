// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PartyPlayerJoinDelegateDelegate_generated_h
#error "PartyPlayerJoinDelegateDelegate.generated.h already included, missing '#pragma once' in PartyPlayerJoinDelegateDelegate.h"
#endif
#define STARBREEZE_PartyPlayerJoinDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PartyPlayerJoinDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPartyPlayerJoinDelegate_Parms \
{ \
	FString PlayerId; \
}; \
static inline void FPartyPlayerJoinDelegate_DelegateWrapper(const FMulticastScriptDelegate& PartyPlayerJoinDelegate, const FString& PlayerId) \
{ \
	_Script_Starbreeze_eventPartyPlayerJoinDelegate_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	PartyPlayerJoinDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PartyPlayerJoinDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
