// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PrivateMessageReceivedDelegateDelegate_generated_h
#error "PrivateMessageReceivedDelegateDelegate.generated.h already included, missing '#pragma once' in PrivateMessageReceivedDelegateDelegate.h"
#endif
#define STARBREEZE_PrivateMessageReceivedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PrivateMessageReceivedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPrivateMessageReceivedDelegate_Parms \
{ \
	FString Timestamp; \
	FString Sender; \
	FString Message; \
	FString RoomId; \
}; \
static inline void FPrivateMessageReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PrivateMessageReceivedDelegate, const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId) \
{ \
	_Script_Starbreeze_eventPrivateMessageReceivedDelegate_Parms Parms; \
	Parms.Timestamp=Timestamp; \
	Parms.Sender=Sender; \
	Parms.Message=Message; \
	Parms.RoomId=RoomId; \
	PrivateMessageReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PrivateMessageReceivedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
