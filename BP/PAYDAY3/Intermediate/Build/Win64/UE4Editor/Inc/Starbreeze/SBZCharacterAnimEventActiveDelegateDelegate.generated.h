// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef STARBREEZE_SBZCharacterAnimEventActiveDelegateDelegate_generated_h
#error "SBZCharacterAnimEventActiveDelegateDelegate.generated.h already included, missing '#pragma once' in SBZCharacterAnimEventActiveDelegateDelegate.h"
#endif
#define STARBREEZE_SBZCharacterAnimEventActiveDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimEventActiveDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZCharacterAnimEventActiveDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	bool bActive; \
}; \
static inline void FSBZCharacterAnimEventActiveDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZCharacterAnimEventActiveDelegate, FGameplayTag const& EventTag, bool bActive) \
{ \
	_Script_Starbreeze_eventSBZCharacterAnimEventActiveDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.bActive=bActive ? true : false; \
	SBZCharacterAnimEventActiveDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimEventActiveDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
