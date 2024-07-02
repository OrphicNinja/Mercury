// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAITacticalMoveOrderState_generated_h
#error "ESBZAITacticalMoveOrderState.generated.h already included, missing '#pragma once' in ESBZAITacticalMoveOrderState.h"
#endif
#define STARBREEZE_ESBZAITacticalMoveOrderState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAITacticalMoveOrderState_h


#define FOREACH_ENUM_ESBZAITACTICALMOVEORDERSTATE(op) \
	op(ESBZAITacticalMoveOrderState::None) \
	op(ESBZAITacticalMoveOrderState::Move) \
	op(ESBZAITacticalMoveOrderState::Wait) \
	op(ESBZAITacticalMoveOrderState::Breach) \
	op(ESBZAITacticalMoveOrderState::End) 

enum class ESBZAITacticalMoveOrderState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAITacticalMoveOrderState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
