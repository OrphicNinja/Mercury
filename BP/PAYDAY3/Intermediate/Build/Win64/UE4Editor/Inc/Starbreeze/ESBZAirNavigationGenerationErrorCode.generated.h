// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAirNavigationGenerationErrorCode_generated_h
#error "ESBZAirNavigationGenerationErrorCode.generated.h already included, missing '#pragma once' in ESBZAirNavigationGenerationErrorCode.h"
#endif
#define STARBREEZE_ESBZAirNavigationGenerationErrorCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAirNavigationGenerationErrorCode_h


#define FOREACH_ENUM_ESBZAIRNAVIGATIONGENERATIONERRORCODE(op) \
	op(ESBZAirNavigationGenerationErrorCode::Success) \
	op(ESBZAirNavigationGenerationErrorCode::MaxSizeExceeded) \
	op(ESBZAirNavigationGenerationErrorCode::MaxNodesExceeded) 

enum class ESBZAirNavigationGenerationErrorCode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAirNavigationGenerationErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
