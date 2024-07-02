// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EChallengeStatusEnum_generated_h
#error "EChallengeStatusEnum.generated.h already included, missing '#pragma once' in EChallengeStatusEnum.h"
#endif
#define STARBREEZE_EChallengeStatusEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EChallengeStatusEnum_h


#define FOREACH_ENUM_ECHALLENGESTATUSENUM(op) \
	op(EChallengeStatusEnum::INIT) \
	op(EChallengeStatusEnum::INPROGRESS) \
	op(EChallengeStatusEnum::COMPLETED) \
	op(EChallengeStatusEnum::UNAVAILABLE) 

enum class EChallengeStatusEnum : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EChallengeStatusEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
