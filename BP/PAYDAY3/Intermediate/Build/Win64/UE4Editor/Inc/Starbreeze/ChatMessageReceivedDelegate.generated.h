// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChatMessage;
#ifdef STARBREEZE_ChatMessageReceivedDelegate_generated_h
#error "ChatMessageReceivedDelegate.generated.h already included, missing '#pragma once' in ChatMessageReceivedDelegate.h"
#endif
#define STARBREEZE_ChatMessageReceivedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ChatMessageReceivedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventChatMessageReceived_Parms \
{ \
	FSBZChatMessage NewChatMessage; \
}; \
static inline void FChatMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& ChatMessageReceived, FSBZChatMessage const& NewChatMessage) \
{ \
	_Script_Starbreeze_eventChatMessageReceived_Parms Parms; \
	Parms.NewChatMessage=NewChatMessage; \
	ChatMessageReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ChatMessageReceivedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
