// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZThrowableState_generated_h
#error "ESBZThrowableState.generated.h already included, missing '#pragma once' in ESBZThrowableState.h"
#endif
#define STARBREEZE_ESBZThrowableState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZThrowableState_h


#define FOREACH_ENUM_ESBZTHROWABLESTATE(op) \
	op(ESBZThrowableState::None) \
	op(ESBZThrowableState::Spawned) \
	op(ESBZThrowableState::Ready) \
	op(ESBZThrowableState::AttachedForThrow) \
	op(ESBZThrowableState::ThrownStillAttached) \
	op(ESBZThrowableState::DetachedForThrow) \
	op(ESBZThrowableState::Thrown) \
	op(ESBZThrowableState::Canceled) \
	op(ESBZThrowableState::Dropped) 

enum class ESBZThrowableState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZThrowableState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
