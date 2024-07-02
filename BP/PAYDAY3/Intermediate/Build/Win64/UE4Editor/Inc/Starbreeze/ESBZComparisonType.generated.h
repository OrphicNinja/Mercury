// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZComparisonType_generated_h
#error "ESBZComparisonType.generated.h already included, missing '#pragma once' in ESBZComparisonType.h"
#endif
#define STARBREEZE_ESBZComparisonType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZComparisonType_h


#define FOREACH_ENUM_ESBZCOMPARISONTYPE(op) \
	op(ESBZComparisonType::EQUAL) \
	op(ESBZComparisonType::SMALLER) \
	op(ESBZComparisonType::SMALLEREQUAL) \
	op(ESBZComparisonType::LARGER) \
	op(ESBZComparisonType::LARGEREQUAL) 

enum class ESBZComparisonType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZComparisonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
