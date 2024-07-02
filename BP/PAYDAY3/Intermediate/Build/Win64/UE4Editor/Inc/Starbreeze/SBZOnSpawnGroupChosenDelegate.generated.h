// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerStartGroup;
#ifdef STARBREEZE_SBZOnSpawnGroupChosenDelegate_generated_h
#error "SBZOnSpawnGroupChosenDelegate.generated.h already included, missing '#pragma once' in SBZOnSpawnGroupChosenDelegate.h"
#endif
#define STARBREEZE_SBZOnSpawnGroupChosenDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSpawnGroupChosenDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSpawnGroupChosen_Parms \
{ \
	ASBZPlayerStartGroup* PlayerStartGroup; \
}; \
static inline void FSBZOnSpawnGroupChosen_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSpawnGroupChosen, ASBZPlayerStartGroup* PlayerStartGroup) \
{ \
	_Script_Starbreeze_eventSBZOnSpawnGroupChosen_Parms Parms; \
	Parms.PlayerStartGroup=PlayerStartGroup; \
	SBZOnSpawnGroupChosen.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSpawnGroupChosenDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
