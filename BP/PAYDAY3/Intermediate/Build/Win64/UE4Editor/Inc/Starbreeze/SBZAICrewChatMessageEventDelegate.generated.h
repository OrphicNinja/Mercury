// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZAICrewChatEvent;
#ifdef STARBREEZE_SBZAICrewChatMessageEventDelegate_generated_h
#error "SBZAICrewChatMessageEventDelegate.generated.h already included, missing '#pragma once' in SBZAICrewChatMessageEventDelegate.h"
#endif
#define STARBREEZE_SBZAICrewChatMessageEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICrewChatMessageEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZAICrewChatMessageEvent_Parms \
{ \
	FSBZAICrewChatEvent ChatEventData; \
}; \
static inline void FSBZAICrewChatMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZAICrewChatMessageEvent, FSBZAICrewChatEvent const& ChatEventData) \
{ \
	_Script_Starbreeze_eventSBZAICrewChatMessageEvent_Parms Parms; \
	Parms.ChatEventData=ChatEventData; \
	SBZAICrewChatMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICrewChatMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
