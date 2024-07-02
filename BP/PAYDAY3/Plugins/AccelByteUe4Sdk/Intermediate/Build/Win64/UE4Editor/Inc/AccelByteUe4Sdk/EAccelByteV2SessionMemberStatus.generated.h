// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteV2SessionMemberStatus_generated_h
#error "EAccelByteV2SessionMemberStatus.generated.h already included, missing '#pragma once' in EAccelByteV2SessionMemberStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteV2SessionMemberStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteV2SessionMemberStatus_h


#define FOREACH_ENUM_EACCELBYTEV2SESSIONMEMBERSTATUS(op) \
	op(EAccelByteV2SessionMemberStatus::EMPTY) \
	op(EAccelByteV2SessionMemberStatus::INVITED) \
	op(EAccelByteV2SessionMemberStatus::JOINED) \
	op(EAccelByteV2SessionMemberStatus::CONNECTED) \
	op(EAccelByteV2SessionMemberStatus::LEFT) \
	op(EAccelByteV2SessionMemberStatus::DROPPED) \
	op(EAccelByteV2SessionMemberStatus::REJECTED) \
	op(EAccelByteV2SessionMemberStatus::KICKED) \
	op(EAccelByteV2SessionMemberStatus::TIMEOUT) \
	op(EAccelByteV2SessionMemberStatus::DISCONNECTED) \
	op(EAccelByteV2SessionMemberStatus::TERMINATED) 

enum class EAccelByteV2SessionMemberStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteV2SessionMemberStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
