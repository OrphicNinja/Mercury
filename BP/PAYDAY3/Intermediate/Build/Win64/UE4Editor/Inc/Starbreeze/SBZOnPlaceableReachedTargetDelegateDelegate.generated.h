// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef STARBREEZE_SBZOnPlaceableReachedTargetDelegateDelegate_generated_h
#error "SBZOnPlaceableReachedTargetDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnPlaceableReachedTargetDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnPlaceableReachedTargetDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlaceableReachedTargetDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlaceableReachedTargetDelegate_Parms \
{ \
	FHitResult HitResult; \
}; \
static inline void FSBZOnPlaceableReachedTargetDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlaceableReachedTargetDelegate, FHitResult const& HitResult) \
{ \
	_Script_Starbreeze_eventSBZOnPlaceableReachedTargetDelegate_Parms Parms; \
	Parms.HitResult=HitResult; \
	SBZOnPlaceableReachedTargetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlaceableReachedTargetDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
