// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EPD3TickerMode_generated_h
#error "EPD3TickerMode.generated.h already included, missing '#pragma once' in EPD3TickerMode.h"
#endif
#define STARBREEZE_EPD3TickerMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EPD3TickerMode_h


#define FOREACH_ENUM_EPD3TICKERMODE(op) \
	op(EPD3TickerMode::None) \
	op(EPD3TickerMode::Casing) \
	op(EPD3TickerMode::Assault) \
	op(EPD3TickerMode::Negotiation) \
	op(EPD3TickerMode::Search) 

enum class EPD3TickerMode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EPD3TickerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
