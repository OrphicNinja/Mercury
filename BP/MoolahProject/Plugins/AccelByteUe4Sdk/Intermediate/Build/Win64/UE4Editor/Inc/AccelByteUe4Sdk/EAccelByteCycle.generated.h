// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteCycle_generated_h
#error "EAccelByteCycle.generated.h already included, missing '#pragma once' in EAccelByteCycle.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteCycle_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteCycle_h


#define FOREACH_ENUM_EACCELBYTECYCLE(op) \
	op(EAccelByteCycle::DAILY) \
	op(EAccelByteCycle::WEEKLY) \
	op(EAccelByteCycle::MONTHLY) \
	op(EAccelByteCycle::QUARTERLY) \
	op(EAccelByteCycle::YEARLY) \
	op(EAccelByteCycle::ANNUALLY) 

enum class EAccelByteCycle : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteCycle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
