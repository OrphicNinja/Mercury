// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMainMenuCosmeticItemButton;
#ifdef STARBREEZE_OnCosmeticButtonStateChangedDelegate_generated_h
#error "OnCosmeticButtonStateChangedDelegate.generated.h already included, missing '#pragma once' in OnCosmeticButtonStateChangedDelegate.h"
#endif
#define STARBREEZE_OnCosmeticButtonStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnCosmeticButtonStateChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnCosmeticButtonStateChanged_Parms \
{ \
	USBZMainMenuCosmeticItemButton* CosmeticButton; \
	bool bIsEnabled; \
}; \
static inline void FOnCosmeticButtonStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCosmeticButtonStateChanged, USBZMainMenuCosmeticItemButton* CosmeticButton, bool bIsEnabled) \
{ \
	_Script_Starbreeze_eventOnCosmeticButtonStateChanged_Parms Parms; \
	Parms.CosmeticButton=CosmeticButton; \
	Parms.bIsEnabled=bIsEnabled ? true : false; \
	OnCosmeticButtonStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnCosmeticButtonStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
