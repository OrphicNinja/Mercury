// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteGameStandardEventName_generated_h
#error "EAccelByteGameStandardEventName.generated.h already included, missing '#pragma once' in EAccelByteGameStandardEventName.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteGameStandardEventName_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteGameStandardEventName_h


#define FOREACH_ENUM_EACCELBYTEGAMESTANDARDEVENTNAME(op) \
	op(EAccelByteGameStandardEventName::resource_Sourced) \
	op(EAccelByteGameStandardEventName::resource_Sinked) \
	op(EAccelByteGameStandardEventName::resource_Upgraded) \
	op(EAccelByteGameStandardEventName::resource_Actioned) \
	op(EAccelByteGameStandardEventName::quest_Started) \
	op(EAccelByteGameStandardEventName::quest_Ended) \
	op(EAccelByteGameStandardEventName::player_Leveled) \
	op(EAccelByteGameStandardEventName::player_Dead) \
	op(EAccelByteGameStandardEventName::reward_Collected) 

enum class EAccelByteGameStandardEventName : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGameStandardEventName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
