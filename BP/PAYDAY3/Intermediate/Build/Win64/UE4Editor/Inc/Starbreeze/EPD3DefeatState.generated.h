// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3DefeatState_generated_h
#error "EPD3DefeatState.generated.h already included, missing '#pragma once' in EPD3DefeatState.h"
#endif
#define STARBREEZE_EPD3DefeatState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3DefeatState_h


#define FOREACH_ENUM_EPD3DEFEATSTATE(op) \
	op(EPD3DefeatState::None) \
	op(EPD3DefeatState::TasedGently) \
	op(EPD3DefeatState::Tased) \
	op(EPD3DefeatState::Cuffed) \
	op(EPD3DefeatState::Downed) \
	op(EPD3DefeatState::BleedOut) \
	op(EPD3DefeatState::InCustody) \
	op(EPD3DefeatState::Subdued) \
	op(EPD3DefeatState::CuffedSubdued) 

enum class EPD3DefeatState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3DefeatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
