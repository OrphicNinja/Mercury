// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRewardRequestType_generated_h
#error "ESBZRewardRequestType.generated.h already included, missing '#pragma once' in ESBZRewardRequestType.h"
#endif
#define STARBREEZE_ESBZRewardRequestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRewardRequestType_h


#define FOREACH_ENUM_ESBZREWARDREQUESTTYPE(op) \
	op(ESBZRewardRequestType::HeistCompleted) \
	op(ESBZRewardRequestType::Renown) \
	op(ESBZRewardRequestType::Infamy) \
	op(ESBZRewardRequestType::Challenge) 

enum class ESBZRewardRequestType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRewardRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
