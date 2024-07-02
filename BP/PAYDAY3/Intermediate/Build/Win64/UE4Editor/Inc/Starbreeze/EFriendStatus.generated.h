// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_EFriendStatus_generated_h
#error "EFriendStatus.generated.h already included, missing '#pragma once' in EFriendStatus.h"
#endif
#define STARBREEZE_EFriendStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_EFriendStatus_h


#define FOREACH_ENUM_EFRIENDSTATUS(op) \
	op(EFriendStatus::Offline) \
	op(EFriendStatus::Available) \
	op(EFriendStatus::Away) \
	op(EFriendStatus::Invisible) \
	op(EFriendStatus::Unknown) 

enum class EFriendStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<EFriendStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
