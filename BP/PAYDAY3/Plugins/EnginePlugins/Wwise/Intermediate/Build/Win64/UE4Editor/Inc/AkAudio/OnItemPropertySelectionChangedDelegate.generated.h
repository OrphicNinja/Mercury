// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnItemPropertySelectionChangedDelegate_generated_h
#error "OnItemPropertySelectionChangedDelegate.generated.h already included, missing '#pragma once' in OnItemPropertySelectionChangedDelegate.h"
#endif
#define AKAUDIO_OnItemPropertySelectionChangedDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemPropertySelectionChangedDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FOnItemPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertySelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	OnItemPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemPropertySelectionChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
