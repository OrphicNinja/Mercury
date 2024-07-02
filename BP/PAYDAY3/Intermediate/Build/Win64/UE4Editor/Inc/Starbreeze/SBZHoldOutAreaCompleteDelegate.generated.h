// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZHoldOutArea;
#ifdef STARBREEZE_SBZHoldOutAreaCompleteDelegate_generated_h
#error "SBZHoldOutAreaCompleteDelegate.generated.h already included, missing '#pragma once' in SBZHoldOutAreaCompleteDelegate.h"
#endif
#define STARBREEZE_SBZHoldOutAreaCompleteDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAreaCompleteDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZHoldOutAreaComplete_Parms \
{ \
	bool bIsSuccessful; \
	ASBZHoldOutArea* HoldOutArea; \
}; \
static inline void FSBZHoldOutAreaComplete_DelegateWrapper(const FMulticastScriptDelegate& SBZHoldOutAreaComplete, bool bIsSuccessful, ASBZHoldOutArea* HoldOutArea) \
{ \
	_Script_Starbreeze_eventSBZHoldOutAreaComplete_Parms Parms; \
	Parms.bIsSuccessful=bIsSuccessful ? true : false; \
	Parms.HoldOutArea=HoldOutArea; \
	SBZHoldOutAreaComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAreaCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
