// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ETimerScorerSetting_generated_h
#error "ETimerScorerSetting.generated.h already included, missing '#pragma once' in ETimerScorerSetting.h"
#endif
#define STARBREEZE_ETimerScorerSetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ETimerScorerSetting_h


#define FOREACH_ENUM_ETIMERSCORERSETTING(op) \
	op(ETimerScorerSetting::Activate) \
	op(ETimerScorerSetting::Deactivate) \
	op(ETimerScorerSetting::Select) \
	op(ETimerScorerSetting::Deselect) \
	op(ETimerScorerSetting::Success) \
	op(ETimerScorerSetting::Fail) \
	op(ETimerScorerSetting::Abort) 

enum class ETimerScorerSetting : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ETimerScorerSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
