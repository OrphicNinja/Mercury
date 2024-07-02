// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHackingState_generated_h
#error "ESBZHackingState.generated.h already included, missing '#pragma once' in ESBZHackingState.h"
#endif
#define STARBREEZE_ESBZHackingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHackingState_h


#define FOREACH_ENUM_ESBZHACKINGSTATE(op) \
	op(ESBZHackingState::NotHacked) \
	op(ESBZHackingState::Hacked) \
	op(ESBZHackingState::Overloaded) \
	op(ESBZHackingState::Disabled) \
	op(ESBZHackingState::Destroyed) 

enum class ESBZHackingState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
