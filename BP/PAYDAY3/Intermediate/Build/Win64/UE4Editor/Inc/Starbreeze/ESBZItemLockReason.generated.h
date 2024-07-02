// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZItemLockReason_generated_h
#error "ESBZItemLockReason.generated.h already included, missing '#pragma once' in ESBZItemLockReason.h"
#endif
#define STARBREEZE_ESBZItemLockReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZItemLockReason_h


#define FOREACH_ENUM_ESBZITEMLOCKREASON(op) \
	op(ESBZItemLockReason::NotLocked) \
	op(ESBZItemLockReason::InfamyLevel) \
	op(ESBZItemLockReason::AlreadyPurchased) \
	op(ESBZItemLockReason::NotOwningDLC) 

enum class ESBZItemLockReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemLockReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
