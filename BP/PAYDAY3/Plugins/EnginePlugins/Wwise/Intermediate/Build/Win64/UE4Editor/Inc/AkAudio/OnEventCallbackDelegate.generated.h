// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWaapiSubscriptionId;
struct FAKWaapiJsonObject;
#ifdef AKAUDIO_OnEventCallbackDelegate_generated_h
#error "OnEventCallbackDelegate.generated.h already included, missing '#pragma once' in OnEventCallbackDelegate.h"
#endif
#define AKAUDIO_OnEventCallbackDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnEventCallbackDelegate_h_7_DELEGATE \
struct _Script_AkAudio_eventOnEventCallback_Parms \
{ \
	FAkWaapiSubscriptionId SubscriptionId; \
	FAKWaapiJsonObject WaapiJsonObject; \
}; \
static inline void FOnEventCallback_DelegateWrapper(const FScriptDelegate& OnEventCallback, FAkWaapiSubscriptionId SubscriptionId, FAKWaapiJsonObject WaapiJsonObject) \
{ \
	_Script_AkAudio_eventOnEventCallback_Parms Parms; \
	Parms.SubscriptionId=SubscriptionId; \
	Parms.WaapiJsonObject=WaapiJsonObject; \
	OnEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnEventCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
