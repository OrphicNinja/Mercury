// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZTrafficLightStatus_generated_h
#error "ESBZTrafficLightStatus.generated.h already included, missing '#pragma once' in ESBZTrafficLightStatus.h"
#endif
#define STARBREEZE_ESBZTrafficLightStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZTrafficLightStatus_h


#define FOREACH_ENUM_ESBZTRAFFICLIGHTSTATUS(op) \
	op(ESBZTrafficLightStatus::FullOff) \
	op(ESBZTrafficLightStatus::Red) \
	op(ESBZTrafficLightStatus::Orange) \
	op(ESBZTrafficLightStatus::Yellow) \
	op(ESBZTrafficLightStatus::Green) \
	op(ESBZTrafficLightStatus::FullLights) 

enum class ESBZTrafficLightStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZTrafficLightStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
