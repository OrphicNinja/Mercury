// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZCurrencyCode_generated_h
#error "ESBZCurrencyCode.generated.h already included, missing '#pragma once' in ESBZCurrencyCode.h"
#endif
#define STARBREEZE_ESBZCurrencyCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZCurrencyCode_h


#define FOREACH_ENUM_ESBZCURRENCYCODE(op) \
	op(ESBZCurrencyCode::Cash) \
	op(ESBZCurrencyCode::Gold) \
	op(ESBZCurrencyCode::Credit) 

enum class ESBZCurrencyCode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZCurrencyCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
