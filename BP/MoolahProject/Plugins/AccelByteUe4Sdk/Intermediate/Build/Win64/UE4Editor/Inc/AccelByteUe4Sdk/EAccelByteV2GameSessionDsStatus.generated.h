// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteV2GameSessionDsStatus_generated_h
#error "EAccelByteV2GameSessionDsStatus.generated.h already included, missing '#pragma once' in EAccelByteV2GameSessionDsStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteV2GameSessionDsStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteV2GameSessionDsStatus_h


#define FOREACH_ENUM_EACCELBYTEV2GAMESESSIONDSSTATUS(op) \
	op(EAccelByteV2GameSessionDsStatus::EMPTY) \
	op(EAccelByteV2GameSessionDsStatus::NEED_TO_REQUEST) \
	op(EAccelByteV2GameSessionDsStatus::REQUESTED) \
	op(EAccelByteV2GameSessionDsStatus::PREPARING) \
	op(EAccelByteV2GameSessionDsStatus::AVAILABLE) \
	op(EAccelByteV2GameSessionDsStatus::FAILED_TO_REQUEST) \
	op(EAccelByteV2GameSessionDsStatus::ENDED) \
	op(EAccelByteV2GameSessionDsStatus::UNKNOWN) 

enum class EAccelByteV2GameSessionDsStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteV2GameSessionDsStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
