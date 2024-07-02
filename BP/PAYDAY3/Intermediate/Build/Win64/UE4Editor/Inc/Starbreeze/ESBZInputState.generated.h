// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZInputState_generated_h
#error "ESBZInputState.generated.h already included, missing '#pragma once' in ESBZInputState.h"
#endif
#define STARBREEZE_ESBZInputState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZInputState_h


#define FOREACH_ENUM_ESBZINPUTSTATE(op) \
	op(ESBZInputState::Game) \
	op(ESBZInputState::UI) \
	op(ESBZInputState::GameAndUI) 

enum class ESBZInputState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZInputState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
