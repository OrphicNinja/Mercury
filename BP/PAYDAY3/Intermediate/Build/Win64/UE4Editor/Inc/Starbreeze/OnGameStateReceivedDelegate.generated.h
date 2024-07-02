// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;
#ifdef STARBREEZE_OnGameStateReceivedDelegate_generated_h
#error "OnGameStateReceivedDelegate.generated.h already included, missing '#pragma once' in OnGameStateReceivedDelegate.h"
#endif
#define STARBREEZE_OnGameStateReceivedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnGameStateReceivedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnGameStateReceived_Parms \
{ \
	AGameStateBase* GameState; \
}; \
static inline void FOnGameStateReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGameStateReceived, AGameStateBase* GameState) \
{ \
	_Script_Starbreeze_eventOnGameStateReceived_Parms Parms; \
	Parms.GameState=GameState; \
	OnGameStateReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnGameStateReceivedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
