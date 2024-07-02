// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3AnswerPagerValueChangedDelegate_generated_h
#error "PD3AnswerPagerValueChangedDelegate.generated.h already included, missing '#pragma once' in PD3AnswerPagerValueChangedDelegate.h"
#endif
#define STARBREEZE_PD3AnswerPagerValueChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3AnswerPagerValueChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPD3AnswerPagerValueChanged_Parms \
{ \
	int32 AnswerValue; \
	int32 MaxPagerAnswerValue; \
}; \
static inline void FPD3AnswerPagerValueChanged_DelegateWrapper(const FMulticastScriptDelegate& PD3AnswerPagerValueChanged, int32 AnswerValue, int32 MaxPagerAnswerValue) \
{ \
	_Script_Starbreeze_eventPD3AnswerPagerValueChanged_Parms Parms; \
	Parms.AnswerValue=AnswerValue; \
	Parms.MaxPagerAnswerValue=MaxPagerAnswerValue; \
	PD3AnswerPagerValueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3AnswerPagerValueChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
