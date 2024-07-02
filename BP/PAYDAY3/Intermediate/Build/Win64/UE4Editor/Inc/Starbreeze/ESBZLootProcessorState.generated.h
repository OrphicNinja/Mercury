// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZLootProcessorState_generated_h
#error "ESBZLootProcessorState.generated.h already included, missing '#pragma once' in ESBZLootProcessorState.h"
#endif
#define STARBREEZE_ESBZLootProcessorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZLootProcessorState_h


#define FOREACH_ENUM_ESBZLOOTPROCESSORSTATE(op) \
	op(ESBZLootProcessorState::Inactive) \
	op(ESBZLootProcessorState::Running) \
	op(ESBZLootProcessorState::Paused) \
	op(ESBZLootProcessorState::ProcessedBag) 

enum class ESBZLootProcessorState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZLootProcessorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
