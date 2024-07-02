// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZVotingError_generated_h
#error "ESBZVotingError.generated.h already included, missing '#pragma once' in ESBZVotingError.h"
#endif
#define STARBREEZE_ESBZVotingError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZVotingError_h


#define FOREACH_ENUM_ESBZVOTINGERROR(op) \
	op(ESBZVotingError::NotEnoughPlayers) \
	op(ESBZVotingError::VotingInProgress) 

enum class ESBZVotingError : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZVotingError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
