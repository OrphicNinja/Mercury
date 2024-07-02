// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZDamageWeight_generated_h
#error "ESBZDamageWeight.generated.h already included, missing '#pragma once' in ESBZDamageWeight.h"
#endif
#define STARBREEZE_ESBZDamageWeight_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZDamageWeight_h


#define FOREACH_ENUM_ESBZDAMAGEWEIGHT(op) \
	op(ESBZDamageWeight::Flinch) \
	op(ESBZDamageWeight::Interrupt) \
	op(ESBZDamageWeight::Stun) \
	op(ESBZDamageWeight::Incapacitate) 

enum class ESBZDamageWeight : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZDamageWeight>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
