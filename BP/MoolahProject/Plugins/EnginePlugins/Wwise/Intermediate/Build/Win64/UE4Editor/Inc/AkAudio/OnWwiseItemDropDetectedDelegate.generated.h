// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef AKAUDIO_OnWwiseItemDropDetectedDelegate_generated_h
#error "OnWwiseItemDropDetectedDelegate.generated.h already included, missing '#pragma once' in OnWwiseItemDropDetectedDelegate.h"
#endif
#define AKAUDIO_OnWwiseItemDropDetectedDelegate_generated_h

#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnWwiseItemDropDetectedDelegate_h_6_DELEGATE \
struct _Script_AkAudio_eventOnWwiseItemDropDetected_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FOnWwiseItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnWwiseItemDropDetected, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventOnWwiseItemDropDetected_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	OnWwiseItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnWwiseItemDropDetectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
