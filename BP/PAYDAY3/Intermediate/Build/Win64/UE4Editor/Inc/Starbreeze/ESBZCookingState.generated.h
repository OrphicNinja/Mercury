// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCookingState_generated_h
#error "ESBZCookingState.generated.h already included, missing '#pragma once' in ESBZCookingState.h"
#endif
#define STARBREEZE_ESBZCookingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCookingState_h


#define FOREACH_ENUM_ESBZCOOKINGSTATE(op) \
	op(ESBZCookingState::Inactive) \
	op(ESBZCookingState::WaitingForIngredients) \
	op(ESBZCookingState::Cooking) \
	op(ESBZCookingState::UnderCooked) \
	op(ESBZCookingState::Cooked) \
	op(ESBZCookingState::OverCooked) \
	op(ESBZCookingState::Sabotaged) \
	op(ESBZCookingState::Destroyed) 

enum class ESBZCookingState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCookingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
