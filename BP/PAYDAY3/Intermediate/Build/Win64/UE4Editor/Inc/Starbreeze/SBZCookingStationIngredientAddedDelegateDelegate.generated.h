// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCookingStationIngredientAddedDelegateDelegate_generated_h
#error "SBZCookingStationIngredientAddedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZCookingStationIngredientAddedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZCookingStationIngredientAddedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStationIngredientAddedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZCookingStationIngredientAddedDelegate_Parms \
{ \
	bool bIsCorrect; \
}; \
static inline void FSBZCookingStationIngredientAddedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZCookingStationIngredientAddedDelegate, bool bIsCorrect) \
{ \
	_Script_Starbreeze_eventSBZCookingStationIngredientAddedDelegate_Parms Parms; \
	Parms.bIsCorrect=bIsCorrect ? true : false; \
	SBZCookingStationIngredientAddedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCookingStationIngredientAddedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
