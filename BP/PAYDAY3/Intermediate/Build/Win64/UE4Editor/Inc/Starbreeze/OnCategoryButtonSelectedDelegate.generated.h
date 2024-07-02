// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZModularPartSlotBase;
#ifdef STARBREEZE_OnCategoryButtonSelectedDelegate_generated_h
#error "OnCategoryButtonSelectedDelegate.generated.h already included, missing '#pragma once' in OnCategoryButtonSelectedDelegate.h"
#endif
#define STARBREEZE_OnCategoryButtonSelectedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnCategoryButtonSelectedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnCategoryButtonSelected_Parms \
{ \
	const USBZModularPartSlotBase* ModSlot; \
}; \
static inline void FOnCategoryButtonSelected_DelegateWrapper(const FScriptDelegate& OnCategoryButtonSelected, const USBZModularPartSlotBase* ModSlot) \
{ \
	_Script_Starbreeze_eventOnCategoryButtonSelected_Parms Parms; \
	Parms.ModSlot=ModSlot; \
	OnCategoryButtonSelected.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnCategoryButtonSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
