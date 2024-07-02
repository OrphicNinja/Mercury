// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APD3PawnSpawnGroup;
class ASBZPawnSpawnBase;
class APawn;
#ifdef STARBREEZE_SBZGroupSpawnedPawnDelegateBPDelegate_generated_h
#error "SBZGroupSpawnedPawnDelegateBPDelegate.generated.h already included, missing '#pragma once' in SBZGroupSpawnedPawnDelegateBPDelegate.h"
#endif
#define STARBREEZE_SBZGroupSpawnedPawnDelegateBPDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGroupSpawnedPawnDelegateBPDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZGroupSpawnedPawnDelegateBP_Parms \
{ \
	APD3PawnSpawnGroup* SpawnGroup; \
	ASBZPawnSpawnBase* Spawner; \
	APawn* Pawn; \
}; \
static inline void FSBZGroupSpawnedPawnDelegateBP_DelegateWrapper(const FMulticastScriptDelegate& SBZGroupSpawnedPawnDelegateBP, APD3PawnSpawnGroup* SpawnGroup, ASBZPawnSpawnBase* Spawner, APawn* Pawn) \
{ \
	_Script_Starbreeze_eventSBZGroupSpawnedPawnDelegateBP_Parms Parms; \
	Parms.SpawnGroup=SpawnGroup; \
	Parms.Spawner=Spawner; \
	Parms.Pawn=Pawn; \
	SBZGroupSpawnedPawnDelegateBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGroupSpawnedPawnDelegateBPDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
