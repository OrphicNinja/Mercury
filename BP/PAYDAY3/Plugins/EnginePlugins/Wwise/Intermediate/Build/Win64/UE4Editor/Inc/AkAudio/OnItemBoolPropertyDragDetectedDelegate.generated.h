// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnItemBoolPropertyDragDetectedDelegate_generated_h
#error "OnItemBoolPropertyDragDetectedDelegate.generated.h already included, missing '#pragma once' in OnItemBoolPropertyDragDetectedDelegate.h"
#endif
#define AKAUDIO_OnItemBoolPropertyDragDetectedDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemBoolPropertyDragDetectedDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms \
{ \
	FString PropertyDragged; \
}; \
static inline void FOnItemBoolPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertyDragDetected, const FString& PropertyDragged) \
{ \
	_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms Parms; \
	Parms.PropertyDragged=PropertyDragged; \
	OnItemBoolPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemBoolPropertyDragDetectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
