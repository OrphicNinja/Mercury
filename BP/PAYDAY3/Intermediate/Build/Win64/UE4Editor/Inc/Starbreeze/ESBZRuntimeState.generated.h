// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRuntimeState_generated_h
#error "ESBZRuntimeState.generated.h already included, missing '#pragma once' in ESBZRuntimeState.h"
#endif
#define STARBREEZE_ESBZRuntimeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRuntimeState_h


#define FOREACH_ENUM_ESBZRUNTIMESTATE(op) \
	op(ESBZRuntimeState::None) \
	op(ESBZRuntimeState::HackerAced) \
	op(ESBZRuntimeState::SecureLoop) \
	op(ESBZRuntimeState::RoutedPing) \
	op(ESBZRuntimeState::ScramblerBase) 

enum class ESBZRuntimeState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRuntimeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
