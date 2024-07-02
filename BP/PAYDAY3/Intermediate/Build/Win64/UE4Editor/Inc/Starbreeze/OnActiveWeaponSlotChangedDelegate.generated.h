// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZEquippableLoadoutSlot : uint8;
#ifdef STARBREEZE_OnActiveWeaponSlotChangedDelegate_generated_h
#error "OnActiveWeaponSlotChangedDelegate.generated.h already included, missing '#pragma once' in OnActiveWeaponSlotChangedDelegate.h"
#endif
#define STARBREEZE_OnActiveWeaponSlotChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnActiveWeaponSlotChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnActiveWeaponSlotChanged_Parms \
{ \
	ESBZEquippableLoadoutSlot EquippableSlot; \
	int32 EquippableSlotIndex; \
}; \
static inline void FOnActiveWeaponSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActiveWeaponSlotChanged, ESBZEquippableLoadoutSlot EquippableSlot, int32 EquippableSlotIndex) \
{ \
	_Script_Starbreeze_eventOnActiveWeaponSlotChanged_Parms Parms; \
	Parms.EquippableSlot=EquippableSlot; \
	Parms.EquippableSlotIndex=EquippableSlotIndex; \
	OnActiveWeaponSlotChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnActiveWeaponSlotChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
