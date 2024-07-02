// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZEquipState_generated_h
#error "ESBZEquipState.generated.h already included, missing '#pragma once' in ESBZEquipState.h"
#endif
#define STARBREEZE_ESBZEquipState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZEquipState_h


#define FOREACH_ENUM_ESBZEQUIPSTATE(op) \
	op(ESBZEquipState::Unequipped) \
	op(ESBZEquipState::Equipping) \
	op(ESBZEquipState::Equipped) \
	op(ESBZEquipState::Unequipping) 

enum class ESBZEquipState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZEquipState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
