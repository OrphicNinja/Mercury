// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZEquippableLoadoutSlot : uint8;
#ifdef STARBREEZE_OnWeaponButtonSelectedDelegate_generated_h
#error "OnWeaponButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnWeaponButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnWeaponButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnWeaponButtonSelectedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnWeaponButtonSelected_Parms \
{ \
	ESBZEquippableLoadoutSlot EquippableSlot; \
	int32 ActiveWeaponIndex; \
}; \
static inline void FOnWeaponButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponButtonSelected, ESBZEquippableLoadoutSlot EquippableSlot, int32 ActiveWeaponIndex) \
{ \
	_Script_Starbreeze_eventOnWeaponButtonSelected_Parms Parms; \
	Parms.EquippableSlot=EquippableSlot; \
	Parms.ActiveWeaponIndex=ActiveWeaponIndex; \
	OnWeaponButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnWeaponButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
