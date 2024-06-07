// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkOnCheckBoxComponentStateChangedDelegate_generated_h
#error "AkOnCheckBoxComponentStateChangedDelegate.generated.h already included, missing '#pragma once' in AkOnCheckBoxComponentStateChangedDelegate.h"
#endif
#define AKAUDIO_AkOnCheckBoxComponentStateChangedDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOnCheckBoxComponentStateChangedDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FAkOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& AkOnCheckBoxComponentStateChanged, bool bIsChecked) \
{ \
	_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	AkOnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkOnCheckBoxComponentStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
