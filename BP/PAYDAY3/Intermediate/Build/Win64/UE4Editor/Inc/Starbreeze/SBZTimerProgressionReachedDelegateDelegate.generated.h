// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTimerProgressionReachedDelegateDelegate_generated_h
#error "SBZTimerProgressionReachedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZTimerProgressionReachedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZTimerProgressionReachedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTimerProgressionReachedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZTimerProgressionReachedDelegate_Parms \
{ \
	int32 ProgressionIndexReached; \
	bool bDoCosmetics; \
}; \
static inline void FSBZTimerProgressionReachedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZTimerProgressionReachedDelegate, int32 ProgressionIndexReached, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZTimerProgressionReachedDelegate_Parms Parms; \
	Parms.ProgressionIndexReached=ProgressionIndexReached; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZTimerProgressionReachedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTimerProgressionReachedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
