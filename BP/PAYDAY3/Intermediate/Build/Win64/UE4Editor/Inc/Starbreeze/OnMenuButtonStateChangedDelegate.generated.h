// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
#ifdef STARBREEZE_OnMenuButtonStateChangedDelegate_generated_h
#error "OnMenuButtonStateChangedDelegate.generated.h already included, missing '#pragma once' in OnMenuButtonStateChangedDelegate.h"
#endif
#define STARBREEZE_OnMenuButtonStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMenuButtonStateChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMenuButtonStateChanged_Parms \
{ \
	USBZMenuButton* Button; \
	bool bIsEnabled; \
}; \
static inline void FOnMenuButtonStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonStateChanged, USBZMenuButton* Button, bool bIsEnabled) \
{ \
	_Script_Starbreeze_eventOnMenuButtonStateChanged_Parms Parms; \
	Parms.Button=Button; \
	Parms.bIsEnabled=bIsEnabled ? true : false; \
	OnMenuButtonStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMenuButtonStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
