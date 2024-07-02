// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZUpscaler_generated_h
#error "ESBZUpscaler.generated.h already included, missing '#pragma once' in ESBZUpscaler.h"
#endif
#define STARBREEZE_ESBZUpscaler_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZUpscaler_h


#define FOREACH_ENUM_ESBZUPSCALER(op) \
	op(ESBZUpscaler::None) \
	op(ESBZUpscaler::Unreal) \
	op(ESBZUpscaler::NIS) \
	op(ESBZUpscaler::DLSSSR) \
	op(ESBZUpscaler::FSR2) \
	op(ESBZUpscaler::XeSS) 

enum class ESBZUpscaler : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZUpscaler>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
