// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAIEscortState_generated_h
#error "ESBZAIEscortState.generated.h already included, missing '#pragma once' in ESBZAIEscortState.h"
#endif
#define STARBREEZE_ESBZAIEscortState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAIEscortState_h


#define FOREACH_ENUM_ESBZAIESCORTSTATE(op) \
	op(ESBZAIEscortState::None) \
	op(ESBZAIEscortState::GoToEscortPoint) \
	op(ESBZAIEscortState::Pickup) \
	op(ESBZAIEscortState::Start) \
	op(ESBZAIEscortState::Warn) \
	op(ESBZAIEscortState::EscortEndWarning) 

enum class ESBZAIEscortState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIEscortState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
