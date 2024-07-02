// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuMouseButton;
#ifdef STARBREEZE_OnMenuMouseButtonSelectedDelegate_generated_h
#error "OnMenuMouseButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnMenuMouseButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnMenuMouseButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMenuMouseButtonSelectedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnMenuMouseButtonSelected_Parms \
{ \
	USBZMenuMouseButton* Button; \
}; \
static inline void FOnMenuMouseButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& OnMenuMouseButtonSelected, USBZMenuMouseButton* Button) \
{ \
	_Script_Starbreeze_eventOnMenuMouseButtonSelected_Parms Parms; \
	Parms.Button=Button; \
	OnMenuMouseButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMenuMouseButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
