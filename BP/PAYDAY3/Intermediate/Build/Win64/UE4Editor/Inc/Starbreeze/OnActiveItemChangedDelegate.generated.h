// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZItemLoadoutSlot : uint8;
class USBZInventoryBaseData;
#ifdef STARBREEZE_OnActiveItemChangedDelegate_generated_h
#error "OnActiveItemChangedDelegate.generated.h already included, missing '#pragma once' in OnActiveItemChangedDelegate.h"
#endif
#define STARBREEZE_OnActiveItemChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnActiveItemChangedDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventOnActiveItemChanged_Parms \
{ \
	ESBZItemLoadoutSlot ItemSlot; \
	const USBZInventoryBaseData* ActiveItem; \
}; \
static inline void FOnActiveItemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActiveItemChanged, ESBZItemLoadoutSlot ItemSlot, const USBZInventoryBaseData* ActiveItem) \
{ \
	_Script_Starbreeze_eventOnActiveItemChanged_Parms Parms; \
	Parms.ItemSlot=ItemSlot; \
	Parms.ActiveItem=ActiveItem; \
	OnActiveItemChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnActiveItemChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
