// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHostageState_generated_h
#error "ESBZHostageState.generated.h already included, missing '#pragma once' in ESBZHostageState.h"
#endif
#define STARBREEZE_ESBZHostageState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHostageState_h


#define FOREACH_ENUM_ESBZHOSTAGESTATE(op) \
	op(ESBZHostageState::None) \
	op(ESBZHostageState::WantsToGoUpFromGround) \
	op(ESBZHostageState::DownOnGround) \
	op(ESBZHostageState::HogTied) \
	op(ESBZHostageState::Trade) \
	op(ESBZHostageState::Follow) \
	op(ESBZHostageState::Released) 

enum class ESBZHostageState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHostageState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
