// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EV2SessionNotifTopic_generated_h
#error "EV2SessionNotifTopic.generated.h already included, missing '#pragma once' in EV2SessionNotifTopic.h"
#endif
#define ACCELBYTEUE4SDK_EV2SessionNotifTopic_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EV2SessionNotifTopic_h


#define FOREACH_ENUM_EV2SESSIONNOTIFTOPIC(op) \
	op(EV2SessionNotifTopic::Invalid) \
	op(EV2SessionNotifTopic::OnPartyInvited) \
	op(EV2SessionNotifTopic::OnPartyMembersChanged) \
	op(EV2SessionNotifTopic::OnPartyJoined) \
	op(EV2SessionNotifTopic::OnPartyRejected) \
	op(EV2SessionNotifTopic::OnPartyKicked) \
	op(EV2SessionNotifTopic::OnSessionInvited) \
	op(EV2SessionNotifTopic::OnSessionJoined) \
	op(EV2SessionNotifTopic::OnSessionMembersChanged) \
	op(EV2SessionNotifTopic::OnSessionKicked) \
	op(EV2SessionNotifTopic::OnSessionRejected) \
	op(EV2SessionNotifTopic::OnDSStatusChanged) \
	op(EV2SessionNotifTopic::OnPartyUpdated) \
	op(EV2SessionNotifTopic::OnGameSessionUpdated) \
	op(EV2SessionNotifTopic::OnSessionStorageChanged) \
	op(EV2SessionNotifTopic::OnSessionEnded) \
	op(EV2SessionNotifTopic::OnSessionNativePlatformSynced) 

enum class EV2SessionNotifTopic : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EV2SessionNotifTopic>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
