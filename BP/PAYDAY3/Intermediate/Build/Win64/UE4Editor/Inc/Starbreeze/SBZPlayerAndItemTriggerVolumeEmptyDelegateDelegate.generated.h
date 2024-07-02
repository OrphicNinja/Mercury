// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerAndItemTriggerVolume;
#ifdef STARBREEZE_SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate_generated_h
#error "SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeEmptyDelegate_Parms \
{ \
	ASBZPlayerAndItemTriggerVolume* Volume; \
	bool bIsInitialCheck; \
}; \
static inline void FSBZPlayerAndItemTriggerVolumeEmptyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerAndItemTriggerVolumeEmptyDelegate, ASBZPlayerAndItemTriggerVolume* Volume, bool bIsInitialCheck) \
{ \
	_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeEmptyDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.bIsInitialCheck=bIsInitialCheck ? true : false; \
	SBZPlayerAndItemTriggerVolumeEmptyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolumeEmptyDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
