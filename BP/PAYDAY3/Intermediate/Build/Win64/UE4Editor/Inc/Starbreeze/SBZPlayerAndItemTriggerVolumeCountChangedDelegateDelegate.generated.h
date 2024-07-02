// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerAndItemTriggerVolume;
class ASBZCharacter;
class ASBZBagItem;
#ifdef STARBREEZE_SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate_generated_h
#error "SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms \
{ \
	ASBZPlayerAndItemTriggerVolume* Volume; \
	int32 OldPlayerCount; \
	TArray<ASBZCharacter*> OverlappingPlayerArray; \
	int32 OldItemCount; \
	TArray<ASBZBagItem*> OverlappingBagArray; \
}; \
static inline void FSBZPlayerAndItemTriggerVolumeCountChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerAndItemTriggerVolumeCountChangedDelegate, ASBZPlayerAndItemTriggerVolume* Volume, int32 OldPlayerCount, TArray<ASBZCharacter*> const& OverlappingPlayerArray, int32 OldItemCount, TArray<ASBZBagItem*> const& OverlappingBagArray) \
{ \
	_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.OldPlayerCount=OldPlayerCount; \
	Parms.OverlappingPlayerArray=OverlappingPlayerArray; \
	Parms.OldItemCount=OldItemCount; \
	Parms.OverlappingBagArray=OverlappingBagArray; \
	SBZPlayerAndItemTriggerVolumeCountChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
