// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef STARBREEZE_SBZOnSessionJoinedDelegate_generated_h
#error "SBZOnSessionJoinedDelegate.generated.h already included, missing '#pragma once' in SBZOnSessionJoinedDelegate.h"
#endif
#define STARBREEZE_SBZOnSessionJoinedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSessionJoinedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSessionJoined_Parms \
{ \
	UWorld* InWorld; \
}; \
static inline void FSBZOnSessionJoined_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSessionJoined, UWorld* InWorld) \
{ \
	_Script_Starbreeze_eventSBZOnSessionJoined_Parms Parms; \
	Parms.InWorld=InWorld; \
	SBZOnSessionJoined.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSessionJoinedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
