// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPlaceableChargeState_generated_h
#error "ESBZPlaceableChargeState.generated.h already included, missing '#pragma once' in ESBZPlaceableChargeState.h"
#endif
#define STARBREEZE_ESBZPlaceableChargeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPlaceableChargeState_h


#define FOREACH_ENUM_ESBZPLACEABLECHARGESTATE(op) \
	op(ESBZPlaceableChargeState::None) \
	op(ESBZPlaceableChargeState::Activating) \
	op(ESBZPlaceableChargeState::Thrown) \
	op(ESBZPlaceableChargeState::Placed) \
	op(ESBZPlaceableChargeState::Canceled) 

enum class ESBZPlaceableChargeState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlaceableChargeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
