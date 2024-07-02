// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHackableActorInterruptReason_generated_h
#error "ESBZHackableActorInterruptReason.generated.h already included, missing '#pragma once' in ESBZHackableActorInterruptReason.h"
#endif
#define STARBREEZE_ESBZHackableActorInterruptReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHackableActorInterruptReason_h


#define FOREACH_ENUM_ESBZHACKABLEACTORINTERRUPTREASON(op) \
	op(ESBZHackableActorInterruptReason::Sabotage) \
	op(ESBZHackableActorInterruptReason::NeedClearance) \
	op(ESBZHackableActorInterruptReason::PendingSabotage) 

enum class ESBZHackableActorInterruptReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackableActorInterruptReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
