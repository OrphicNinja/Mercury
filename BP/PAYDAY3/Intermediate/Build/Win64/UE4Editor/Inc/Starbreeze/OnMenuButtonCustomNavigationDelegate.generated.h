// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUINavigation : uint8;
#ifdef STARBREEZE_OnMenuButtonCustomNavigationDelegate_generated_h
#error "OnMenuButtonCustomNavigationDelegate.generated.h already included, missing '#pragma once' in OnMenuButtonCustomNavigationDelegate.h"
#endif
#define STARBREEZE_OnMenuButtonCustomNavigationDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMenuButtonCustomNavigationDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnMenuButtonCustomNavigation_Parms \
{ \
	EUINavigation ButtonNavigation; \
}; \
static inline void FOnMenuButtonCustomNavigation_DelegateWrapper(const FMulticastScriptDelegate& OnMenuButtonCustomNavigation, EUINavigation ButtonNavigation) \
{ \
	_Script_Starbreeze_eventOnMenuButtonCustomNavigation_Parms Parms; \
	Parms.ButtonNavigation=ButtonNavigation; \
	OnMenuButtonCustomNavigation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMenuButtonCustomNavigationDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
