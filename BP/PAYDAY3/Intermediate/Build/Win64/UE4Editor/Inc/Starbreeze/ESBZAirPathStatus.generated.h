// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZAirPathStatus_generated_h
#error "ESBZAirPathStatus.generated.h already included, missing '#pragma once' in ESBZAirPathStatus.h"
#endif
#define STARBREEZE_ESBZAirPathStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZAirPathStatus_h


#define FOREACH_ENUM_ESBZAIRPATHSTATUS(op) \
	op(ESBZAirPathStatus::Rejected) \
	op(ESBZAirPathStatus::Failed) \
	op(ESBZAirPathStatus::Partial) \
	op(ESBZAirPathStatus::Succeeded) \
	op(ESBZAirPathStatus::InProgress) 

enum class ESBZAirPathStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZAirPathStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
