// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCuttableState_generated_h
#error "ESBZCuttableState.generated.h already included, missing '#pragma once' in ESBZCuttableState.h"
#endif
#define STARBREEZE_ESBZCuttableState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCuttableState_h


#define FOREACH_ENUM_ESBZCUTTABLESTATE(op) \
	op(ESBZCuttableState::Whole) \
	op(ESBZCuttableState::Cut) \
	op(ESBZCuttableState::NotCuttable) 

enum class ESBZCuttableState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCuttableState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
