// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZSystemChatEvent;
#ifdef STARBREEZE_SBZSystemChatMessageEventDelegate_generated_h
#error "SBZSystemChatMessageEventDelegate.generated.h already included, missing '#pragma once' in SBZSystemChatMessageEventDelegate.h"
#endif
#define STARBREEZE_SBZSystemChatMessageEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSystemChatMessageEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZSystemChatMessageEvent_Parms \
{ \
	FSBZSystemChatEvent ChatEventData; \
}; \
static inline void FSBZSystemChatMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZSystemChatMessageEvent, FSBZSystemChatEvent const& ChatEventData) \
{ \
	_Script_Starbreeze_eventSBZSystemChatMessageEvent_Parms Parms; \
	Parms.ChatEventData=ChatEventData; \
	SBZSystemChatMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSystemChatMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
