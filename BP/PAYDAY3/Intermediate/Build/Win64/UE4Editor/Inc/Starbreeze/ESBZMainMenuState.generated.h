// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZMainMenuState_generated_h
#error "ESBZMainMenuState.generated.h already included, missing '#pragma once' in ESBZMainMenuState.h"
#endif
#define STARBREEZE_ESBZMainMenuState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZMainMenuState_h


#define FOREACH_ENUM_ESBZMAINMENUSTATE(op) \
	op(ESBZMainMenuState::MainScreen) \
	op(ESBZMainMenuState::PrePlanning) \
	op(ESBZMainMenuState::Loadout) \
	op(ESBZMainMenuState::BlackMarket) \
	op(ESBZMainMenuState::MatchMaking) \
	op(ESBZMainMenuState::Options) \
	op(ESBZMainMenuState::SuitVisualization) \
	op(ESBZMainMenuState::GlovesVisualization) 

enum class ESBZMainMenuState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZMainMenuState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
