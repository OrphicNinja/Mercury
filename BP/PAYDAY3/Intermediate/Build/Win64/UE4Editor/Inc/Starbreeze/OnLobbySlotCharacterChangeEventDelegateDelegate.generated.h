// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;
#ifdef STARBREEZE_OnLobbySlotCharacterChangeEventDelegateDelegate_generated_h
#error "OnLobbySlotCharacterChangeEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnLobbySlotCharacterChangeEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnLobbySlotCharacterChangeEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnLobbySlotCharacterChangeEventDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnLobbySlotCharacterChangeEventDelegate_Parms \
{ \
	int32 SlotIndex; \
	FSoftObjectPath SelectedCharacter; \
}; \
static inline void FOnLobbySlotCharacterChangeEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbySlotCharacterChangeEventDelegate, int32 SlotIndex, const FSoftObjectPath SelectedCharacter) \
{ \
	_Script_Starbreeze_eventOnLobbySlotCharacterChangeEventDelegate_Parms Parms; \
	Parms.SlotIndex=SlotIndex; \
	Parms.SelectedCharacter=SelectedCharacter; \
	OnLobbySlotCharacterChangeEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnLobbySlotCharacterChangeEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
