// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
struct FSBZNewsFeedList;
#ifdef STARBREEZE_OnOnlineGetNewsFeedEventDelegateDelegate_generated_h
#error "OnOnlineGetNewsFeedEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnOnlineGetNewsFeedEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnOnlineGetNewsFeedEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnOnlineGetNewsFeedEventDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnOnlineGetNewsFeedEventDelegate_Parms \
{ \
	ESBZOnlineCode ErrorCode; \
	FSBZNewsFeedList NewsFeedList; \
}; \
static inline void FOnOnlineGetNewsFeedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOnlineGetNewsFeedEventDelegate, ESBZOnlineCode ErrorCode, FSBZNewsFeedList const& NewsFeedList) \
{ \
	_Script_Starbreeze_eventOnOnlineGetNewsFeedEventDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.NewsFeedList=NewsFeedList; \
	OnOnlineGetNewsFeedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnOnlineGetNewsFeedEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
