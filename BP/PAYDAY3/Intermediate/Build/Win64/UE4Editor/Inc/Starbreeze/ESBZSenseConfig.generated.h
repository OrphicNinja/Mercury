// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSenseConfig_generated_h
#error "ESBZSenseConfig.generated.h already included, missing '#pragma once' in ESBZSenseConfig.h"
#endif
#define STARBREEZE_ESBZSenseConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSenseConfig_h


#define FOREACH_ENUM_ESBZSENSECONFIG(op) \
	op(ESBZSenseConfig::Default) \
	op(ESBZSenseConfig::Combat) \
	op(ESBZSenseConfig::Distracted) 

enum class ESBZSenseConfig : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSenseConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
