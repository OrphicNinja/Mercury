// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
#ifdef STARBREEZE_OnMenuButtonSelectedDelegate_generated_h
#error "OnMenuButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnMenuButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnMenuButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMenuButtonSelectedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMenuButtonSelected_Parms \
{ \
	USBZMenuButton* Button; \
}; \
static inline void FOnMenuButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonSelected, USBZMenuButton* Button) \
{ \
	_Script_Starbreeze_eventOnMenuButtonSelected_Parms Parms; \
	Parms.Button=Button; \
	OnMenuButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMenuButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
