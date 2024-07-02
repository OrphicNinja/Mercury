// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3SuspenseValueChangedDelegate_generated_h
#error "PD3SuspenseValueChangedDelegate.generated.h already included, missing '#pragma once' in PD3SuspenseValueChangedDelegate.h"
#endif
#define STARBREEZE_PD3SuspenseValueChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3SuspenseValueChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPD3SuspenseValueChanged_Parms \
{ \
	uint8 NewValue; \
}; \
static inline void FPD3SuspenseValueChanged_DelegateWrapper(const FMulticastScriptDelegate& PD3SuspenseValueChanged, uint8 NewValue) \
{ \
	_Script_Starbreeze_eventPD3SuspenseValueChanged_Parms Parms; \
	Parms.NewValue=NewValue; \
	PD3SuspenseValueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3SuspenseValueChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
