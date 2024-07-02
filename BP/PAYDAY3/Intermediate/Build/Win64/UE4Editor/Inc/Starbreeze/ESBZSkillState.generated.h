// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSkillState_generated_h
#error "ESBZSkillState.generated.h already included, missing '#pragma once' in ESBZSkillState.h"
#endif
#define STARBREEZE_ESBZSkillState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSkillState_h


#define FOREACH_ENUM_ESBZSKILLSTATE(op) \
	op(ESBZSkillState::Unresearched) \
	op(ESBZSkillState::Locked) \
	op(ESBZSkillState::Unequipped) \
	op(ESBZSkillState::Equipped) \
	op(ESBZSkillState::Aced) 

enum class ESBZSkillState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSkillState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
