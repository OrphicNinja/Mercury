// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPlacementState_generated_h
#error "ESBZPlacementState.generated.h already included, missing '#pragma once' in ESBZPlacementState.h"
#endif
#define STARBREEZE_ESBZPlacementState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPlacementState_h


#define FOREACH_ENUM_ESBZPLACEMENTSTATE(op) \
	op(ESBZPlacementState::None) \
	op(ESBZPlacementState::Invalid) \
	op(ESBZPlacementState::Valid) 

enum class ESBZPlacementState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlacementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
