// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ChatChannelJoinDelegateDelegate_generated_h
#error "ChatChannelJoinDelegateDelegate.generated.h already included, missing '#pragma once' in ChatChannelJoinDelegateDelegate.h"
#endif
#define STARBREEZE_ChatChannelJoinDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ChatChannelJoinDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventChatChannelJoinDelegate_Parms \
{ \
	FString ChannelSlug; \
}; \
static inline void FChatChannelJoinDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChatChannelJoinDelegate, const FString& ChannelSlug) \
{ \
	_Script_Starbreeze_eventChatChannelJoinDelegate_Parms Parms; \
	Parms.ChannelSlug=ChannelSlug; \
	ChatChannelJoinDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ChatChannelJoinDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
