// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZActorSpawnRequestHandle;
class AActor;
enum class ESBZSpawnRequestStatus : uint8;
#ifdef STARBREEZE_SBZActorSpawnRequestDoneDynamicDelegateDelegate_generated_h
#error "SBZActorSpawnRequestDoneDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZActorSpawnRequestDoneDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZActorSpawnRequestDoneDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnRequestDoneDynamicDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms \
{ \
	FSBZActorSpawnRequestHandle RequestHandle; \
	TArray<AActor*> CreatedActorArray; \
	ESBZSpawnRequestStatus FinalStatus; \
}; \
static inline void FSBZActorSpawnRequestDoneDynamicDelegate_DelegateWrapper(const FScriptDelegate& SBZActorSpawnRequestDoneDynamicDelegate, FSBZActorSpawnRequestHandle RequestHandle, TArray<AActor*> const& CreatedActorArray, ESBZSpawnRequestStatus FinalStatus) \
{ \
	_Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms Parms; \
	Parms.RequestHandle=RequestHandle; \
	Parms.CreatedActorArray=CreatedActorArray; \
	Parms.FinalStatus=FinalStatus; \
	SBZActorSpawnRequestDoneDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnRequestDoneDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
