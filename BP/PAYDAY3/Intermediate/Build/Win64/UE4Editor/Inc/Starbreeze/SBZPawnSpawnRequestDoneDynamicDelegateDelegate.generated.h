// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPawnSpawnRequestHandle;
class APawn;
enum class ESBZSpawnRequestStatus : uint8;
#ifdef STARBREEZE_SBZPawnSpawnRequestDoneDynamicDelegateDelegate_generated_h
#error "SBZPawnSpawnRequestDoneDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPawnSpawnRequestDoneDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPawnSpawnRequestDoneDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnRequestDoneDynamicDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZPawnSpawnRequestDoneDynamicDelegate_Parms \
{ \
	FSBZPawnSpawnRequestHandle RequestHandle; \
	TArray<APawn*> CreatedPawnArray; \
	ESBZSpawnRequestStatus FinalStatus; \
}; \
static inline void FSBZPawnSpawnRequestDoneDynamicDelegate_DelegateWrapper(const FScriptDelegate& SBZPawnSpawnRequestDoneDynamicDelegate, FSBZPawnSpawnRequestHandle RequestHandle, TArray<APawn*> const& CreatedPawnArray, ESBZSpawnRequestStatus FinalStatus) \
{ \
	_Script_Starbreeze_eventSBZPawnSpawnRequestDoneDynamicDelegate_Parms Parms; \
	Parms.RequestHandle=RequestHandle; \
	Parms.CreatedPawnArray=CreatedPawnArray; \
	Parms.FinalStatus=FinalStatus; \
	SBZPawnSpawnRequestDoneDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnRequestDoneDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
