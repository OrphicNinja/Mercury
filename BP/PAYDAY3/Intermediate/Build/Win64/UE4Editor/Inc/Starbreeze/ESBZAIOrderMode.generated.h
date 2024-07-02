// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAIOrderMode_generated_h
#error "ESBZAIOrderMode.generated.h already included, missing '#pragma once' in ESBZAIOrderMode.h"
#endif
#define STARBREEZE_ESBZAIOrderMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAIOrderMode_h


#define FOREACH_ENUM_ESBZAIORDERMODE(op) \
	op(ESBZAIOrderMode::Instant) \
	op(ESBZAIOrderMode::Deferred) \
	op(ESBZAIOrderMode::Reset) \
	op(ESBZAIOrderMode::Forced) \
	op(ESBZAIOrderMode::None) 

enum class ESBZAIOrderMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIOrderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
