// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZToolState_generated_h
#error "ESBZToolState.generated.h already included, missing '#pragma once' in ESBZToolState.h"
#endif
#define STARBREEZE_ESBZToolState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZToolState_h


#define FOREACH_ENUM_ESBZTOOLSTATE(op) \
	op(ESBZToolState::Ready) \
	op(ESBZToolState::Activated) \
	op(ESBZToolState::ActivatedUsing) \
	op(ESBZToolState::ActivatedIdle) \
	op(ESBZToolState::Canceled) \
	op(ESBZToolState::Destroyed) 

enum class ESBZToolState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZToolState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
