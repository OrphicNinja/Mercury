// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZMetaEventType_generated_h
#error "ESBZMetaEventType.generated.h already included, missing '#pragma once' in ESBZMetaEventType.h"
#endif
#define STARBREEZE_ESBZMetaEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZMetaEventType_h


#define FOREACH_ENUM_ESBZMETAEVENTTYPE(op) \
	op(ESBZMetaEventType::None) \
	op(ESBZMetaEventType::IncreasedXP) \
	op(ESBZMetaEventType::IncreasedCash) \
	op(ESBZMetaEventType::NewYear) \
	op(ESBZMetaEventType::Halloween) \
	op(ESBZMetaEventType::AprilsFool) \
	op(ESBZMetaEventType::Midsummer) 

enum class ESBZMetaEventType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZMetaEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
