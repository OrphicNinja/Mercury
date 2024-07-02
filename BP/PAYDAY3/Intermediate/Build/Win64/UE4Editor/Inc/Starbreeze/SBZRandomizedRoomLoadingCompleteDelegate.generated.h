// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZLevelScriptActor;
#ifdef STARBREEZE_SBZRandomizedRoomLoadingCompleteDelegate_generated_h
#error "SBZRandomizedRoomLoadingCompleteDelegate.generated.h already included, missing '#pragma once' in SBZRandomizedRoomLoadingCompleteDelegate.h"
#endif
#define STARBREEZE_SBZRandomizedRoomLoadingCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRandomizedRoomLoadingCompleteDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZRandomizedRoomLoadingComplete_Parms \
{ \
	ASBZLevelScriptActor* LevelScriptActor; \
}; \
static inline void FSBZRandomizedRoomLoadingComplete_DelegateWrapper(const FMulticastScriptDelegate& SBZRandomizedRoomLoadingComplete, ASBZLevelScriptActor* LevelScriptActor) \
{ \
	_Script_Starbreeze_eventSBZRandomizedRoomLoadingComplete_Parms Parms; \
	Parms.LevelScriptActor=LevelScriptActor; \
	SBZRandomizedRoomLoadingComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRandomizedRoomLoadingCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
