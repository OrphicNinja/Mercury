// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZOnlineSearchResult;
#ifdef STARBREEZE_OnInviteProcessingBeginDelegateDelegate_generated_h
#error "OnInviteProcessingBeginDelegateDelegate.generated.h already included, missing '#pragma once' in OnInviteProcessingBeginDelegateDelegate.h"
#endif
#define STARBREEZE_OnInviteProcessingBeginDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnInviteProcessingBeginDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnInviteProcessingBeginDelegate_Parms \
{ \
	FSBZOnlineSearchResult RemoteSessionInfo; \
}; \
static inline void FOnInviteProcessingBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInviteProcessingBeginDelegate, FSBZOnlineSearchResult const& RemoteSessionInfo) \
{ \
	_Script_Starbreeze_eventOnInviteProcessingBeginDelegate_Parms Parms; \
	Parms.RemoteSessionInfo=RemoteSessionInfo; \
	OnInviteProcessingBeginDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnInviteProcessingBeginDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
