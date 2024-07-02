// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EOnlineSessionInfo_generated_h
#error "EOnlineSessionInfo.generated.h already included, missing '#pragma once' in EOnlineSessionInfo.h"
#endif
#define STARBREEZE_EOnlineSessionInfo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EOnlineSessionInfo_h


#define FOREACH_ENUM_EONLINESESSIONINFO(op) \
	op(EOnlineSessionInfo::Initial) \
	op(EOnlineSessionInfo::Terminating) \
	op(EOnlineSessionInfo::Terminated) \
	op(EOnlineSessionInfo::Interrupt) \
	op(EOnlineSessionInfo::Searching) \
	op(EOnlineSessionInfo::SearchCompleted) \
	op(EOnlineSessionInfo::ReservedSlot) \
	op(EOnlineSessionInfo::NoSlots) \
	op(EOnlineSessionInfo::Joining) \
	op(EOnlineSessionInfo::Joined) \
	op(EOnlineSessionInfo::Hosting) \
	op(EOnlineSessionInfo::Host) \
	op(EOnlineSessionInfo::Updating) \
	op(EOnlineSessionInfo::CheckingPrivileges) \
	op(EOnlineSessionInfo::CannotPlayOnline) \
	op(EOnlineSessionInfo::SmartMatching) \
	op(EOnlineSessionInfo::TimedOut) \
	op(EOnlineSessionInfo::Error) 

enum class EOnlineSessionInfo : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EOnlineSessionInfo>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
