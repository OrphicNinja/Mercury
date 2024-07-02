// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef AKAUDIO_OnItemDropDetectedDelegate_generated_h
#error "OnItemDropDetectedDelegate.generated.h already included, missing '#pragma once' in OnItemDropDetectedDelegate.h"
#endif
#define AKAUDIO_OnItemDropDetectedDelegate_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemDropDetectedDelegate_h_6_DELEGATE \
struct _Script_AkAudio_eventOnItemDropDetected_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FOnItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropDetected, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventOnItemDropDetected_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	OnItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_OnItemDropDetectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
