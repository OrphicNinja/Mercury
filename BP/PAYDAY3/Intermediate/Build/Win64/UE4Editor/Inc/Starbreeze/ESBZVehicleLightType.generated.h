// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZVehicleLightType_generated_h
#error "ESBZVehicleLightType.generated.h already included, missing '#pragma once' in ESBZVehicleLightType.h"
#endif
#define STARBREEZE_ESBZVehicleLightType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZVehicleLightType_h


#define FOREACH_ENUM_ESBZVEHICLELIGHTTYPE(op) \
	op(ESBZVehicleLightType::Headlights) \
	op(ESBZVehicleLightType::TailLights) \
	op(ESBZVehicleLightType::FogLights) \
	op(ESBZVehicleLightType::BrakeLights) \
	op(ESBZVehicleLightType::ReverseLights) \
	op(ESBZVehicleLightType::TurnLeft) \
	op(ESBZVehicleLightType::TurnRight) 

enum class ESBZVehicleLightType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZVehicleLightType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
