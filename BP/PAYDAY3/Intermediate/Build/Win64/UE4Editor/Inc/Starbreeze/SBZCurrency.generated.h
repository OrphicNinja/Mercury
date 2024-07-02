// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCurrency_generated_h
#error "SBZCurrency.generated.h already included, missing '#pragma once' in SBZCurrency.h"
#endif
#define STARBREEZE_SBZCurrency_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCurrency_h_8_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSBZCurrency_Statics; \
	STARBREEZE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CurrencyType() { return STRUCT_OFFSET(FSBZCurrency, CurrencyType); } \
	FORCEINLINE static uint32 __PPO__Amount() { return STRUCT_OFFSET(FSBZCurrency, Amount); } \
	FORCEINLINE static uint32 __PPO__LifetimeAmount() { return STRUCT_OFFSET(FSBZCurrency, LifetimeAmount); }


template<> STARBREEZE_API UScriptStruct* StaticStruct<struct FSBZCurrency>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCurrency_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
