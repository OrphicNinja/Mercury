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
class ASBZPawnSpawnBase;
#ifdef STARBREEZE_SBZPawnSpawnDynamicDelegateDelegate_generated_h
#error "SBZPawnSpawnDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPawnSpawnDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPawnSpawnDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnDynamicDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZPawnSpawnDynamicDelegate_Parms \
{ \
	FSBZPawnSpawnRequestHandle RequestHandle; \
	APawn* Pawn; \
	ASBZPawnSpawnBase* Spawner; \
}; \
static inline void FSBZPawnSpawnDynamicDelegate_DelegateWrapper(const FScriptDelegate& SBZPawnSpawnDynamicDelegate, FSBZPawnSpawnRequestHandle RequestHandle, APawn* Pawn, ASBZPawnSpawnBase* Spawner) \
{ \
	_Script_Starbreeze_eventSBZPawnSpawnDynamicDelegate_Parms Parms; \
	Parms.RequestHandle=RequestHandle; \
	Parms.Pawn=Pawn; \
	Parms.Spawner=Spawner; \
	SBZPawnSpawnDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
