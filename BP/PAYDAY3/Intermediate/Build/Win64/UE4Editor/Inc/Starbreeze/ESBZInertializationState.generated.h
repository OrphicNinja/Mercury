// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZInertializationState_generated_h
#error "ESBZInertializationState.generated.h already included, missing '#pragma once' in ESBZInertializationState.h"
#endif
#define STARBREEZE_ESBZInertializationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZInertializationState_h


#define FOREACH_ENUM_ESBZINERTIALIZATIONSTATE(op) \
	op(ESBZInertializationState::Inactive) \
	op(ESBZInertializationState::Pending) \
	op(ESBZInertializationState::Active) 

enum class ESBZInertializationState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZInertializationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
