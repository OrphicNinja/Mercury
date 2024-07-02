// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerStateRemovedEvent;
#ifdef STARBREEZE_OnPlayerStateRemovedDelegate_generated_h
#error "OnPlayerStateRemovedDelegate.generated.h already included, missing '#pragma once' in OnPlayerStateRemovedDelegate.h"
#endif
#define STARBREEZE_OnPlayerStateRemovedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayerStateRemovedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnPlayerStateRemoved_Parms \
{ \
	FSBZPlayerStateRemovedEvent PlayerStateRemovedEventData; \
}; \
static inline void FOnPlayerStateRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStateRemoved, FSBZPlayerStateRemovedEvent const& PlayerStateRemovedEventData) \
{ \
	_Script_Starbreeze_eventOnPlayerStateRemoved_Parms Parms; \
	Parms.PlayerStateRemovedEventData=PlayerStateRemovedEventData; \
	OnPlayerStateRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayerStateRemovedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
