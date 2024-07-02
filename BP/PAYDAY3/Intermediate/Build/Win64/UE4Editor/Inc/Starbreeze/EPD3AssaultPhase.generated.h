// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3AssaultPhase_generated_h
#error "EPD3AssaultPhase.generated.h already included, missing '#pragma once' in EPD3AssaultPhase.h"
#endif
#define STARBREEZE_EPD3AssaultPhase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3AssaultPhase_h


#define FOREACH_ENUM_EPD3ASSAULTPHASE(op) \
	op(EPD3AssaultPhase::Disabled) \
	op(EPD3AssaultPhase::Anticipation) \
	op(EPD3AssaultPhase::Build) \
	op(EPD3AssaultPhase::Sustain) \
	op(EPD3AssaultPhase::Fade) \
	op(EPD3AssaultPhase::Regroup) \
	op(EPD3AssaultPhase::Wait) 

enum class EPD3AssaultPhase : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3AssaultPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
