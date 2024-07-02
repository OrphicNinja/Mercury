// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3AmmoState_generated_h
#error "EPD3AmmoState.generated.h already included, missing '#pragma once' in EPD3AmmoState.h"
#endif
#define STARBREEZE_EPD3AmmoState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3AmmoState_h


#define FOREACH_ENUM_EPD3AMMOSTATE(op) \
	op(EPD3AmmoState::Normal) \
	op(EPD3AmmoState::Low) \
	op(EPD3AmmoState::Critical) \
	op(EPD3AmmoState::Default) 

enum class EPD3AmmoState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3AmmoState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
