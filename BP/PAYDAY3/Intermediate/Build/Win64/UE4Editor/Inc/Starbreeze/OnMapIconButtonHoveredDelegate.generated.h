// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMainMenuCrimeNetHeistMapIcon;
#ifdef STARBREEZE_OnMapIconButtonHoveredDelegate_generated_h
#error "OnMapIconButtonHoveredDelegate.generated.h already included, missing '#pragma once' in OnMapIconButtonHoveredDelegate.h"
#endif
#define STARBREEZE_OnMapIconButtonHoveredDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMapIconButtonHoveredDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMapIconButtonHovered_Parms \
{ \
	USBZMainMenuCrimeNetHeistMapIcon* MapIcon; \
	bool bIsHovered; \
}; \
static inline void FOnMapIconButtonHovered_DelegateWrapper(const FMulticastScriptDelegate& OnMapIconButtonHovered, USBZMainMenuCrimeNetHeistMapIcon* MapIcon, bool bIsHovered) \
{ \
	_Script_Starbreeze_eventOnMapIconButtonHovered_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	Parms.bIsHovered=bIsHovered ? true : false; \
	OnMapIconButtonHovered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMapIconButtonHoveredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
