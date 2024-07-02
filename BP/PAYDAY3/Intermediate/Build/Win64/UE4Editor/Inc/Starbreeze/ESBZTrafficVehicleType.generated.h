// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZTrafficVehicleType_generated_h
#error "ESBZTrafficVehicleType.generated.h already included, missing '#pragma once' in ESBZTrafficVehicleType.h"
#endif
#define STARBREEZE_ESBZTrafficVehicleType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZTrafficVehicleType_h


#define FOREACH_ENUM_ESBZTRAFFICVEHICLETYPE(op) \
	op(ESBZTrafficVehicleType::FirstResponder) \
	op(ESBZTrafficVehicleType::SwatVan) \
	op(ESBZTrafficVehicleType::EscapeVan) \
	op(ESBZTrafficVehicleType::Civilian) \
	op(ESBZTrafficVehicleType::Aerial) \
	op(ESBZTrafficVehicleType::FBIVan) 

enum class ESBZTrafficVehicleType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZTrafficVehicleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
