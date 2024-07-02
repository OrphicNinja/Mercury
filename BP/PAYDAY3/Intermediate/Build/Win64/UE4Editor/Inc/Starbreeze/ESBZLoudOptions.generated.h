// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZLoudOptions_generated_h
#error "ESBZLoudOptions.generated.h already included, missing '#pragma once' in ESBZLoudOptions.h"
#endif
#define STARBREEZE_ESBZLoudOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZLoudOptions_h


#define FOREACH_ENUM_ESBZLOUDOPTIONS(op) \
	op(ESBZLoudOptions::ResetAndRestart) \
	op(ESBZLoudOptions::ResetAndStop) \
	op(ESBZLoudOptions::Cancel) \
	op(ESBZLoudOptions::Continue) 

enum class ESBZLoudOptions : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZLoudOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
