// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZProgressionReachedDelegateDelegate_generated_h
#error "SBZProgressionReachedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZProgressionReachedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZProgressionReachedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionReachedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZProgressionReachedDelegate_Parms \
{ \
	int32 ProgressionIndexReached; \
}; \
static inline void FSBZProgressionReachedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZProgressionReachedDelegate, int32 ProgressionIndexReached) \
{ \
	_Script_Starbreeze_eventSBZProgressionReachedDelegate_Parms Parms; \
	Parms.ProgressionIndexReached=ProgressionIndexReached; \
	SBZProgressionReachedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZProgressionReachedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
