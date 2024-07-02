// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class ASBZPawnSpawnPredefined;
#ifdef STARBREEZE_SBZKilledPawnSpawnPredefinedDelegateDelegate_generated_h
#error "SBZKilledPawnSpawnPredefinedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZKilledPawnSpawnPredefinedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZKilledPawnSpawnPredefinedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZKilledPawnSpawnPredefinedDelegateDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZKilledPawnSpawnPredefinedDelegate_Parms \
{ \
	APawn* DeadPawn; \
	ASBZPawnSpawnPredefined* Spawner; \
}; \
static inline void FSBZKilledPawnSpawnPredefinedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZKilledPawnSpawnPredefinedDelegate, APawn* DeadPawn, ASBZPawnSpawnPredefined* Spawner) \
{ \
	_Script_Starbreeze_eventSBZKilledPawnSpawnPredefinedDelegate_Parms Parms; \
	Parms.DeadPawn=DeadPawn; \
	Parms.Spawner=Spawner; \
	SBZKilledPawnSpawnPredefinedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZKilledPawnSpawnPredefinedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
