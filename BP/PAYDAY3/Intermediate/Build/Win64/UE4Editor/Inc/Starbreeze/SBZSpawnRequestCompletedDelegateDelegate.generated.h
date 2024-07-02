// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STARBREEZE_SBZSpawnRequestCompletedDelegateDelegate_generated_h
#error "SBZSpawnRequestCompletedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZSpawnRequestCompletedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZSpawnRequestCompletedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnRequestCompletedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZSpawnRequestCompletedDelegate_Parms \
{ \
	APawn* SpawnedPawn; \
}; \
static inline void FSBZSpawnRequestCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZSpawnRequestCompletedDelegate, APawn* SpawnedPawn) \
{ \
	_Script_Starbreeze_eventSBZSpawnRequestCompletedDelegate_Parms Parms; \
	Parms.SpawnedPawn=SpawnedPawn; \
	SBZSpawnRequestCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnRequestCompletedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
