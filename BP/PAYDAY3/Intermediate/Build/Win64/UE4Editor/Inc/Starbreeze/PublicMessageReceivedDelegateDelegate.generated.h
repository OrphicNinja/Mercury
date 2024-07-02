// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PublicMessageReceivedDelegateDelegate_generated_h
#error "PublicMessageReceivedDelegateDelegate.generated.h already included, missing '#pragma once' in PublicMessageReceivedDelegateDelegate.h"
#endif
#define STARBREEZE_PublicMessageReceivedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PublicMessageReceivedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPublicMessageReceivedDelegate_Parms \
{ \
	FString Timestamp; \
	FString Sender; \
	FString Message; \
}; \
static inline void FPublicMessageReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PublicMessageReceivedDelegate, const FString& Timestamp, const FString& Sender, const FString& Message) \
{ \
	_Script_Starbreeze_eventPublicMessageReceivedDelegate_Parms Parms; \
	Parms.Timestamp=Timestamp; \
	Parms.Sender=Sender; \
	Parms.Message=Message; \
	PublicMessageReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PublicMessageReceivedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
