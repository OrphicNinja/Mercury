// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZModuleActorState_generated_h
#error "ESBZModuleActorState.generated.h already included, missing '#pragma once' in ESBZModuleActorState.h"
#endif
#define STARBREEZE_ESBZModuleActorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZModuleActorState_h


#define FOREACH_ENUM_ESBZMODULEACTORSTATE(op) \
	op(ESBZModuleActorState::None) \
	op(ESBZModuleActorState::Failed) \
	op(ESBZModuleActorState::Disabled) \
	op(ESBZModuleActorState::Interacted) \
	op(ESBZModuleActorState::Cut) \
	op(ESBZModuleActorState::Hacked) 

enum class ESBZModuleActorState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZModuleActorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
