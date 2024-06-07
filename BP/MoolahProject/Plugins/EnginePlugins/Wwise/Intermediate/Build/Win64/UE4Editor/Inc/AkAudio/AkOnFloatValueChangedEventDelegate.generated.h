// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkOnFloatValueChangedEventDelegate_generated_h
#error "AkOnFloatValueChangedEventDelegate.generated.h already included, missing '#pragma once' in AkOnFloatValueChangedEventDelegate.h"
#endif
#define AKAUDIO_AkOnFloatValueChangedEventDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOnFloatValueChangedEventDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FAkOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& AkOnFloatValueChangedEvent, float Value) \
{ \
	_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	AkOnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOnFloatValueChangedEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
