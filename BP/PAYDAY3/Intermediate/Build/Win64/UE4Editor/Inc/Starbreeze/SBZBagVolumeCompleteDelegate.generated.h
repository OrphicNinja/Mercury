// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZBagTriggerVolume;
#ifdef STARBREEZE_SBZBagVolumeCompleteDelegate_generated_h
#error "SBZBagVolumeCompleteDelegate.generated.h already included, missing '#pragma once' in SBZBagVolumeCompleteDelegate.h"
#endif
#define STARBREEZE_SBZBagVolumeCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagVolumeCompleteDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZBagVolumeComplete_Parms \
{ \
	ASBZBagTriggerVolume* Volume; \
}; \
static inline void FSBZBagVolumeComplete_DelegateWrapper(const FMulticastScriptDelegate& SBZBagVolumeComplete, ASBZBagTriggerVolume* Volume) \
{ \
	_Script_Starbreeze_eventSBZBagVolumeComplete_Parms Parms; \
	Parms.Volume=Volume; \
	SBZBagVolumeComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagVolumeCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
