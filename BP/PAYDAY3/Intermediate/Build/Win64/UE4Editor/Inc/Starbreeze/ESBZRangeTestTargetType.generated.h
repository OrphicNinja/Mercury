// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRangeTestTargetType_generated_h
#error "ESBZRangeTestTargetType.generated.h already included, missing '#pragma once' in ESBZRangeTestTargetType.h"
#endif
#define STARBREEZE_ESBZRangeTestTargetType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRangeTestTargetType_h


#define FOREACH_ENUM_ESBZRANGETESTTARGETTYPE(op) \
	op(ESBZRangeTestTargetType::Enemy) \
	op(ESBZRangeTestTargetType::Player) \
	op(ESBZRangeTestTargetType::Cop) \
	op(ESBZRangeTestTargetType::NonAlertedCop) 

enum class ESBZRangeTestTargetType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRangeTestTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
