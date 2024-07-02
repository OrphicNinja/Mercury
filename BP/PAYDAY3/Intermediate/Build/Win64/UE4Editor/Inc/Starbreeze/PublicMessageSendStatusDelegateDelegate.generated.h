// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PublicMessageSendStatusDelegateDelegate_generated_h
#error "PublicMessageSendStatusDelegateDelegate.generated.h already included, missing '#pragma once' in PublicMessageSendStatusDelegateDelegate.h"
#endif
#define STARBREEZE_PublicMessageSendStatusDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PublicMessageSendStatusDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPublicMessageSendStatusDelegate_Parms \
{ \
	bool bResult; \
	FString Message; \
	FString UserId; \
	FString RoomId; \
}; \
static inline void FPublicMessageSendStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& PublicMessageSendStatusDelegate, bool bResult, const FString& Message, const FString& UserId, const FString& RoomId) \
{ \
	_Script_Starbreeze_eventPublicMessageSendStatusDelegate_Parms Parms; \
	Parms.bResult=bResult ? true : false; \
	Parms.Message=Message; \
	Parms.UserId=UserId; \
	Parms.RoomId=RoomId; \
	PublicMessageSendStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PublicMessageSendStatusDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
