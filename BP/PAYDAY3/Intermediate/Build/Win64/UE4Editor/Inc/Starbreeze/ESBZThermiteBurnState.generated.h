// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZThermiteBurnState_generated_h
#error "ESBZThermiteBurnState.generated.h already included, missing '#pragma once' in ESBZThermiteBurnState.h"
#endif
#define STARBREEZE_ESBZThermiteBurnState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZThermiteBurnState_h


#define FOREACH_ENUM_ESBZTHERMITEBURNSTATE(op) \
	op(ESBZThermiteBurnState::Inactive) \
	op(ESBZThermiteBurnState::Unlit) \
	op(ESBZThermiteBurnState::Completed) \
	op(ESBZThermiteBurnState::Burning) \
	op(ESBZThermiteBurnState::CriticalBurning) \
	op(ESBZThermiteBurnState::FlashOver) 

enum class ESBZThermiteBurnState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZThermiteBurnState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
