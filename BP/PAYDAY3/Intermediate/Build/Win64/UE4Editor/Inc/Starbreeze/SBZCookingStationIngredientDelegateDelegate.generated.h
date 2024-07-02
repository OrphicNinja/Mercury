// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCookingStationIngredientDelegateDelegate_generated_h
#error "SBZCookingStationIngredientDelegateDelegate.generated.h already included, missing '#pragma once' in SBZCookingStationIngredientDelegateDelegate.h"
#endif
#define STARBREEZE_SBZCookingStationIngredientDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStationIngredientDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZCookingStationIngredientDelegate_Parms \
{ \
	int32 NewIngredientIndex; \
}; \
static inline void FSBZCookingStationIngredientDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZCookingStationIngredientDelegate, int32 NewIngredientIndex) \
{ \
	_Script_Starbreeze_eventSBZCookingStationIngredientDelegate_Parms Parms; \
	Parms.NewIngredientIndex=NewIngredientIndex; \
	SBZCookingStationIngredientDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCookingStationIngredientDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
