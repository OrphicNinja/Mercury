// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZKickingError_generated_h
#error "ESBZKickingError.generated.h already included, missing '#pragma once' in ESBZKickingError.h"
#endif
#define STARBREEZE_ESBZKickingError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZKickingError_h


#define FOREACH_ENUM_ESBZKICKINGERROR(op) \
	op(ESBZKickingError::NotEnoughPlayers) \
	op(ESBZKickingError::KickingInProgress) 

enum class ESBZKickingError : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZKickingError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
