// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZVotingChatEvent;
#ifdef STARBREEZE_SBZVotingChatMessageEventDelegate_generated_h
#error "SBZVotingChatMessageEventDelegate.generated.h already included, missing '#pragma once' in SBZVotingChatMessageEventDelegate.h"
#endif
#define STARBREEZE_SBZVotingChatMessageEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVotingChatMessageEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZVotingChatMessageEvent_Parms \
{ \
	FSBZVotingChatEvent ChatEventData; \
}; \
static inline void FSBZVotingChatMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZVotingChatMessageEvent, FSBZVotingChatEvent const& ChatEventData) \
{ \
	_Script_Starbreeze_eventSBZVotingChatMessageEvent_Parms Parms; \
	Parms.ChatEventData=ChatEventData; \
	SBZVotingChatMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVotingChatMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
