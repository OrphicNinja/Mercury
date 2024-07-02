// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZHoldOutLootContainerOpenStateChangedDelegate_generated_h
#error "SBZHoldOutLootContainerOpenStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZHoldOutLootContainerOpenStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZHoldOutLootContainerOpenStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainerOpenStateChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZHoldOutLootContainerOpenStateChanged_Parms \
{ \
	bool bIsOpen; \
	bool bDoCosmetics; \
}; \
static inline void FSBZHoldOutLootContainerOpenStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZHoldOutLootContainerOpenStateChanged, bool bIsOpen, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZHoldOutLootContainerOpenStateChanged_Parms Parms; \
	Parms.bIsOpen=bIsOpen ? true : false; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZHoldOutLootContainerOpenStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutLootContainerOpenStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
