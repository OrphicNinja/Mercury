// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZUIWeaponStat_generated_h
#error "ESBZUIWeaponStat.generated.h already included, missing '#pragma once' in ESBZUIWeaponStat.h"
#endif
#define STARBREEZE_ESBZUIWeaponStat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZUIWeaponStat_h


#define FOREACH_ENUM_ESBZUIWEAPONSTAT(op) \
	op(ESBZUIWeaponStat::Damage) \
	op(ESBZUIWeaponStat::Recoil) \
	op(ESBZUIWeaponStat::Stability) \
	op(ESBZUIWeaponStat::Accuracy) \
	op(ESBZUIWeaponStat::Handling) \
	op(ESBZUIWeaponStat::FireRate) 

enum class ESBZUIWeaponStat : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZUIWeaponStat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
