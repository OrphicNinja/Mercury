// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZDrillState_generated_h
#error "ESBZDrillState.generated.h already included, missing '#pragma once' in ESBZDrillState.h"
#endif
#define STARBREEZE_ESBZDrillState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZDrillState_h


#define FOREACH_ENUM_ESBZDRILLSTATE(op) \
	op(ESBZDrillState::None) \
	op(ESBZDrillState::Drilling) \
	op(ESBZDrillState::Jammed) \
	op(ESBZDrillState::Done) 

enum class ESBZDrillState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZDrillState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
