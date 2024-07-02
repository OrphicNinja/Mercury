// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAIVisibilityStances_generated_h
#error "ESBZAIVisibilityStances.generated.h already included, missing '#pragma once' in ESBZAIVisibilityStances.h"
#endif
#define STARBREEZE_ESBZAIVisibilityStances_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAIVisibilityStances_h


#define FOREACH_ENUM_ESBZAIVISIBILITYSTANCES(op) \
	op(ESBZAIVisibilityStances::None) \
	op(ESBZAIVisibilityStances::Crouch) \
	op(ESBZAIVisibilityStances::Stand) \
	op(ESBZAIVisibilityStances::Invalid) 

enum class ESBZAIVisibilityStances : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIVisibilityStances>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
