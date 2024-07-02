// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerStateAddedEvent;
#ifdef STARBREEZE_OnPlayerStateAddedDelegate_generated_h
#error "OnPlayerStateAddedDelegate.generated.h already included, missing '#pragma once' in OnPlayerStateAddedDelegate.h"
#endif
#define STARBREEZE_OnPlayerStateAddedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayerStateAddedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnPlayerStateAdded_Parms \
{ \
	FSBZPlayerStateAddedEvent PlayerStateAddedEventData; \
}; \
static inline void FOnPlayerStateAdded_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStateAdded, FSBZPlayerStateAddedEvent const& PlayerStateAddedEventData) \
{ \
	_Script_Starbreeze_eventOnPlayerStateAdded_Parms Parms; \
	Parms.PlayerStateAddedEventData=PlayerStateAddedEventData; \
	OnPlayerStateAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayerStateAddedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
