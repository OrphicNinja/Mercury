// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZRequestFeedbackType_generated_h
#error "ESBZRequestFeedbackType.generated.h already included, missing '#pragma once' in ESBZRequestFeedbackType.h"
#endif
#define STARBREEZE_ESBZRequestFeedbackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZRequestFeedbackType_h


#define FOREACH_ENUM_ESBZREQUESTFEEDBACKTYPE(op) \
	op(ESBZRequestFeedbackType::FriendRequest) \
	op(ESBZRequestFeedbackType::RemoveFriendRequest) \
	op(ESBZRequestFeedbackType::CancelFriendRequest) \
	op(ESBZRequestFeedbackType::AcceptFriendRequest) \
	op(ESBZRequestFeedbackType::RejectFriendRequest) \
	op(ESBZRequestFeedbackType::BlockPlayerRequest) \
	op(ESBZRequestFeedbackType::UnblockPlayerRequest) \
	op(ESBZRequestFeedbackType::ReportPlayerRequest) 

enum class ESBZRequestFeedbackType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZRequestFeedbackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
