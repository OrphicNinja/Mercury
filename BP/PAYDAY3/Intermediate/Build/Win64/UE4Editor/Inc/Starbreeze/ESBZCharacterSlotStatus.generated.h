// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCharacterSlotStatus_generated_h
#error "ESBZCharacterSlotStatus.generated.h already included, missing '#pragma once' in ESBZCharacterSlotStatus.h"
#endif
#define STARBREEZE_ESBZCharacterSlotStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCharacterSlotStatus_h


#define FOREACH_ENUM_ESBZCHARACTERSLOTSTATUS(op) \
	op(ESBZCharacterSlotStatus::Available) \
	op(ESBZCharacterSlotStatus::Taken) 

enum class ESBZCharacterSlotStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterSlotStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
