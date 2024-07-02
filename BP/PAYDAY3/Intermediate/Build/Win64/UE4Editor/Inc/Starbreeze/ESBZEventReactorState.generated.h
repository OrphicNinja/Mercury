// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZEventReactorState_generated_h
#error "ESBZEventReactorState.generated.h already included, missing '#pragma once' in ESBZEventReactorState.h"
#endif
#define STARBREEZE_ESBZEventReactorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZEventReactorState_h


#define FOREACH_ENUM_ESBZEVENTREACTORSTATE(op) \
	op(ESBZEventReactorState::Inactive) \
	op(ESBZEventReactorState::Normal) \
	op(ESBZEventReactorState::Glitched) \
	op(ESBZEventReactorState::VeryGlitched) \
	op(ESBZEventReactorState::Destroyed) 

enum class ESBZEventReactorState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZEventReactorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
