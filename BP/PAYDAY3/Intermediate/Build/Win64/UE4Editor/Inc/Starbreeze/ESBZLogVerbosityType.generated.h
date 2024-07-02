// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZLogVerbosityType_generated_h
#error "ESBZLogVerbosityType.generated.h already included, missing '#pragma once' in ESBZLogVerbosityType.h"
#endif
#define STARBREEZE_ESBZLogVerbosityType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZLogVerbosityType_h


#define FOREACH_ENUM_ESBZLOGVERBOSITYTYPE(op) \
	op(ESBZLogVerbosityType::NoLogging) \
	op(ESBZLogVerbosityType::Fatal) \
	op(ESBZLogVerbosityType::Error) \
	op(ESBZLogVerbosityType::Warning) \
	op(ESBZLogVerbosityType::Display) \
	op(ESBZLogVerbosityType::Log) \
	op(ESBZLogVerbosityType::Verbose) \
	op(ESBZLogVerbosityType::VeryVerbose) \
	op(ESBZLogVerbosityType::All) 

enum class ESBZLogVerbosityType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZLogVerbosityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
