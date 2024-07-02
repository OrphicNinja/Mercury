// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteAllowedAction_generated_h
#error "EAccelByteAllowedAction.generated.h already included, missing '#pragma once' in EAccelByteAllowedAction.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteAllowedAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteAllowedAction_h


#define FOREACH_ENUM_EACCELBYTEALLOWEDACTION(op) \
	op(EAccelByteAllowedAction::None) \
	op(EAccelByteAllowedAction::createGroup) \
	op(EAccelByteAllowedAction::joinGroup) \
	op(EAccelByteAllowedAction::inviteUser) \
	op(EAccelByteAllowedAction::kickUser) \
	op(EAccelByteAllowedAction::leaveGroup) \
	op(EAccelByteAllowedAction::responseJoinRequest) 

enum class EAccelByteAllowedAction : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteAllowedAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
