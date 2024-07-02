// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCombiningLootProcesorDelegateDelegate_generated_h
#error "SBZCombiningLootProcesorDelegateDelegate.generated.h already included, missing '#pragma once' in SBZCombiningLootProcesorDelegateDelegate.h"
#endif
#define STARBREEZE_SBZCombiningLootProcesorDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcesorDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZCombiningLootProcesorDelegate_Parms \
{ \
	bool bIsCombinedBag; \
}; \
static inline void FSBZCombiningLootProcesorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZCombiningLootProcesorDelegate, bool bIsCombinedBag) \
{ \
	_Script_Starbreeze_eventSBZCombiningLootProcesorDelegate_Parms Parms; \
	Parms.bIsCombinedBag=bIsCombinedBag ? true : false; \
	SBZCombiningLootProcesorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCombiningLootProcesorDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
