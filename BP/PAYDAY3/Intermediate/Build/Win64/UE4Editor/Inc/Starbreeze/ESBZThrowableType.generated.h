// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZThrowableType_generated_h
#error "ESBZThrowableType.generated.h already included, missing '#pragma once' in ESBZThrowableType.h"
#endif
#define STARBREEZE_ESBZThrowableType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZThrowableType_h


#define FOREACH_ENUM_ESBZTHROWABLETYPE(op) \
	op(ESBZThrowableType::None) \
	op(ESBZThrowableType::Flash) \
	op(ESBZThrowableType::Gas) \
	op(ESBZThrowableType::Frag) \
	op(ESBZThrowableType::Knife) \
	op(ESBZThrowableType::Shock) 

enum class ESBZThrowableType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZThrowableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
