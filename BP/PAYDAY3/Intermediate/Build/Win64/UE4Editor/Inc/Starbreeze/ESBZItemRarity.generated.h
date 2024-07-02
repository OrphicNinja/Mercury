// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZItemRarity_generated_h
#error "ESBZItemRarity.generated.h already included, missing '#pragma once' in ESBZItemRarity.h"
#endif
#define STARBREEZE_ESBZItemRarity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZItemRarity_h


#define FOREACH_ENUM_ESBZITEMRARITY(op) \
	op(ESBZItemRarity::NoRarity) \
	op(ESBZItemRarity::Common) \
	op(ESBZItemRarity::Uncommon) \
	op(ESBZItemRarity::Rare) \
	op(ESBZItemRarity::Mythic) \
	op(ESBZItemRarity::Epic) \
	op(ESBZItemRarity::Legendary) 

enum class ESBZItemRarity : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
