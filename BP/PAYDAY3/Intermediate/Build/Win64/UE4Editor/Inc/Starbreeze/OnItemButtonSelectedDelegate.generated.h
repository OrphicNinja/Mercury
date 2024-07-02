// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInventoryBaseData;
#ifdef STARBREEZE_OnItemButtonSelectedDelegate_generated_h
#error "OnItemButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnItemButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnItemButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnItemButtonSelectedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnItemButtonSelected_Parms \
{ \
	const USBZInventoryBaseData* ActiveItemData; \
}; \
static inline void FOnItemButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& OnItemButtonSelected, const USBZInventoryBaseData* ActiveItemData) \
{ \
	_Script_Starbreeze_eventOnItemButtonSelected_Parms Parms; \
	Parms.ActiveItemData=ActiveItemData; \
	OnItemButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnItemButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
