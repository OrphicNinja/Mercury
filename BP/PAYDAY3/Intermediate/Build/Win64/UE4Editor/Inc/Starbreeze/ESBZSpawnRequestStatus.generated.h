// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSpawnRequestStatus_generated_h
#error "ESBZSpawnRequestStatus.generated.h already included, missing '#pragma once' in ESBZSpawnRequestStatus.h"
#endif
#define STARBREEZE_ESBZSpawnRequestStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSpawnRequestStatus_h


#define FOREACH_ENUM_ESBZSPAWNREQUESTSTATUS(op) \
	op(ESBZSpawnRequestStatus::Pending) \
	op(ESBZSpawnRequestStatus::Started) \
	op(ESBZSpawnRequestStatus::Finished) \
	op(ESBZSpawnRequestStatus::Canceled) \
	op(ESBZSpawnRequestStatus::TimedOut) 

enum class ESBZSpawnRequestStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSpawnRequestStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
