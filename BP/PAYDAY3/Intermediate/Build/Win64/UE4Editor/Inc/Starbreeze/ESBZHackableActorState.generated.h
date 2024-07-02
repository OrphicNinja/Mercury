// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHackableActorState_generated_h
#error "ESBZHackableActorState.generated.h already included, missing '#pragma once' in ESBZHackableActorState.h"
#endif
#define STARBREEZE_ESBZHackableActorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHackableActorState_h


#define FOREACH_ENUM_ESBZHACKABLEACTORSTATE(op) \
	op(ESBZHackableActorState::Inactive) \
	op(ESBZHackableActorState::Active) \
	op(ESBZHackableActorState::Hacking) \
	op(ESBZHackableActorState::Sabotaged) \
	op(ESBZHackableActorState::NeedClearance) \
	op(ESBZHackableActorState::Unlocked) \
	op(ESBZHackableActorState::GainedAccess) \
	op(ESBZHackableActorState::PendingSabotage) 

enum class ESBZHackableActorState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackableActorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
