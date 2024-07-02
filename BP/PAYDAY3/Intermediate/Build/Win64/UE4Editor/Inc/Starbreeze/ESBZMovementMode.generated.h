// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZMovementMode_generated_h
#error "ESBZMovementMode.generated.h already included, missing '#pragma once' in ESBZMovementMode.h"
#endif
#define STARBREEZE_ESBZMovementMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZMovementMode_h


#define FOREACH_ENUM_ESBZMOVEMENTMODE(op) \
	op(ESBZMovementMode::None) \
	op(ESBZMovementMode::Walking) \
	op(ESBZMovementMode::NavWalking) \
	op(ESBZMovementMode::Falling) \
	op(ESBZMovementMode::Swimming) \
	op(ESBZMovementMode::Flying) \
	op(ESBZMovementMode::Custom) 

enum class ESBZMovementMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
