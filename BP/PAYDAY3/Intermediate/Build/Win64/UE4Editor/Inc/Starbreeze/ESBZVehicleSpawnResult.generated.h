// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZVehicleSpawnResult_generated_h
#error "ESBZVehicleSpawnResult.generated.h already included, missing '#pragma once' in ESBZVehicleSpawnResult.h"
#endif
#define STARBREEZE_ESBZVehicleSpawnResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZVehicleSpawnResult_h


#define FOREACH_ENUM_ESBZVEHICLESPAWNRESULT(op) \
	op(ESBZVehicleSpawnResult::Success) \
	op(ESBZVehicleSpawnResult::Aborted) 

enum class ESBZVehicleSpawnResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZVehicleSpawnResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
