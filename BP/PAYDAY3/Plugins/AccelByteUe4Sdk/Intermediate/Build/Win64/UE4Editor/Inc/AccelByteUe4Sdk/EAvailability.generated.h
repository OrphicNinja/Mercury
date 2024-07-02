// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAvailability_generated_h
#error "EAvailability.generated.h already included, missing '#pragma once' in EAvailability.h"
#endif
#define ACCELBYTEUE4SDK_EAvailability_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAvailability_h


#define FOREACH_ENUM_EAVAILABILITY(op) \
	op(EAvailability::Offline) \
	op(EAvailability::Online) \
	op(EAvailability::Busy) \
	op(EAvailability::Invisible) \
	op(EAvailability::Away) 

enum class EAvailability : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAvailability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
