// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_PostEventAtLocationAsyncOutputPinDelegate_generated_h
#error "PostEventAtLocationAsyncOutputPinDelegate.generated.h already included, missing '#pragma once' in PostEventAtLocationAsyncOutputPinDelegate.h"
#endif
#define AKAUDIO_PostEventAtLocationAsyncOutputPinDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsyncOutputPinDelegate_h_5_DELEGATE \
struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAtLocationAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAtLocationAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAtLocationAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsyncOutputPinDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
