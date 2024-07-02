// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSkillValueFormat_generated_h
#error "ESBZSkillValueFormat.generated.h already included, missing '#pragma once' in ESBZSkillValueFormat.h"
#endif
#define STARBREEZE_ESBZSkillValueFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSkillValueFormat_h


#define FOREACH_ENUM_ESBZSKILLVALUEFORMAT(op) \
	op(ESBZSkillValueFormat::None) \
	op(ESBZSkillValueFormat::Number) \
	op(ESBZSkillValueFormat::Percent) \
	op(ESBZSkillValueFormat::Meter) 

enum class ESBZSkillValueFormat : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSkillValueFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
