// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PrivateMessageSendStatusDelegateDelegate_generated_h
#error "PrivateMessageSendStatusDelegateDelegate.generated.h already included, missing '#pragma once' in PrivateMessageSendStatusDelegateDelegate.h"
#endif
#define STARBREEZE_PrivateMessageSendStatusDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PrivateMessageSendStatusDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPrivateMessageSendStatusDelegate_Parms \
{ \
	bool bResult; \
	FString Message; \
	FString UserId; \
	FString RoomId; \
}; \
static inline void FPrivateMessageSendStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& PrivateMessageSendStatusDelegate, bool bResult, const FString& Message, const FString& UserId, const FString& RoomId) \
{ \
	_Script_Starbreeze_eventPrivateMessageSendStatusDelegate_Parms Parms; \
	Parms.bResult=bResult ? true : false; \
	Parms.Message=Message; \
	Parms.UserId=UserId; \
	Parms.RoomId=RoomId; \
	PrivateMessageSendStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PrivateMessageSendStatusDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
