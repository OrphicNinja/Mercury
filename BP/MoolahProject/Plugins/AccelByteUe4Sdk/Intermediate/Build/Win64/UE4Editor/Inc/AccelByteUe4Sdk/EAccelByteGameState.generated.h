// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteGameState_generated_h
#error "EAccelByteGameState.generated.h already included, missing '#pragma once' in EAccelByteGameState.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteGameState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteGameState_h


#define FOREACH_ENUM_EACCELBYTEGAMESTATE(op) \
	op(EAccelByteGameState::OUT_OF_GAMEPLAY) \
	op(EAccelByteGameState::IN_GAMEPLAY) \
	op(EAccelByteGameState::STORE) 

enum class EAccelByteGameState : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
