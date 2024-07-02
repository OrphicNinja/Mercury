// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerChatEvent;
#ifdef STARBREEZE_SBZPlayerChatMessageEventDelegate_generated_h
#error "SBZPlayerChatMessageEventDelegate.generated.h already included, missing '#pragma once' in SBZPlayerChatMessageEventDelegate.h"
#endif
#define STARBREEZE_SBZPlayerChatMessageEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerChatMessageEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerChatMessageEvent_Parms \
{ \
	FSBZPlayerChatEvent ChatEventData; \
}; \
static inline void FSBZPlayerChatMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerChatMessageEvent, FSBZPlayerChatEvent const& ChatEventData) \
{ \
	_Script_Starbreeze_eventSBZPlayerChatMessageEvent_Parms Parms; \
	Parms.ChatEventData=ChatEventData; \
	SBZPlayerChatMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerChatMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
