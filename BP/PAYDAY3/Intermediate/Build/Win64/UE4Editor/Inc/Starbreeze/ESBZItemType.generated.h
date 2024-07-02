// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZItemType_generated_h
#error "ESBZItemType.generated.h already included, missing '#pragma once' in ESBZItemType.h"
#endif
#define STARBREEZE_ESBZItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZItemType_h


#define FOREACH_ENUM_ESBZITEMTYPE(op) \
	op(ESBZItemType::None) \
	op(ESBZItemType::Consumable) \
	op(ESBZItemType::Durable) 

enum class ESBZItemType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
