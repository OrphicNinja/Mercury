// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZTimerState_generated_h
#error "ESBZTimerState.generated.h already included, missing '#pragma once' in ESBZTimerState.h"
#endif
#define STARBREEZE_ESBZTimerState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZTimerState_h


#define FOREACH_ENUM_ESBZTIMERSTATE(op) \
	op(ESBZTimerState::Inactive) \
	op(ESBZTimerState::Running) \
	op(ESBZTimerState::Paused) \
	op(ESBZTimerState::Sabotaged) \
	op(ESBZTimerState::Done) 

enum class ESBZTimerState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZTimerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
