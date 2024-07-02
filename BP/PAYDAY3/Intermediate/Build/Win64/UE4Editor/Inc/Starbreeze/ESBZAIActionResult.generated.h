// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAIActionResult_generated_h
#error "ESBZAIActionResult.generated.h already included, missing '#pragma once' in ESBZAIActionResult.h"
#endif
#define STARBREEZE_ESBZAIActionResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAIActionResult_h


#define FOREACH_ENUM_ESBZAIACTIONRESULT(op) \
	op(ESBZAIActionResult::Failed) \
	op(ESBZAIActionResult::Succeeded) \
	op(ESBZAIActionResult::InProgress) 

enum class ESBZAIActionResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIActionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
