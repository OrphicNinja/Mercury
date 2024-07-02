// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef STARBREEZE_SBZTagEventActiveDelegateDelegate_generated_h
#error "SBZTagEventActiveDelegateDelegate.generated.h already included, missing '#pragma once' in SBZTagEventActiveDelegateDelegate.h"
#endif
#define STARBREEZE_SBZTagEventActiveDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventActiveDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZTagEventActiveDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	bool bActive; \
}; \
static inline void FSBZTagEventActiveDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZTagEventActiveDelegate, FGameplayTag const& EventTag, bool bActive) \
{ \
	_Script_Starbreeze_eventSBZTagEventActiveDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.bActive=bActive ? true : false; \
	SBZTagEventActiveDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTagEventActiveDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
