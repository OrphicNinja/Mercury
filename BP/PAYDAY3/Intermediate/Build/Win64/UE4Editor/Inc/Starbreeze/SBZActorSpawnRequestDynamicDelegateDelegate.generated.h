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
#ifdef STARBREEZE_SBZActorSpawnRequestDynamicDelegateDelegate_generated_h
#error "SBZActorSpawnRequestDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZActorSpawnRequestDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZActorSpawnRequestDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnRequestDynamicDelegateDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZActorSpawnRequestDynamicDelegate_Parms \
{ \
	FSBZActorSpawnRequestHandle RequestHandle; \
	AActor* Actor; \
	int32 RequestIndex; \
}; \
static inline void FSBZActorSpawnRequestDynamicDelegate_DelegateWrapper(const FScriptDelegate& SBZActorSpawnRequestDynamicDelegate, FSBZActorSpawnRequestHandle RequestHandle, AActor* Actor, int32 RequestIndex) \
{ \
	_Script_Starbreeze_eventSBZActorSpawnRequestDynamicDelegate_Parms Parms; \
	Parms.RequestHandle=RequestHandle; \
	Parms.Actor=Actor; \
	Parms.RequestIndex=RequestIndex; \
	SBZActorSpawnRequestDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnRequestDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
