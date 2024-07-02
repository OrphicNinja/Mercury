// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnCircularWidgetSelectedDelegate_generated_h
#error "OnCircularWidgetSelectedDelegate.generated.h already included, missing '#pragma once' in OnCircularWidgetSelectedDelegate.h"
#endif
#define STARBREEZE_OnCircularWidgetSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnCircularWidgetSelectedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnCircularWidgetSelected_Parms \
{ \
	int32 SelectedIndex; \
}; \
static inline void FOnCircularWidgetSelected_DelegateWrapper(const FMulticastScriptDelegate& OnCircularWidgetSelected, int32 SelectedIndex) \
{ \
	_Script_Starbreeze_eventOnCircularWidgetSelected_Parms Parms; \
	Parms.SelectedIndex=SelectedIndex; \
	OnCircularWidgetSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnCircularWidgetSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
