// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZNegotiationTradeType : uint8;
#ifdef STARBREEZE_PD3NegotiationTradeTypeChangedDelegate_generated_h
#error "PD3NegotiationTradeTypeChangedDelegate.generated.h already included, missing '#pragma once' in PD3NegotiationTradeTypeChangedDelegate.h"
#endif
#define STARBREEZE_PD3NegotiationTradeTypeChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3NegotiationTradeTypeChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventPD3NegotiationTradeTypeChanged_Parms \
{ \
	ESBZNegotiationTradeType OldType; \
	ESBZNegotiationTradeType NewType; \
}; \
static inline void FPD3NegotiationTradeTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& PD3NegotiationTradeTypeChanged, ESBZNegotiationTradeType OldType, ESBZNegotiationTradeType NewType) \
{ \
	_Script_Starbreeze_eventPD3NegotiationTradeTypeChanged_Parms Parms; \
	Parms.OldType=OldType; \
	Parms.NewType=NewType; \
	PD3NegotiationTradeTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3NegotiationTradeTypeChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
