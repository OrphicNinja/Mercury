// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlackScreenTransitionType : uint8;
#ifdef STARBREEZE_OnAllPlayersReadyDelegateDelegate_generated_h
#error "OnAllPlayersReadyDelegateDelegate.generated.h already included, missing '#pragma once' in OnAllPlayersReadyDelegateDelegate.h"
#endif
#define STARBREEZE_OnAllPlayersReadyDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnAllPlayersReadyDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnAllPlayersReadyDelegate_Parms \
{ \
	EBlackScreenTransitionType BlackScreenTransitionType; \
}; \
static inline void FOnAllPlayersReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAllPlayersReadyDelegate, EBlackScreenTransitionType BlackScreenTransitionType) \
{ \
	_Script_Starbreeze_eventOnAllPlayersReadyDelegate_Parms Parms; \
	Parms.BlackScreenTransitionType=BlackScreenTransitionType; \
	OnAllPlayersReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnAllPlayersReadyDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
