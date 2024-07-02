// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZOnDestroyActorsDoneDynamicDelegateDelegate_generated_h
#error "SBZOnDestroyActorsDoneDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnDestroyActorsDoneDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnDestroyActorsDoneDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnDestroyActorsDoneDynamicDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnDestroyActorsDoneDynamicDelegate_Parms \
{ \
	TArray<AActor*> KeptActors; \
	TArray<AActor*> DestroyedActors; \
}; \
static inline void FSBZOnDestroyActorsDoneDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnDestroyActorsDoneDynamicDelegate, TArray<AActor*> const& KeptActors, TArray<AActor*> const& DestroyedActors) \
{ \
	_Script_Starbreeze_eventSBZOnDestroyActorsDoneDynamicDelegate_Parms Parms; \
	Parms.KeptActors=KeptActors; \
	Parms.DestroyedActors=DestroyedActors; \
	SBZOnDestroyActorsDoneDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnDestroyActorsDoneDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
