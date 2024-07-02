// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAntiAliasingMode_generated_h
#error "ESBZAntiAliasingMode.generated.h already included, missing '#pragma once' in ESBZAntiAliasingMode.h"
#endif
#define STARBREEZE_ESBZAntiAliasingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAntiAliasingMode_h


#define FOREACH_ENUM_ESBZANTIALIASINGMODE(op) \
	op(ESBZAntiAliasingMode::Off) \
	op(ESBZAntiAliasingMode::FXAA) \
	op(ESBZAntiAliasingMode::Performance) \
	op(ESBZAntiAliasingMode::Quality) \
	op(ESBZAntiAliasingMode::DLAA) \
	op(ESBZAntiAliasingMode::XeSS) \
	op(ESBZAntiAliasingMode::Invalid) 

enum class ESBZAntiAliasingMode;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAntiAliasingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
