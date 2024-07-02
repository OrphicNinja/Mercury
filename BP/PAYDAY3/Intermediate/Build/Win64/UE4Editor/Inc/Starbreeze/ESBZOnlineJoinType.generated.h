// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZOnlineJoinType_generated_h
#error "ESBZOnlineJoinType.generated.h already included, missing '#pragma once' in ESBZOnlineJoinType.h"
#endif
#define STARBREEZE_ESBZOnlineJoinType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZOnlineJoinType_h


#define FOREACH_ENUM_ESBZONLINEJOINTYPE(op) \
	op(ESBZOnlineJoinType::Debug) \
	op(ESBZOnlineJoinType::Public) \
	op(ESBZOnlineJoinType::Private) \
	op(ESBZOnlineJoinType::FriendsOnly) \
	op(ESBZOnlineJoinType::InviteOnly) \
	op(ESBZOnlineJoinType::Default) 

enum class ESBZOnlineJoinType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineJoinType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
