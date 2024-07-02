// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMainMenuCosmeticItemButton;
#ifdef STARBREEZE_OnCosmeticButtonSelectedDelegate_generated_h
#error "OnCosmeticButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnCosmeticButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnCosmeticButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnCosmeticButtonSelectedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnCosmeticButtonSelected_Parms \
{ \
	USBZMainMenuCosmeticItemButton* CosmeticButton; \
}; \
static inline void FOnCosmeticButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& OnCosmeticButtonSelected, USBZMainMenuCosmeticItemButton* CosmeticButton) \
{ \
	_Script_Starbreeze_eventOnCosmeticButtonSelected_Parms Parms; \
	Parms.CosmeticButton=CosmeticButton; \
	OnCosmeticButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnCosmeticButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
