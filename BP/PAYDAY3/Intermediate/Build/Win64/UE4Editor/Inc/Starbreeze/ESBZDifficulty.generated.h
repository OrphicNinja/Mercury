// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZDifficulty_generated_h
#error "ESBZDifficulty.generated.h already included, missing '#pragma once' in ESBZDifficulty.h"
#endif
#define STARBREEZE_ESBZDifficulty_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZDifficulty_h


#define FOREACH_ENUM_ESBZDIFFICULTY(op) \
	op(ESBZDifficulty::Normal) \
	op(ESBZDifficulty::Hard) \
	op(ESBZDifficulty::VeryHard) \
	op(ESBZDifficulty::Overkill) \
	op(ESBZDifficulty::Default) 

enum class ESBZDifficulty : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZDifficulty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
