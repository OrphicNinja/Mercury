// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZEndMissionResult_generated_h
#error "ESBZEndMissionResult.generated.h already included, missing '#pragma once' in ESBZEndMissionResult.h"
#endif
#define STARBREEZE_ESBZEndMissionResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZEndMissionResult_h


#define FOREACH_ENUM_ESBZENDMISSIONRESULT(op) \
	op(ESBZEndMissionResult::Fail) \
	op(ESBZEndMissionResult::Success) \
	op(ESBZEndMissionResult::Unknown) 

enum class ESBZEndMissionResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZEndMissionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
