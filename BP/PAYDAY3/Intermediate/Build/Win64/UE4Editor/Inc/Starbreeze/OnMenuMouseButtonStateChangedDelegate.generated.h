// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuMouseButton;
#ifdef STARBREEZE_OnMenuMouseButtonStateChangedDelegate_generated_h
#error "OnMenuMouseButtonStateChangedDelegate.generated.h already included, missing '#pragma once' in OnMenuMouseButtonStateChangedDelegate.h"
#endif
#define STARBREEZE_OnMenuMouseButtonStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMenuMouseButtonStateChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMenuMouseButtonStateChanged_Parms \
{ \
	USBZMenuMouseButton* Button; \
	bool bIsEnabled; \
}; \
static inline void FOnMenuMouseButtonStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMenuMouseButtonStateChanged, USBZMenuMouseButton* Button, bool bIsEnabled) \
{ \
	_Script_Starbreeze_eventOnMenuMouseButtonStateChanged_Parms Parms; \
	Parms.Button=Button; \
	Parms.bIsEnabled=bIsEnabled ? true : false; \
	OnMenuMouseButtonStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMenuMouseButtonStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
