// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZWeaponAmmoVisibilityType_generated_h
#error "ESBZWeaponAmmoVisibilityType.generated.h already included, missing '#pragma once' in ESBZWeaponAmmoVisibilityType.h"
#endif
#define STARBREEZE_ESBZWeaponAmmoVisibilityType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZWeaponAmmoVisibilityType_h


#define FOREACH_ENUM_ESBZWEAPONAMMOVISIBILITYTYPE(op) \
	op(ESBZWeaponAmmoVisibilityType::Never) \
	op(ESBZWeaponAmmoVisibilityType::Reload) \
	op(ESBZWeaponAmmoVisibilityType::Always) 

enum class ESBZWeaponAmmoVisibilityType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZWeaponAmmoVisibilityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
