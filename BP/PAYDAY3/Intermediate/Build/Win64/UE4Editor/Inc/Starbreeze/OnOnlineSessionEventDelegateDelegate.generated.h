// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_OnOnlineSessionEventDelegateDelegate_generated_h
#error "OnOnlineSessionEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnOnlineSessionEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnOnlineSessionEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnOnlineSessionEventDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnOnlineSessionEventDelegate_Parms \
{ \
	ESBZOnlineCode ErrorCode; \
}; \
static inline void FOnOnlineSessionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOnlineSessionEventDelegate, ESBZOnlineCode ErrorCode) \
{ \
	_Script_Starbreeze_eventOnOnlineSessionEventDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	OnOnlineSessionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnOnlineSessionEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
