// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRarity_generated_h
#error "ESBZRarity.generated.h already included, missing '#pragma once' in ESBZRarity.h"
#endif
#define STARBREEZE_ESBZRarity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRarity_h


#define FOREACH_ENUM_ESBZRARITY(op) \
	op(ESBZRarity::Common) \
	op(ESBZRarity::Uncommon) \
	op(ESBZRarity::Rare) \
	op(ESBZRarity::Epic) \
	op(ESBZRarity::Legendary) 

enum class ESBZRarity : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
