// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineJoinType : uint8;
#ifdef STARBREEZE_OnlinePartyJoinTypeUpdatedDelegateDelegate_generated_h
#error "OnlinePartyJoinTypeUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in OnlinePartyJoinTypeUpdatedDelegateDelegate.h"
#endif
#define STARBREEZE_OnlinePartyJoinTypeUpdatedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnlinePartyJoinTypeUpdatedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnlinePartyJoinTypeUpdatedDelegate_Parms \
{ \
	ESBZOnlineJoinType NewJoinType; \
}; \
static inline void FOnlinePartyJoinTypeUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnlinePartyJoinTypeUpdatedDelegate, ESBZOnlineJoinType NewJoinType) \
{ \
	_Script_Starbreeze_eventOnlinePartyJoinTypeUpdatedDelegate_Parms Parms; \
	Parms.NewJoinType=NewJoinType; \
	OnlinePartyJoinTypeUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnlinePartyJoinTypeUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
