// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkResult : uint8;
#ifdef AKAUDIO_OnAkBankCallbackDelegate_generated_h
#error "OnAkBankCallbackDelegate.generated.h already included, missing '#pragma once' in OnAkBankCallbackDelegate.h"
#endif
#define AKAUDIO_OnAkBankCallbackDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnAkBankCallbackDelegate_h_6_DELEGATE \
struct _Script_AkAudio_eventOnAkBankCallback_Parms \
{ \
	EAkResult Result; \
}; \
static inline void FOnAkBankCallback_DelegateWrapper(const FScriptDelegate& OnAkBankCallback, EAkResult Result) \
{ \
	_Script_AkAudio_eventOnAkBankCallback_Parms Parms; \
	Parms.Result=Result; \
	OnAkBankCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnAkBankCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
