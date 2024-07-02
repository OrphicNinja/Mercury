// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZFireTokenType_generated_h
#error "ESBZFireTokenType.generated.h already included, missing '#pragma once' in ESBZFireTokenType.h"
#endif
#define STARBREEZE_ESBZFireTokenType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZFireTokenType_h


#define FOREACH_ENUM_ESBZFIRETOKENTYPE(op) \
	op(ESBZFireTokenType::Miss) \
	op(ESBZFireTokenType::Normal) \
	op(ESBZFireTokenType::Grenade) \
	op(ESBZFireTokenType::Sniper) 

enum class ESBZFireTokenType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZFireTokenType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
