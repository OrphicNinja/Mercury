// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZHoldOutObjectiveResult : uint8;
class USBZHoldOutObjectiveBase;
struct FGameplayTagContainer;
#ifdef STARBREEZE_SBZHoldOutObjectiveResultDelegate_generated_h
#error "SBZHoldOutObjectiveResultDelegate.generated.h already included, missing '#pragma once' in SBZHoldOutObjectiveResultDelegate.h"
#endif
#define STARBREEZE_SBZHoldOutObjectiveResultDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveResultDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms \
{ \
	ESBZHoldOutObjectiveResult Result; \
	USBZHoldOutObjectiveBase* Objective; \
	FGameplayTagContainer GrantedTags; \
	FGameplayTagContainer RemovedTags; \
}; \
static inline void FSBZHoldOutObjectiveResult_DelegateWrapper(const FMulticastScriptDelegate& SBZHoldOutObjectiveResult, const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* Objective, FGameplayTagContainer const& GrantedTags, FGameplayTagContainer const& RemovedTags) \
{ \
	_Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms Parms; \
	Parms.Result=Result; \
	Parms.Objective=Objective; \
	Parms.GrantedTags=GrantedTags; \
	Parms.RemovedTags=RemovedTags; \
	SBZHoldOutObjectiveResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
