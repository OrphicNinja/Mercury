// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAIInvestigateState_generated_h
#error "ESBZAIInvestigateState.generated.h already included, missing '#pragma once' in ESBZAIInvestigateState.h"
#endif
#define STARBREEZE_ESBZAIInvestigateState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAIInvestigateState_h


#define FOREACH_ENUM_ESBZAIINVESTIGATESTATE(op) \
	op(ESBZAIInvestigateState::None) \
	op(ESBZAIInvestigateState::Move) \
	op(ESBZAIInvestigateState::UrgentMove) \
	op(ESBZAIInvestigateState::Investigate) 

enum class ESBZAIInvestigateState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIInvestigateState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
