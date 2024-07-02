// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZSettingsButton;
#ifdef STARBREEZE_OnSettingsButtonChangedDelegate_generated_h
#error "OnSettingsButtonChangedDelegate.generated.h already included, missing '#pragma once' in OnSettingsButtonChangedDelegate.h"
#endif
#define STARBREEZE_OnSettingsButtonChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnSettingsButtonChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnSettingsButtonChanged_Parms \
{ \
	USBZSettingsButton* Button; \
}; \
static inline void FOnSettingsButtonChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsButtonChanged, USBZSettingsButton* Button) \
{ \
	_Script_Starbreeze_eventOnSettingsButtonChanged_Parms Parms; \
	Parms.Button=Button; \
	OnSettingsButtonChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnSettingsButtonChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
