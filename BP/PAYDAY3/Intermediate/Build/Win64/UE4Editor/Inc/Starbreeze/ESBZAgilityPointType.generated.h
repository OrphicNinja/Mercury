// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAgilityPointType_generated_h
#error "ESBZAgilityPointType.generated.h already included, missing '#pragma once' in ESBZAgilityPointType.h"
#endif
#define STARBREEZE_ESBZAgilityPointType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAgilityPointType_h


#define FOREACH_ENUM_ESBZAGILITYPOINTTYPE(op) \
	op(ESBZAgilityPointType::FloorStart) \
	op(ESBZAgilityPointType::FloorEnd) \
	op(ESBZAgilityPointType::Wall) \
	op(ESBZAgilityPointType::FrontEdgeTop) \
	op(ESBZAgilityPointType::BackEdgeTop) \
	op(ESBZAgilityPointType::FrontEdgeBottom) \
	op(ESBZAgilityPointType::BackEdgeBottom) 

enum class ESBZAgilityPointType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAgilityPointType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
