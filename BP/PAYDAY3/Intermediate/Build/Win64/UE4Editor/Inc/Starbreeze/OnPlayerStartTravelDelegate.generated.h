// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_OnPlayerStartTravelDelegate_generated_h
#error "OnPlayerStartTravelDelegate.generated.h already included, missing '#pragma once' in OnPlayerStartTravelDelegate.h"
#endif
#define STARBREEZE_OnPlayerStartTravelDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayerStartTravelDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnPlayerStartTravel_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
}; \
static inline void FOnPlayerStartTravel_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStartTravel, FUniqueNetIdRepl const& PlayerId) \
{ \
	_Script_Starbreeze_eventOnPlayerStartTravel_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	OnPlayerStartTravel.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayerStartTravelDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
