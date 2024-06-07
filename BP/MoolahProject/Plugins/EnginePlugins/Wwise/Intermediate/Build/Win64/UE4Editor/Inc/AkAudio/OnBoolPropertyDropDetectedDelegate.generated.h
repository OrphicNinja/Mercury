// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnBoolPropertyDropDetectedDelegate_generated_h
#error "OnBoolPropertyDropDetectedDelegate.generated.h already included, missing '#pragma once' in OnBoolPropertyDropDetectedDelegate.h"
#endif
#define AKAUDIO_OnBoolPropertyDropDetectedDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnBoolPropertyDropDetectedDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventOnBoolPropertyDropDetected_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FOnBoolPropertyDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnBoolPropertyDropDetected, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventOnBoolPropertyDropDetected_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	OnBoolPropertyDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnBoolPropertyDropDetectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
