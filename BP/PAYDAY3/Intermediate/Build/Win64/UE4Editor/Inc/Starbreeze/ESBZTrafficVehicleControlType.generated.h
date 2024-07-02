// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZTrafficVehicleControlType_generated_h
#error "ESBZTrafficVehicleControlType.generated.h already included, missing '#pragma once' in ESBZTrafficVehicleControlType.h"
#endif
#define STARBREEZE_ESBZTrafficVehicleControlType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZTrafficVehicleControlType_h


#define FOREACH_ENUM_ESBZTRAFFICVEHICLECONTROLTYPE(op) \
	op(ESBZTrafficVehicleControlType::StopAtDistance) \
	op(ESBZTrafficVehicleControlType::Start) \
	op(ESBZTrafficVehicleControlType::SetCruisingSpeed) \
	op(ESBZTrafficVehicleControlType::SetDeceleration) \
	op(ESBZTrafficVehicleControlType::SetAcceleration) \
	op(ESBZTrafficVehicleControlType::SoundHorn) \
	op(ESBZTrafficVehicleControlType::None) 

enum class ESBZTrafficVehicleControlType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZTrafficVehicleControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
