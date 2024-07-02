// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAISquadOrderType_generated_h
#error "ESBZAISquadOrderType.generated.h already included, missing '#pragma once' in ESBZAISquadOrderType.h"
#endif
#define STARBREEZE_ESBZAISquadOrderType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAISquadOrderType_h


#define FOREACH_ENUM_ESBZAISQUADORDERTYPE(op) \
	op(ESBZAISquadOrderType::None) \
	op(ESBZAISquadOrderType::Attack) \
	op(ESBZAISquadOrderType::Defend) \
	op(ESBZAISquadOrderType::Protect) \
	op(ESBZAISquadOrderType::Sabotage) \
	op(ESBZAISquadOrderType::Retreat) 

enum class ESBZAISquadOrderType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAISquadOrderType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
