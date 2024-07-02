// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EP2PConnectionType_generated_h
#error "EP2PConnectionType.generated.h already included, missing '#pragma once' in EP2PConnectionType.h"
#endif
#define ACCELBYTEUE4SDK_EP2PConnectionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EP2PConnectionType_h


#define FOREACH_ENUM_EP2PCONNECTIONTYPE(op) \
	op(EP2PConnectionType::None) \
	op(EP2PConnectionType::Host) \
	op(EP2PConnectionType::Srflx) \
	op(EP2PConnectionType::Prflx) \
	op(EP2PConnectionType::Relay) 

enum class EP2PConnectionType : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EP2PConnectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
