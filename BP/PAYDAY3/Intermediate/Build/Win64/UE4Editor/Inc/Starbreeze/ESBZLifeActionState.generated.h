// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZLifeActionState_generated_h
#error "ESBZLifeActionState.generated.h already included, missing '#pragma once' in ESBZLifeActionState.h"
#endif
#define STARBREEZE_ESBZLifeActionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZLifeActionState_h


#define FOREACH_ENUM_ESBZLIFEACTIONSTATE(op) \
	op(ESBZLifeActionState::Stopped) \
	op(ESBZLifeActionState::Pending) \
	op(ESBZLifeActionState::Entering) \
	op(ESBZLifeActionState::Playing) \
	op(ESBZLifeActionState::Exiting) 

enum class ESBZLifeActionState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZLifeActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
