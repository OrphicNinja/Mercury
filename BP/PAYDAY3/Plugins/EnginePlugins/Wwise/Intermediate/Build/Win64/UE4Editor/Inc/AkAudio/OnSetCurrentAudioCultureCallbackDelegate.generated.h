// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_OnSetCurrentAudioCultureCallbackDelegate_generated_h
#error "OnSetCurrentAudioCultureCallbackDelegate.generated.h already included, missing '#pragma once' in OnSetCurrentAudioCultureCallbackDelegate.h"
#endif
#define AKAUDIO_OnSetCurrentAudioCultureCallbackDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnSetCurrentAudioCultureCallbackDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms \
{ \
	bool Succeeded; \
}; \
static inline void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded) \
{ \
	_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms Parms; \
	Parms.Succeeded=Succeeded ? true : false; \
	OnSetCurrentAudioCultureCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnSetCurrentAudioCultureCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
