// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef STARBREEZE_SBZOnUITagsChangedDelegate_generated_h
#error "SBZOnUITagsChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnUITagsChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnUITagsChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnUITagsChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnUITagsChanged_Parms \
{ \
	FGameplayTagContainer UITagContainer; \
}; \
static inline void FSBZOnUITagsChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnUITagsChanged, FGameplayTagContainer const& UITagContainer) \
{ \
	_Script_Starbreeze_eventSBZOnUITagsChanged_Parms Parms; \
	Parms.UITagContainer=UITagContainer; \
	SBZOnUITagsChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnUITagsChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
