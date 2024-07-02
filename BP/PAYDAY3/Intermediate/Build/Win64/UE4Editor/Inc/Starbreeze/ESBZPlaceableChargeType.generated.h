// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPlaceableChargeType_generated_h
#error "ESBZPlaceableChargeType.generated.h already included, missing '#pragma once' in ESBZPlaceableChargeType.h"
#endif
#define STARBREEZE_ESBZPlaceableChargeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPlaceableChargeType_h


#define FOREACH_ENUM_ESBZPLACEABLECHARGETYPE(op) \
	op(ESBZPlaceableChargeType::None) \
	op(ESBZPlaceableChargeType::Ammo) \
	op(ESBZPlaceableChargeType::Armor) \
	op(ESBZPlaceableChargeType::Health) \
	op(ESBZPlaceableChargeType::Sentry) 

enum class ESBZPlaceableChargeType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlaceableChargeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
