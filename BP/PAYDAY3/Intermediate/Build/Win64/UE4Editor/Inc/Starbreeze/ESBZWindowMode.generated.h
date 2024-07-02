// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZWindowMode_generated_h
#error "ESBZWindowMode.generated.h already included, missing '#pragma once' in ESBZWindowMode.h"
#endif
#define STARBREEZE_ESBZWindowMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZWindowMode_h


#define FOREACH_ENUM_ESBZWINDOWMODE(op) \
	op(ESBZWindowMode::FullScreen) \
	op(ESBZWindowMode::Borderless) \
	op(ESBZWindowMode::Windowed) \
	op(ESBZWindowMode::Invalid) 

enum class ESBZWindowMode;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZWindowMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
