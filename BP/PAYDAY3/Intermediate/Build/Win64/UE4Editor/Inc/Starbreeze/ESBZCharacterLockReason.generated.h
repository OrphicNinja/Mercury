// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCharacterLockReason_generated_h
#error "ESBZCharacterLockReason.generated.h already included, missing '#pragma once' in ESBZCharacterLockReason.h"
#endif
#define STARBREEZE_ESBZCharacterLockReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCharacterLockReason_h


#define FOREACH_ENUM_ESBZCHARACTERLOCKREASON(op) \
	op(ESBZCharacterLockReason::NotLocked) \
	op(ESBZCharacterLockReason::NotOwningDLC) 

enum class ESBZCharacterLockReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterLockReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
