// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZFilterActorDynamicDelegateDelegate_generated_h
#error "SBZFilterActorDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZFilterActorDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZFilterActorDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFilterActorDynamicDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZFilterActorDynamicDelegate_Parms \
{ \
	FName Identifier; \
	AActor* Actor; \
	int32 CurrentTotalActors; \
}; \
static inline void FSBZFilterActorDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZFilterActorDynamicDelegate, FName Identifier, AActor* Actor, int32 CurrentTotalActors) \
{ \
	_Script_Starbreeze_eventSBZFilterActorDynamicDelegate_Parms Parms; \
	Parms.Identifier=Identifier; \
	Parms.Actor=Actor; \
	Parms.CurrentTotalActors=CurrentTotalActors; \
	SBZFilterActorDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFilterActorDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
