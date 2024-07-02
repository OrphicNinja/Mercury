// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSplineType_generated_h
#error "ESBZSplineType.generated.h already included, missing '#pragma once' in ESBZSplineType.h"
#endif
#define STARBREEZE_ESBZSplineType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSplineType_h


#define FOREACH_ENUM_ESBZSPLINETYPE(op) \
	op(ESBZSplineType::Ascending) \
	op(ESBZSplineType::Descending) \
	op(ESBZSplineType::Forward) \
	op(ESBZSplineType::Reverse) 

enum class ESBZSplineType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSplineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
