// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZKickingMode_generated_h
#error "ESBZKickingMode.generated.h already included, missing '#pragma once' in ESBZKickingMode.h"
#endif
#define STARBREEZE_ESBZKickingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZKickingMode_h


#define FOREACH_ENUM_ESBZKICKINGMODE(op) \
	op(ESBZKickingMode::PartyDirectKicking) \
	op(ESBZKickingMode::PartyKickRequest) \
	op(ESBZKickingMode::GameKickInitiation) \
	op(ESBZKickingMode::GameKickVoteUp) \
	op(ESBZKickingMode::GameKickVoteDown) 

enum class ESBZKickingMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZKickingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
