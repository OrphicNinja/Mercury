// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
struct FSBZOnlineSearchResult;
#ifdef STARBREEZE_OnOnlineSessionSearchEventDelegateDelegate_generated_h
#error "OnOnlineSessionSearchEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnOnlineSessionSearchEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnOnlineSessionSearchEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnOnlineSessionSearchEventDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnOnlineSessionSearchEventDelegate_Parms \
{ \
	ESBZOnlineCode ErrorCode; \
	TArray<FSBZOnlineSearchResult> Results; \
}; \
static inline void FOnOnlineSessionSearchEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOnlineSessionSearchEventDelegate, ESBZOnlineCode ErrorCode, TArray<FSBZOnlineSearchResult> const& Results) \
{ \
	_Script_Starbreeze_eventOnOnlineSessionSearchEventDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Results=Results; \
	OnOnlineSessionSearchEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnOnlineSessionSearchEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
