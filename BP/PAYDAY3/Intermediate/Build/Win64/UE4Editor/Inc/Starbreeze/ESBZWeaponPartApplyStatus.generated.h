// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZWeaponPartApplyStatus_generated_h
#error "ESBZWeaponPartApplyStatus.generated.h already included, missing '#pragma once' in ESBZWeaponPartApplyStatus.h"
#endif
#define STARBREEZE_ESBZWeaponPartApplyStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZWeaponPartApplyStatus_h


#define FOREACH_ENUM_ESBZWEAPONPARTAPPLYSTATUS(op) \
	op(ESBZWeaponPartApplyStatus::NotAllowed) \
	op(ESBZWeaponPartApplyStatus::CanBeAppliedForCost) \
	op(ESBZWeaponPartApplyStatus::FeeAlreadyPayed) \
	op(ESBZWeaponPartApplyStatus::CanAlwaysBeAppliedAtNoCost) 

enum class ESBZWeaponPartApplyStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZWeaponPartApplyStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
