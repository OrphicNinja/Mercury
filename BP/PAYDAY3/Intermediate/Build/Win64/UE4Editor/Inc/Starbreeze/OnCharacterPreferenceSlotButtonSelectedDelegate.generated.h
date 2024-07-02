// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCharacterPreferenceCharacterSlotButton;
#ifdef STARBREEZE_OnCharacterPreferenceSlotButtonSelectedDelegate_generated_h
#error "OnCharacterPreferenceSlotButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnCharacterPreferenceSlotButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnCharacterPreferenceSlotButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnCharacterPreferenceSlotButtonSelectedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnCharacterPreferenceSlotButtonSelected_Parms \
{ \
	USBZCharacterPreferenceCharacterSlotButton* Button; \
}; \
static inline void FOnCharacterPreferenceSlotButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterPreferenceSlotButtonSelected, USBZCharacterPreferenceCharacterSlotButton* Button) \
{ \
	_Script_Starbreeze_eventOnCharacterPreferenceSlotButtonSelected_Parms Parms; \
	Parms.Button=Button; \
	OnCharacterPreferenceSlotButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnCharacterPreferenceSlotButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
