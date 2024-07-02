// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZWinchState_generated_h
#error "ESBZWinchState.generated.h already included, missing '#pragma once' in ESBZWinchState.h"
#endif
#define STARBREEZE_ESBZWinchState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZWinchState_h


#define FOREACH_ENUM_ESBZWINCHSTATE(op) \
	op(ESBZWinchState::None) \
	op(ESBZWinchState::HookAvailable) \
	op(ESBZWinchState::HookGrabbed) \
	op(ESBZWinchState::HookAttached) 

enum class ESBZWinchState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZWinchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
