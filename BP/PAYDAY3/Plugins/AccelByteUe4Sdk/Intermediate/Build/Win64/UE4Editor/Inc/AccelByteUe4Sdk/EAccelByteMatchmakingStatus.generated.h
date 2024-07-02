// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteMatchmakingStatus_generated_h
#error "EAccelByteMatchmakingStatus.generated.h already included, missing '#pragma once' in EAccelByteMatchmakingStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteMatchmakingStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteMatchmakingStatus_h


#define FOREACH_ENUM_EACCELBYTEMATCHMAKINGSTATUS(op) \
	op(EAccelByteMatchmakingStatus::Unknown) \
	op(EAccelByteMatchmakingStatus::Start) \
	op(EAccelByteMatchmakingStatus::Timeout) \
	op(EAccelByteMatchmakingStatus::Cancel) \
	op(EAccelByteMatchmakingStatus::Done) \
	op(EAccelByteMatchmakingStatus::Unavailable) \
	op(EAccelByteMatchmakingStatus::Rejected) 

enum class EAccelByteMatchmakingStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteMatchmakingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
