// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZDisplayCaseState_generated_h
#error "ESBZDisplayCaseState.generated.h already included, missing '#pragma once' in ESBZDisplayCaseState.h"
#endif
#define STARBREEZE_ESBZDisplayCaseState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZDisplayCaseState_h


#define FOREACH_ENUM_ESBZDISPLAYCASESTATE(op) \
	op(ESBZDisplayCaseState::None) \
	op(ESBZDisplayCaseState::Closed) \
	op(ESBZDisplayCaseState::Open) \
	op(ESBZDisplayCaseState::Cut) \
	op(ESBZDisplayCaseState::Broken) \
	op(ESBZDisplayCaseState::Lockdown) 

enum class ESBZDisplayCaseState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZDisplayCaseState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
