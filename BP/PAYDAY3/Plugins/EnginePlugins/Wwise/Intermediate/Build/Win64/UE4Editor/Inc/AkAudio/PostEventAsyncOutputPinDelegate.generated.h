// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_PostEventAsyncOutputPinDelegate_generated_h
#error "PostEventAsyncOutputPinDelegate.generated.h already included, missing '#pragma once' in PostEventAsyncOutputPinDelegate.h"
#endif
#define AKAUDIO_PostEventAsyncOutputPinDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsyncOutputPinDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsyncOutputPinDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
