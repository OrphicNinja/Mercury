// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMainMenuCrimeNetHeistMapIcon;
#ifdef STARBREEZE_OnMapIconButtonClickedDelegate_generated_h
#error "OnMapIconButtonClickedDelegate.generated.h already included, missing '#pragma once' in OnMapIconButtonClickedDelegate.h"
#endif
#define STARBREEZE_OnMapIconButtonClickedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMapIconButtonClickedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMapIconButtonClicked_Parms \
{ \
	USBZMainMenuCrimeNetHeistMapIcon* MapIcon; \
}; \
static inline void FOnMapIconButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnMapIconButtonClicked, USBZMainMenuCrimeNetHeistMapIcon* MapIcon) \
{ \
	_Script_Starbreeze_eventOnMapIconButtonClicked_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	OnMapIconButtonClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMapIconButtonClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
