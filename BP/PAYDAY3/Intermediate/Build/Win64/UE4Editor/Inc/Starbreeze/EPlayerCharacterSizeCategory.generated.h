// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPlayerCharacterSizeCategory_generated_h
#error "EPlayerCharacterSizeCategory.generated.h already included, missing '#pragma once' in EPlayerCharacterSizeCategory.h"
#endif
#define STARBREEZE_EPlayerCharacterSizeCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPlayerCharacterSizeCategory_h


#define FOREACH_ENUM_EPLAYERCHARACTERSIZECATEGORY(op) \
	op(EPlayerCharacterSizeCategory::MaleAverage) \
	op(EPlayerCharacterSizeCategory::MaleHeavy) \
	op(EPlayerCharacterSizeCategory::MaleMuscular) \
	op(EPlayerCharacterSizeCategory::Female) \
	op(EPlayerCharacterSizeCategory::Count) 

enum class EPlayerCharacterSizeCategory : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPlayerCharacterSizeCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
