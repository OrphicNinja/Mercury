// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCharacterStance_generated_h
#error "ESBZCharacterStance.generated.h already included, missing '#pragma once' in ESBZCharacterStance.h"
#endif
#define STARBREEZE_ESBZCharacterStance_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCharacterStance_h


#define FOREACH_ENUM_ESBZCHARACTERSTANCE(op) \
	op(ESBZCharacterStance::Neutral) \
	op(ESBZCharacterStance::Suspicious) \
	op(ESBZCharacterStance::Investigate) \
	op(ESBZCharacterStance::Stealth) \
	op(ESBZCharacterStance::Combat) \
	op(ESBZCharacterStance::Panic) \
	op(ESBZCharacterStance::Hostage) \
	op(ESBZCharacterStance::HumanShieldInstigator) \
	op(ESBZCharacterStance::HumanShieldVictim) \
	op(ESBZCharacterStance::DownedDefeated) \
	op(ESBZCharacterStance::Impaired) \
	op(ESBZCharacterStance::Last) \
	op(ESBZCharacterStance::First) 

enum class ESBZCharacterStance : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterStance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
