// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESBZHackingState : uint8;
#ifdef STARBREEZE_SBZOnHackingStateChangedDelegate_generated_h
#error "SBZOnHackingStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnHackingStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnHackingStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnHackingStateChangedDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZOnHackingStateChanged_Parms \
{ \
	AActor* InActor; \
	ESBZHackingState NewState; \
	bool bDoCosmetics; \
}; \
static inline void FSBZOnHackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnHackingStateChanged, AActor* InActor, ESBZHackingState NewState, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZOnHackingStateChanged_Parms Parms; \
	Parms.InActor=InActor; \
	Parms.NewState=NewState; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZOnHackingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnHackingStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
