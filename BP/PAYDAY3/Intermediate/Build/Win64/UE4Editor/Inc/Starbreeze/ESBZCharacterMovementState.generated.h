// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCharacterMovementState_generated_h
#error "ESBZCharacterMovementState.generated.h already included, missing '#pragma once' in ESBZCharacterMovementState.h"
#endif
#define STARBREEZE_ESBZCharacterMovementState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCharacterMovementState_h


#define FOREACH_ENUM_ESBZCHARACTERMOVEMENTSTATE(op) \
	op(ESBZCharacterMovementState::Walking) \
	op(ESBZCharacterMovementState::Running) \
	op(ESBZCharacterMovementState::Crouching) \
	op(ESBZCharacterMovementState::Jumping) \
	op(ESBZCharacterMovementState::Traversing) \
	op(ESBZCharacterMovementState::Sliding) \
	op(ESBZCharacterMovementState::Proning) \
	op(ESBZCharacterMovementState::Falling) 

enum class ESBZCharacterMovementState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
