// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef AKAUDIO_OnItemSelectionChangedDelegate_generated_h
#error "OnItemSelectionChangedDelegate.generated.h already included, missing '#pragma once' in OnItemSelectionChangedDelegate.h"
#endif
#define AKAUDIO_OnItemSelectionChangedDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemSelectionChangedDelegate_h_6_DELEGATE \
struct _Script_AkAudio_eventOnItemSelectionChanged_Parms \
{ \
	FGuid ItemSelectedID; \
}; \
static inline void FOnItemSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemSelectionChanged, FGuid ItemSelectedID) \
{ \
	_Script_AkAudio_eventOnItemSelectionChanged_Parms Parms; \
	Parms.ItemSelectedID=ItemSelectedID; \
	OnItemSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemSelectionChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
