// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_OnPlayerTalkingChangedDelegate_generated_h
#error "OnPlayerTalkingChangedDelegate.generated.h already included, missing '#pragma once' in OnPlayerTalkingChangedDelegate.h"
#endif
#define STARBREEZE_OnPlayerTalkingChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayerTalkingChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnPlayerTalkingChanged_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
	bool IsTalking; \
}; \
static inline void FOnPlayerTalkingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerTalkingChanged, FUniqueNetIdRepl PlayerId, bool IsTalking) \
{ \
	_Script_Starbreeze_eventOnPlayerTalkingChanged_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	Parms.IsTalking=IsTalking ? true : false; \
	OnPlayerTalkingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayerTalkingChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
