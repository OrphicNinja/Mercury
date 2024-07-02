// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZFactionAttitude_generated_h
#error "ESBZFactionAttitude.generated.h already included, missing '#pragma once' in ESBZFactionAttitude.h"
#endif
#define STARBREEZE_ESBZFactionAttitude_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZFactionAttitude_h


#define FOREACH_ENUM_ESBZFACTIONATTITUDE(op) \
	op(ESBZFactionAttitude::Invalid) \
	op(ESBZFactionAttitude::Friendly) \
	op(ESBZFactionAttitude::Neutral) \
	op(ESBZFactionAttitude::Hostile) 

enum class ESBZFactionAttitude : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZFactionAttitude>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
