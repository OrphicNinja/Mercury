// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3HeistState_generated_h
#error "EPD3HeistState.generated.h already included, missing '#pragma once' in EPD3HeistState.h"
#endif
#define STARBREEZE_EPD3HeistState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3HeistState_h


#define FOREACH_ENUM_EPD3HEISTSTATE(op) \
	op(EPD3HeistState::Stealth) \
	op(EPD3HeistState::Search) \
	op(EPD3HeistState::Alarm) \
	op(EPD3HeistState::FirstResponse) \
	op(EPD3HeistState::Negotiation) \
	op(EPD3HeistState::Anticipation) \
	op(EPD3HeistState::Assault) \
	op(EPD3HeistState::Control) \
	op(EPD3HeistState::PointOfNoReturn) \
	op(EPD3HeistState::STEALTH_MAX) \
	op(EPD3HeistState::PAGER_MAX) \
	op(EPD3HeistState::CARRY_MAX) \
	op(EPD3HeistState::CASING_MAX) \
	op(EPD3HeistState::NO_CUFFED_TIMER_MAX) 

enum class EPD3HeistState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3HeistState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
