// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZServiceStatus_generated_h
#error "ESBZServiceStatus.generated.h already included, missing '#pragma once' in ESBZServiceStatus.h"
#endif
#define STARBREEZE_ESBZServiceStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZServiceStatus_h


#define FOREACH_ENUM_ESBZSERVICESTATUS(op) \
	op(ESBZServiceStatus::OK) \
	op(ESBZServiceStatus::InternetFailure) \
	op(ESBZServiceStatus::NebulaFailure) 

enum class ESBZServiceStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZServiceStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
