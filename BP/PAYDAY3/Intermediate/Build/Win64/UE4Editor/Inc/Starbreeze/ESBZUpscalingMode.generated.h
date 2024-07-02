// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZUpscalingMode_generated_h
#error "ESBZUpscalingMode.generated.h already included, missing '#pragma once' in ESBZUpscalingMode.h"
#endif
#define STARBREEZE_ESBZUpscalingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZUpscalingMode_h


#define FOREACH_ENUM_ESBZUPSCALINGMODE(op) \
	op(ESBZUpscalingMode::None) \
	op(ESBZUpscalingMode::Auto) \
	op(ESBZUpscalingMode::UltraQualityPlus) \
	op(ESBZUpscalingMode::UltraQuality) \
	op(ESBZUpscalingMode::Quality) \
	op(ESBZUpscalingMode::Balanced) \
	op(ESBZUpscalingMode::Performance) \
	op(ESBZUpscalingMode::UltraPerformance) 

enum class ESBZUpscalingMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZUpscalingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
