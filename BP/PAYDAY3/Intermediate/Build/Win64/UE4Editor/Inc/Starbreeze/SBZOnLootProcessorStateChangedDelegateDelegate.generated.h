// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZLootProcessorState : uint8;
#ifdef STARBREEZE_SBZOnLootProcessorStateChangedDelegateDelegate_generated_h
#error "SBZOnLootProcessorStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnLootProcessorStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnLootProcessorStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnLootProcessorStateChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnLootProcessorStateChangedDelegate_Parms \
{ \
	ESBZLootProcessorState NewState; \
}; \
static inline void FSBZOnLootProcessorStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnLootProcessorStateChangedDelegate, ESBZLootProcessorState NewState) \
{ \
	_Script_Starbreeze_eventSBZOnLootProcessorStateChangedDelegate_Parms Parms; \
	Parms.NewState=NewState; \
	SBZOnLootProcessorStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnLootProcessorStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
