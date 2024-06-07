// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTECUSTOMIZATION_EServerChallengeSortBy_generated_h
#error "EServerChallengeSortBy.generated.h already included, missing '#pragma once' in EServerChallengeSortBy.h"
#endif
#define ACCELBYTECUSTOMIZATION_EServerChallengeSortBy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_EServerChallengeSortBy_h


#define FOREACH_ENUM_ESERVERCHALLENGESORTBY(op) \
	op(EServerChallengeSortBy::NONE) \
	op(EServerChallengeSortBy::NAME_ASC) \
	op(EServerChallengeSortBy::NAME_DESC) \
	op(EServerChallengeSortBy::ORDER_ASC) \
	op(EServerChallengeSortBy::ORDER_DESC) \
	op(EServerChallengeSortBy::TAGS_ASC) \
	op(EServerChallengeSortBy::TAGS_DESC) \
	op(EServerChallengeSortBy::CREATED_ASC) \
	op(EServerChallengeSortBy::CREATED_DESC) 

enum class EServerChallengeSortBy : uint8;
template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EServerChallengeSortBy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
