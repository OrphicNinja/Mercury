// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPowerUpChargesState_generated_h
#error "ESBZPowerUpChargesState.generated.h already included, missing '#pragma once' in ESBZPowerUpChargesState.h"
#endif
#define STARBREEZE_ESBZPowerUpChargesState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPowerUpChargesState_h


#define FOREACH_ENUM_ESBZPOWERUPCHARGESSTATE(op) \
	op(ESBZPowerUpChargesState::NotPlaced) \
	op(ESBZPowerUpChargesState::Placed) \
	op(ESBZPowerUpChargesState::Interactable) \
	op(ESBZPowerUpChargesState::Empty) 

enum class ESBZPowerUpChargesState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPowerUpChargesState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
