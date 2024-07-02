// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZPlayerReadyToTravelDelegateDelegate_generated_h
#error "SBZPlayerReadyToTravelDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPlayerReadyToTravelDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPlayerReadyToTravelDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerReadyToTravelDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerReadyToTravelDelegate_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
}; \
static inline void FSBZPlayerReadyToTravelDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerReadyToTravelDelegate, FUniqueNetIdRepl PlayerId) \
{ \
	_Script_Starbreeze_eventSBZPlayerReadyToTravelDelegate_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	SBZPlayerReadyToTravelDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerReadyToTravelDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
