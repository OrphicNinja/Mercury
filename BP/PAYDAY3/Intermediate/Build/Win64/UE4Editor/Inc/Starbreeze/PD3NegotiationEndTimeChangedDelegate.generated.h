// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3NegotiationEndTimeChangedDelegate_generated_h
#error "PD3NegotiationEndTimeChangedDelegate.generated.h already included, missing '#pragma once' in PD3NegotiationEndTimeChangedDelegate.h"
#endif
#define STARBREEZE_PD3NegotiationEndTimeChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3NegotiationEndTimeChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPD3NegotiationEndTimeChanged_Parms \
{ \
	float OldTime; \
	float NewTime; \
}; \
static inline void FPD3NegotiationEndTimeChanged_DelegateWrapper(const FMulticastScriptDelegate& PD3NegotiationEndTimeChanged, float OldTime, float NewTime) \
{ \
	_Script_Starbreeze_eventPD3NegotiationEndTimeChanged_Parms Parms; \
	Parms.OldTime=OldTime; \
	Parms.NewTime=NewTime; \
	PD3NegotiationEndTimeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3NegotiationEndTimeChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
