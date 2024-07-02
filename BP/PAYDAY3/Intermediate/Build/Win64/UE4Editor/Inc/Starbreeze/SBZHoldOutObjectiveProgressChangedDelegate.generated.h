// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZHoldOutObjectiveBase;
struct FGameplayTagContainer;
#ifdef STARBREEZE_SBZHoldOutObjectiveProgressChangedDelegate_generated_h
#error "SBZHoldOutObjectiveProgressChangedDelegate.generated.h already included, missing '#pragma once' in SBZHoldOutObjectiveProgressChangedDelegate.h"
#endif
#define STARBREEZE_SBZHoldOutObjectiveProgressChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveProgressChangedDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZHoldOutObjectiveProgressChanged_Parms \
{ \
	USBZHoldOutObjectiveBase* Objective; \
	int32 OldProgressCount; \
	int32 NewProgressCount; \
	FGameplayTagContainer EventTag; \
	FGameplayTagContainer RemovedTags; \
}; \
static inline void FSBZHoldOutObjectiveProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZHoldOutObjectiveProgressChanged, USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, FGameplayTagContainer const& EventTag, FGameplayTagContainer const& RemovedTags) \
{ \
	_Script_Starbreeze_eventSBZHoldOutObjectiveProgressChanged_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.OldProgressCount=OldProgressCount; \
	Parms.NewProgressCount=NewProgressCount; \
	Parms.EventTag=EventTag; \
	Parms.RemovedTags=RemovedTags; \
	SBZHoldOutObjectiveProgressChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveProgressChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
