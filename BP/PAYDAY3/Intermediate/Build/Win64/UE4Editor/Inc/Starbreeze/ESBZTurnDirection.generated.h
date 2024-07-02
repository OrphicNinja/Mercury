// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZTurnDirection_generated_h
#error "ESBZTurnDirection.generated.h already included, missing '#pragma once' in ESBZTurnDirection.h"
#endif
#define STARBREEZE_ESBZTurnDirection_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZTurnDirection_h


#define FOREACH_ENUM_ESBZTURNDIRECTION(op) \
	op(ESBZTurnDirection::None) \
	op(ESBZTurnDirection::Left) \
	op(ESBZTurnDirection::Right) 

enum class ESBZTurnDirection : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZTurnDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
