// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCookingState : uint8;
#ifdef STARBREEZE_SBZCookingStationStateDelegateDelegate_generated_h
#error "SBZCookingStationStateDelegateDelegate.generated.h already included, missing '#pragma once' in SBZCookingStationStateDelegateDelegate.h"
#endif
#define STARBREEZE_SBZCookingStationStateDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStationStateDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZCookingStationStateDelegate_Parms \
{ \
	ESBZCookingState OldState; \
	ESBZCookingState NewState; \
}; \
static inline void FSBZCookingStationStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZCookingStationStateDelegate, ESBZCookingState OldState, ESBZCookingState NewState) \
{ \
	_Script_Starbreeze_eventSBZCookingStationStateDelegate_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	SBZCookingStationStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCookingStationStateDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
