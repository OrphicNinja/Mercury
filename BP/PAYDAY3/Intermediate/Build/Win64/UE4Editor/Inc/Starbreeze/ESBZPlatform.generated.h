// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPlatform_generated_h
#error "ESBZPlatform.generated.h already included, missing '#pragma once' in ESBZPlatform.h"
#endif
#define STARBREEZE_ESBZPlatform_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPlatform_h


#define FOREACH_ENUM_ESBZPLATFORM(op) \
	op(ESBZPlatform::Unknown) \
	op(ESBZPlatform::Windows) \
	op(ESBZPlatform::Playstation) \
	op(ESBZPlatform::Xbox) 

enum class ESBZPlatform : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
