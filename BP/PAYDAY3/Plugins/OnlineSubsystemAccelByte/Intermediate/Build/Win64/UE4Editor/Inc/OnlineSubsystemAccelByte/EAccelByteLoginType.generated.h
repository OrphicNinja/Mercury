// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMACCELBYTE_EAccelByteLoginType_generated_h
#error "EAccelByteLoginType.generated.h already included, missing '#pragma once' in EAccelByteLoginType.h"
#endif
#define ONLINESUBSYSTEMACCELBYTE_EAccelByteLoginType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_OnlineSubsystemAccelByte_Source_OnlineSubsystemAccelByte_Public_EAccelByteLoginType_h


#define FOREACH_ENUM_EACCELBYTELOGINTYPE(op) \
	op(EAccelByteLoginType::None) \
	op(EAccelByteLoginType::DeviceId) \
	op(EAccelByteLoginType::AccelByte) \
	op(EAccelByteLoginType::Xbox) \
	op(EAccelByteLoginType::PS4) \
	op(EAccelByteLoginType::PS5) \
	op(EAccelByteLoginType::Launcher) \
	op(EAccelByteLoginType::Steam) \
	op(EAccelByteLoginType::EOS) \
	op(EAccelByteLoginType::ExchangeCode) \
	op(EAccelByteLoginType::PublisherCode) \
	op(EAccelByteLoginType::RefreshToken) \
	op(EAccelByteLoginType::CachedToken) 

enum class EAccelByteLoginType : uint8;
template<> ONLINESUBSYSTEMACCELBYTE_API UEnum* StaticEnum<EAccelByteLoginType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
