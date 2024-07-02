// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZLifeActionDataExecutionMode_generated_h
#error "ESBZLifeActionDataExecutionMode.generated.h already included, missing '#pragma once' in ESBZLifeActionDataExecutionMode.h"
#endif
#define STARBREEZE_ESBZLifeActionDataExecutionMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZLifeActionDataExecutionMode_h


#define FOREACH_ENUM_ESBZLIFEACTIONDATAEXECUTIONMODE(op) \
	op(ESBZLifeActionDataExecutionMode::None) \
	op(ESBZLifeActionDataExecutionMode::DoOnceInterruptible) \
	op(ESBZLifeActionDataExecutionMode::DoOnceNonInterruptible) \
	op(ESBZLifeActionDataExecutionMode::RepeatInterruptible) \
	op(ESBZLifeActionDataExecutionMode::RepeatNonInterruptible) \
	op(ESBZLifeActionDataExecutionMode::PeristentDuringLifeAction) 

enum class ESBZLifeActionDataExecutionMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZLifeActionDataExecutionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
