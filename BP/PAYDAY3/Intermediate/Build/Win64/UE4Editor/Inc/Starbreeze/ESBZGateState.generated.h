// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZGateState_generated_h
#error "ESBZGateState.generated.h already included, missing '#pragma once' in ESBZGateState.h"
#endif
#define STARBREEZE_ESBZGateState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZGateState_h


#define FOREACH_ENUM_ESBZGATESTATE(op) \
	op(ESBZGateState::OpenForward) \
	op(ESBZGateState::OpenBackward) \
	op(ESBZGateState::SlammedClose) \
	op(ESBZGateState::Closed) \
	op(ESBZGateState::Locked) \
	op(ESBZGateState::Sealed) \
	op(ESBZGateState::Barricaded) \
	op(ESBZGateState::BreachedForward) \
	op(ESBZGateState::BreachedBackward) \
	op(ESBZGateState::SlammedOpenForward) \
	op(ESBZGateState::SlammedOpenBackward) 

enum class ESBZGateState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZGateState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
