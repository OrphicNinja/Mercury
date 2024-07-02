// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3MiniGameState_generated_h
#error "EPD3MiniGameState.generated.h already included, missing '#pragma once' in EPD3MiniGameState.h"
#endif
#define STARBREEZE_EPD3MiniGameState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3MiniGameState_h


#define FOREACH_ENUM_EPD3MINIGAMESTATE(op) \
	op(EPD3MiniGameState::None) \
	op(EPD3MiniGameState::Initiated) \
	op(EPD3MiniGameState::InProgress) \
	op(EPD3MiniGameState::Failed) \
	op(EPD3MiniGameState::Aborted) \
	op(EPD3MiniGameState::Success) 

enum class EPD3MiniGameState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3MiniGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
