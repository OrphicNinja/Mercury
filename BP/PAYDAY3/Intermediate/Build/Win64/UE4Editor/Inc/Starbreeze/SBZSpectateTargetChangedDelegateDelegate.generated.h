// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZSpectateTargetChangedDelegateDelegate_generated_h
#error "SBZSpectateTargetChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZSpectateTargetChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZSpectateTargetChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpectateTargetChangedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZSpectateTargetChangedDelegate_Parms \
{ \
	AActor* TargetActor; \
}; \
static inline void FSBZSpectateTargetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZSpectateTargetChangedDelegate, AActor* TargetActor) \
{ \
	_Script_Starbreeze_eventSBZSpectateTargetChangedDelegate_Parms Parms; \
	Parms.TargetActor=TargetActor; \
	SBZSpectateTargetChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpectateTargetChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
