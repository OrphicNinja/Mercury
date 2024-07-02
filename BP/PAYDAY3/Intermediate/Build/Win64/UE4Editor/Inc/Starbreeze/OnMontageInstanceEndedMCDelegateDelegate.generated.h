// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnMontageInstanceEndedMCDelegateDelegate_generated_h
#error "OnMontageInstanceEndedMCDelegateDelegate.generated.h already included, missing '#pragma once' in OnMontageInstanceEndedMCDelegateDelegate.h"
#endif
#define STARBREEZE_OnMontageInstanceEndedMCDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnMontageInstanceEndedMCDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnMontageInstanceEndedMCDelegate_Parms \
{ \
	int32 MontageInstanceID; \
	bool bInterrupted; \
}; \
static inline void FOnMontageInstanceEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageInstanceEndedMCDelegate, int32 MontageInstanceID, bool bInterrupted) \
{ \
	_Script_Starbreeze_eventOnMontageInstanceEndedMCDelegate_Parms Parms; \
	Parms.MontageInstanceID=MontageInstanceID; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageInstanceEndedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnMontageInstanceEndedMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
