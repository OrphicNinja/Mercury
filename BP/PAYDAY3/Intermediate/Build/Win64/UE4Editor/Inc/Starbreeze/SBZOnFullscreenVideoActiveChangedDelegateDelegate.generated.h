// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZFullscreenVideoWidget;
#ifdef STARBREEZE_SBZOnFullscreenVideoActiveChangedDelegateDelegate_generated_h
#error "SBZOnFullscreenVideoActiveChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnFullscreenVideoActiveChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnFullscreenVideoActiveChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnFullscreenVideoActiveChangedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnFullscreenVideoActiveChangedDelegate_Parms \
{ \
	USBZFullscreenVideoWidget* InWidget; \
	bool bInIsActive; \
}; \
static inline void FSBZOnFullscreenVideoActiveChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnFullscreenVideoActiveChangedDelegate, USBZFullscreenVideoWidget* InWidget, bool bInIsActive) \
{ \
	_Script_Starbreeze_eventSBZOnFullscreenVideoActiveChangedDelegate_Parms Parms; \
	Parms.InWidget=InWidget; \
	Parms.bInIsActive=bInIsActive ? true : false; \
	SBZOnFullscreenVideoActiveChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnFullscreenVideoActiveChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
