// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZProgressTextDisplayOption_generated_h
#error "ESBZProgressTextDisplayOption.generated.h already included, missing '#pragma once' in ESBZProgressTextDisplayOption.h"
#endif
#define STARBREEZE_ESBZProgressTextDisplayOption_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZProgressTextDisplayOption_h


#define FOREACH_ENUM_ESBZPROGRESSTEXTDISPLAYOPTION(op) \
	op(ESBZProgressTextDisplayOption::None) \
	op(ESBZProgressTextDisplayOption::ShowFraction) \
	op(ESBZProgressTextDisplayOption::ShowPercentage) \
	op(ESBZProgressTextDisplayOption::ShowSpeed) \
	op(ESBZProgressTextDisplayOption::ShowActualTime) 

enum class ESBZProgressTextDisplayOption : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZProgressTextDisplayOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
