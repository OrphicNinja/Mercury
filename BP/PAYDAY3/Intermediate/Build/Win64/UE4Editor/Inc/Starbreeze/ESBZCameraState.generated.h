// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCameraState_generated_h
#error "ESBZCameraState.generated.h already included, missing '#pragma once' in ESBZCameraState.h"
#endif
#define STARBREEZE_ESBZCameraState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCameraState_h


#define FOREACH_ENUM_ESBZCAMERASTATE(op) \
	op(ESBZCameraState::Enabled) \
	op(ESBZCameraState::Disabled) \
	op(ESBZCameraState::Destroyed) 

enum class ESBZCameraState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCameraState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
