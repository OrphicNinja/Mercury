// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAIBehaviorCategory_generated_h
#error "ESBZAIBehaviorCategory.generated.h already included, missing '#pragma once' in ESBZAIBehaviorCategory.h"
#endif
#define STARBREEZE_ESBZAIBehaviorCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAIBehaviorCategory_h


#define FOREACH_ENUM_ESBZAIBEHAVIORCATEGORY(op) \
	op(ESBZAIBehaviorCategory::None) \
	op(ESBZAIBehaviorCategory::Idle) \
	op(ESBZAIBehaviorCategory::Suspiscious) \
	op(ESBZAIBehaviorCategory::Combat) 

enum class ESBZAIBehaviorCategory : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIBehaviorCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
