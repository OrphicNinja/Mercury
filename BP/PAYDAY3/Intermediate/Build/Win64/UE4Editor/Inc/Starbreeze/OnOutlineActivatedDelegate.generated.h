// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZOutlineComponent;
#ifdef STARBREEZE_OnOutlineActivatedDelegate_generated_h
#error "OnOutlineActivatedDelegate.generated.h already included, missing '#pragma once' in OnOutlineActivatedDelegate.h"
#endif
#define STARBREEZE_OnOutlineActivatedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnOutlineActivatedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnOutlineActivated_Parms \
{ \
	USBZOutlineComponent* Outline; \
}; \
static inline void FOnOutlineActivated_DelegateWrapper(const FMulticastScriptDelegate& OnOutlineActivated, USBZOutlineComponent* Outline) \
{ \
	_Script_Starbreeze_eventOnOutlineActivated_Parms Parms; \
	Parms.Outline=Outline; \
	OnOutlineActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnOutlineActivatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
