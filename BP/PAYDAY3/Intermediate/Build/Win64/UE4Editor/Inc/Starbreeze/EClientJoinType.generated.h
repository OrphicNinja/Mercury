// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EClientJoinType_generated_h
#error "EClientJoinType.generated.h already included, missing '#pragma once' in EClientJoinType.h"
#endif
#define STARBREEZE_EClientJoinType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EClientJoinType_h


#define FOREACH_ENUM_ECLIENTJOINTYPE(op) \
	op(EClientJoinType::Normal) \
	op(EClientJoinType::DirectJoin) 

enum class EClientJoinType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EClientJoinType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
