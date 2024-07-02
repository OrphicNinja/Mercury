// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerLoadoutConfig;
#ifdef STARBREEZE_OnPlayerLoadoutConfigChangedDelegate_generated_h
#error "OnPlayerLoadoutConfigChangedDelegate.generated.h already included, missing '#pragma once' in OnPlayerLoadoutConfigChangedDelegate.h"
#endif
#define STARBREEZE_OnPlayerLoadoutConfigChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayerLoadoutConfigChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnPlayerLoadoutConfigChanged_Parms \
{ \
	FSBZPlayerLoadoutConfig PlayerLoadout; \
	int32 PlayerLoadoutIndex; \
}; \
static inline void FOnPlayerLoadoutConfigChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerLoadoutConfigChanged, FSBZPlayerLoadoutConfig const& PlayerLoadout, int32 PlayerLoadoutIndex) \
{ \
	_Script_Starbreeze_eventOnPlayerLoadoutConfigChanged_Parms Parms; \
	Parms.PlayerLoadout=PlayerLoadout; \
	Parms.PlayerLoadoutIndex=PlayerLoadoutIndex; \
	OnPlayerLoadoutConfigChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayerLoadoutConfigChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
