// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
#ifdef AKAUDIO_OnAkPostEventCallbackDelegate_generated_h
#error "OnAkPostEventCallbackDelegate.generated.h already included, missing '#pragma once' in OnAkPostEventCallbackDelegate.h"
#endif
#define AKAUDIO_OnAkPostEventCallbackDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnAkPostEventCallbackDelegate_h_8_DELEGATE \
struct _Script_AkAudio_eventOnAkPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_AkAudio_eventOnAkPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	OnAkPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnAkPostEventCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
