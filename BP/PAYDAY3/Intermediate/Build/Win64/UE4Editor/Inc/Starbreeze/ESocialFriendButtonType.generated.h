// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESocialFriendButtonType_generated_h
#error "ESocialFriendButtonType.generated.h already included, missing '#pragma once' in ESocialFriendButtonType.h"
#endif
#define STARBREEZE_ESocialFriendButtonType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESocialFriendButtonType_h


#define FOREACH_ENUM_ESOCIALFRIENDBUTTONTYPE(op) \
	op(ESocialFriendButtonType::AccelByteFriend) \
	op(ESocialFriendButtonType::PlatformFriend) \
	op(ESocialFriendButtonType::IncomingFriendRequest) \
	op(ESocialFriendButtonType::OutgoingFriendRequest) \
	op(ESocialFriendButtonType::UserSearchResult) \
	op(ESocialFriendButtonType::BlockedPlayers) \
	op(ESocialFriendButtonType::OfflineFriends) 

enum class ESocialFriendButtonType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESocialFriendButtonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
