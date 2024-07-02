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
#ifdef STARBREEZE_SBZHoldOutObjectiveStartedDelegate_generated_h
#error "SBZHoldOutObjectiveStartedDelegate.generated.h already included, missing '#pragma once' in SBZHoldOutObjectiveStartedDelegate.h"
#endif
#define STARBREEZE_SBZHoldOutObjectiveStartedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveStartedDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZHoldOutObjectiveStarted_Parms \
{ \
	USBZHoldOutObjectiveBase* Objective; \
	FGameplayTagContainer GrantedTags; \
	FGameplayTagContainer RemovedTags; \
}; \
static inline void FSBZHoldOutObjectiveStarted_DelegateWrapper(const FMulticastScriptDelegate& SBZHoldOutObjectiveStarted, USBZHoldOutObjectiveBase* Objective, FGameplayTagContainer const& GrantedTags, FGameplayTagContainer const& RemovedTags) \
{ \
	_Script_Starbreeze_eventSBZHoldOutObjectiveStarted_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.GrantedTags=GrantedTags; \
	Parms.RemovedTags=RemovedTags; \
	SBZHoldOutObjectiveStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveStartedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
