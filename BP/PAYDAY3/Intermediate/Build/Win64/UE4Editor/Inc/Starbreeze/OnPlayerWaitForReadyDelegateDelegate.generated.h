// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_OnPlayerWaitForReadyDelegateDelegate_generated_h
#error "OnPlayerWaitForReadyDelegateDelegate.generated.h already included, missing '#pragma once' in OnPlayerWaitForReadyDelegateDelegate.h"
#endif
#define STARBREEZE_OnPlayerWaitForReadyDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlayerWaitForReadyDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnPlayerWaitForReadyDelegate_Parms \
{ \
	FUniqueNetIdRepl WaitForReadyPlayerId; \
}; \
static inline void FOnPlayerWaitForReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerWaitForReadyDelegate, FUniqueNetIdRepl const& WaitForReadyPlayerId) \
{ \
	_Script_Starbreeze_eventOnPlayerWaitForReadyDelegate_Parms Parms; \
	Parms.WaitForReadyPlayerId=WaitForReadyPlayerId; \
	OnPlayerWaitForReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlayerWaitForReadyDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
