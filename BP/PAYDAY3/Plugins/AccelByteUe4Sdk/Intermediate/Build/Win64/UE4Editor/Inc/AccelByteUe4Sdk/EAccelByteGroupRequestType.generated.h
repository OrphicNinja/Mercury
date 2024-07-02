// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteGroupRequestType_generated_h
#error "EAccelByteGroupRequestType.generated.h already included, missing '#pragma once' in EAccelByteGroupRequestType.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteGroupRequestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteGroupRequestType_h


#define FOREACH_ENUM_EACCELBYTEGROUPREQUESTTYPE(op) \
	op(EAccelByteGroupRequestType::NONE) \
	op(EAccelByteGroupRequestType::INVITE) \
	op(EAccelByteGroupRequestType::JOIN) \
	op(EAccelByteGroupRequestType::JOINED) 

enum class EAccelByteGroupRequestType : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGroupRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
