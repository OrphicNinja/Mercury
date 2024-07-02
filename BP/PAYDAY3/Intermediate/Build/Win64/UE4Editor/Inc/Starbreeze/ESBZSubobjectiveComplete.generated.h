// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSubobjectiveComplete_generated_h
#error "ESBZSubobjectiveComplete.generated.h already included, missing '#pragma once' in ESBZSubobjectiveComplete.h"
#endif
#define STARBREEZE_ESBZSubobjectiveComplete_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSubobjectiveComplete_h


#define FOREACH_ENUM_ESBZSUBOBJECTIVECOMPLETE(op) \
	op(ESBZSubobjectiveComplete::None) \
	op(ESBZSubobjectiveComplete::CompleteOnAll) \
	op(ESBZSubobjectiveComplete::CompleteOnAllOrFail) \
	op(ESBZSubobjectiveComplete::CompleteOnAllEnded) \
	op(ESBZSubobjectiveComplete::ProgressOnComplete) 

enum class ESBZSubobjectiveComplete : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSubobjectiveComplete>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
