// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnPreviewPropertyChangedDelegate_generated_h
#error "OnPreviewPropertyChangedDelegate.generated.h already included, missing '#pragma once' in OnPreviewPropertyChangedDelegate.h"
#endif
#define STARBREEZE_OnPreviewPropertyChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPreviewPropertyChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnPreviewPropertyChanged_Parms \
{ \
	FString ChangedProperty; \
}; \
static inline void FOnPreviewPropertyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPreviewPropertyChanged, const FString& ChangedProperty) \
{ \
	_Script_Starbreeze_eventOnPreviewPropertyChanged_Parms Parms; \
	Parms.ChangedProperty=ChangedProperty; \
	OnPreviewPropertyChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPreviewPropertyChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
