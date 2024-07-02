// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3ThreatLevel_generated_h
#error "EPD3ThreatLevel.generated.h already included, missing '#pragma once' in EPD3ThreatLevel.h"
#endif
#define STARBREEZE_EPD3ThreatLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3ThreatLevel_h


#define FOREACH_ENUM_EPD3THREATLEVEL(op) \
	op(EPD3ThreatLevel::None) \
	op(EPD3ThreatLevel::Low) \
	op(EPD3ThreatLevel::Mid) \
	op(EPD3ThreatLevel::High) \
	op(EPD3ThreatLevel::VeryHigh) 

enum class EPD3ThreatLevel : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3ThreatLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
