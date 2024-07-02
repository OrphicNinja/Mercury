// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZGameDataState_generated_h
#error "ESBZGameDataState.generated.h already included, missing '#pragma once' in ESBZGameDataState.h"
#endif
#define STARBREEZE_ESBZGameDataState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZGameDataState_h


#define FOREACH_ENUM_ESBZGAMEDATASTATE(op) \
	op(ESBZGameDataState::NotLoggedIn) \
	op(ESBZGameDataState::NotLoaded) \
	op(ESBZGameDataState::Loaded) \
	op(ESBZGameDataState::ProgressNotLoaded) 

enum class ESBZGameDataState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZGameDataState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
