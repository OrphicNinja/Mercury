// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCameraColorState_generated_h
#error "ESBZCameraColorState.generated.h already included, missing '#pragma once' in ESBZCameraColorState.h"
#endif
#define STARBREEZE_ESBZCameraColorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCameraColorState_h


#define FOREACH_ENUM_ESBZCAMERACOLORSTATE(op) \
	op(ESBZCameraColorState::None) \
	op(ESBZCameraColorState::AIControlled) \
	op(ESBZCameraColorState::Hacked) \
	op(ESBZCameraColorState::Friendly) 

enum class ESBZCameraColorState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCameraColorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
