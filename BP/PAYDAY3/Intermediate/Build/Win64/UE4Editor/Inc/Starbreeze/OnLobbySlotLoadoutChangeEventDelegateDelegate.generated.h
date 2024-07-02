// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZLobbyCharacterInfoUi;
#ifdef STARBREEZE_OnLobbySlotLoadoutChangeEventDelegateDelegate_generated_h
#error "OnLobbySlotLoadoutChangeEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnLobbySlotLoadoutChangeEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnLobbySlotLoadoutChangeEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnLobbySlotLoadoutChangeEventDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnLobbySlotLoadoutChangeEventDelegate_Parms \
{ \
	TArray<FSBZLobbyCharacterInfoUi> LobbyInfoArray; \
}; \
static inline void FOnLobbySlotLoadoutChangeEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbySlotLoadoutChangeEventDelegate, TArray<FSBZLobbyCharacterInfoUi> const& LobbyInfoArray) \
{ \
	_Script_Starbreeze_eventOnLobbySlotLoadoutChangeEventDelegate_Parms Parms; \
	Parms.LobbyInfoArray=LobbyInfoArray; \
	OnLobbySlotLoadoutChangeEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnLobbySlotLoadoutChangeEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
