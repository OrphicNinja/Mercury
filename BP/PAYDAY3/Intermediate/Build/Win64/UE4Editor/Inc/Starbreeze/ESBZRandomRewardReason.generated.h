// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRandomRewardReason_generated_h
#error "ESBZRandomRewardReason.generated.h already included, missing '#pragma once' in ESBZRandomRewardReason.h"
#endif
#define STARBREEZE_ESBZRandomRewardReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRandomRewardReason_h


#define FOREACH_ENUM_ESBZRANDOMREWARDREASON(op) \
	op(ESBZRandomRewardReason::HeistSuccessfullyCompleted) \
	op(ESBZRandomRewardReason::RenownLeveledUp) \
	op(ESBZRandomRewardReason::InfamyLeveledUp) 

enum class ESBZRandomRewardReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRandomRewardReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
