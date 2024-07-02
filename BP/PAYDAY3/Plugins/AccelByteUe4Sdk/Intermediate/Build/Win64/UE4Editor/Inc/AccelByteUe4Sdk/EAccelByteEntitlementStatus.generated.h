// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteEntitlementStatus_generated_h
#error "EAccelByteEntitlementStatus.generated.h already included, missing '#pragma once' in EAccelByteEntitlementStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteEntitlementStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteEntitlementStatus_h


#define FOREACH_ENUM_EACCELBYTEENTITLEMENTSTATUS(op) \
	op(EAccelByteEntitlementStatus::NONE) \
	op(EAccelByteEntitlementStatus::ACTIVE) \
	op(EAccelByteEntitlementStatus::INACTIVE) \
	op(EAccelByteEntitlementStatus::CONSUMED) \
	op(EAccelByteEntitlementStatus::REVOKED) 

enum class EAccelByteEntitlementStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
