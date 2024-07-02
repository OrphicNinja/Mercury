// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelBytePredefinedEventName_generated_h
#error "EAccelBytePredefinedEventName.generated.h already included, missing '#pragma once' in EAccelBytePredefinedEventName.h"
#endif
#define ACCELBYTEUE4SDK_EAccelBytePredefinedEventName_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelBytePredefinedEventName_h


#define FOREACH_ENUM_EACCELBYTEPREDEFINEDEVENTNAME(op) \
	op(EAccelBytePredefinedEventName::SDK_Initialized) \
	op(EAccelBytePredefinedEventName::Login_Succeeded) \
	op(EAccelBytePredefinedEventName::Login_Failed) \
	op(EAccelBytePredefinedEventName::UserAgreement_Accepted) \
	op(EAccelBytePredefinedEventName::UserAgreement_NotAccepted) \
	op(EAccelBytePredefinedEventName::UserProfile_Created) \
	op(EAccelBytePredefinedEventName::UserProfile_Updated) \
	op(EAccelBytePredefinedEventName::UserProfile_Deleted) \
	op(EAccelBytePredefinedEventName::GameProfile_Created) \
	op(EAccelBytePredefinedEventName::GameProfile_Updated) \
	op(EAccelBytePredefinedEventName::GameProfile_Deleted) \
	op(EAccelBytePredefinedEventName::UserStatItem_Created) \
	op(EAccelBytePredefinedEventName::UserStatItem_Updated) \
	op(EAccelBytePredefinedEventName::UserStatItem_Deleted) \
	op(EAccelBytePredefinedEventName::UserStatItem_Reset) \
	op(EAccelBytePredefinedEventName::UserStatItem_GetItemsByCodes) \
	op(EAccelBytePredefinedEventName::UserStatItem_GetSameItemsFromUsers) \
	op(EAccelBytePredefinedEventName::UserStatItem_GetItems) \
	op(EAccelBytePredefinedEventName::GlobalStatItem_GetItemByCode) \
	op(EAccelBytePredefinedEventName::StatCycleItem_GetItemList) \
	op(EAccelBytePredefinedEventName::StatCycleItem_GetConfigByCycleId) \
	op(EAccelBytePredefinedEventName::StatCycleItem_GetListCycle) \
	op(EAccelBytePredefinedEventName::StatCycleItem_GetCycleItems) \
	op(EAccelBytePredefinedEventName::PlayerRecord_Created) \
	op(EAccelBytePredefinedEventName::PlayerRecord_Updated) \
	op(EAccelBytePredefinedEventName::PlayerRecord_Deleted) \
	op(EAccelBytePredefinedEventName::PlayerRecord_GetRecords) \
	op(EAccelBytePredefinedEventName::PublicPlayerRecord_GetSameRecordsFromUsers) \
	op(EAccelBytePredefinedEventName::PublicPlayerRecord_GetRecord) \
	op(EAccelBytePredefinedEventName::PublicPlayerRecord_Updated) \
	op(EAccelBytePredefinedEventName::PublicPlayerRecord_GetOtherUserKeys) \
	op(EAccelBytePredefinedEventName::PublicPlayerRecord_GetOtherUserRecords) \
	op(EAccelBytePredefinedEventName::GameRecord_Created) \
	op(EAccelBytePredefinedEventName::GameRecord_GetRecord) \
	op(EAccelBytePredefinedEventName::GameRecord_Updated) \
	op(EAccelBytePredefinedEventName::GameRecord_Deleted) \
	op(EAccelBytePredefinedEventName::GameRecord_GetRecords) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_Created) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_GetRecord) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_GetRecords) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_GetSameRecordsFromUsers) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_GetRecordsByQuery) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_GetAll) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_Updated) \
	op(EAccelBytePredefinedEventName::PlayerBinaryRecord_Deleted) \
	op(EAccelBytePredefinedEventName::GameBinaryRecord_GetRecord) \
	op(EAccelBytePredefinedEventName::GameBinaryRecord_GetRecords) \
	op(EAccelBytePredefinedEventName::GameBinaryRecord_GetRecordsByQuery) \
	op(EAccelBytePredefinedEventName::Store_Opened) \
	op(EAccelBytePredefinedEventName::Store_Closed) \
	op(EAccelBytePredefinedEventName::ItemInspect_Opened) \
	op(EAccelBytePredefinedEventName::ItemInspect_Closed) \
	op(EAccelBytePredefinedEventName::Currency_Updated) \
	op(EAccelBytePredefinedEventName::Entitlement_Granted) \
	op(EAccelBytePredefinedEventName::Entitlement_Revoked) \
	op(EAccelBytePredefinedEventName::CampaignCode_Redeemed) \
	op(EAccelBytePredefinedEventName::Item_Fulfilled) \
	op(EAccelBytePredefinedEventName::Item_Rewarded) \
	op(EAccelBytePredefinedEventName::PaymentConfig_Updated) \
	op(EAccelBytePredefinedEventName::Payment_Succeeded) \
	op(EAccelBytePredefinedEventName::Payment_Failed) \
	op(EAccelBytePredefinedEventName::Subscription_Started) \
	op(EAccelBytePredefinedEventName::Subscription_Cancelled) \
	op(EAccelBytePredefinedEventName::Wallet_Credited) \
	op(EAccelBytePredefinedEventName::Wallet_Debited) \
	op(EAccelBytePredefinedEventName::Lobby_Connected) \
	op(EAccelBytePredefinedEventName::Lobby_Disconnected) \
	op(EAccelBytePredefinedEventName::MPV1_Matchmaking_Started) \
	op(EAccelBytePredefinedEventName::MPV1_Matchmaking_MatchNotif_Received) \
	op(EAccelBytePredefinedEventName::MPV1_Matchmaking_ReadyConsent) \
	op(EAccelBytePredefinedEventName::MPV1_Matchmaking_RejectMatch) \
	op(EAccelBytePredefinedEventName::MPV1_Matchmaking_Canceled) \
	op(EAccelBytePredefinedEventName::MPV1_Party_Joined) \
	op(EAccelBytePredefinedEventName::MPV1_Party_Leave) \
	op(EAccelBytePredefinedEventName::MPV1_Party_Invite) \
	op(EAccelBytePredefinedEventName::MPV1_Party_Kick) \
	op(EAccelBytePredefinedEventName::MPV2_GameSession_Created) \
	op(EAccelBytePredefinedEventName::MPV2_GameSession_Invited) \
	op(EAccelBytePredefinedEventName::MPV2_GameSession_Joined) \
	op(EAccelBytePredefinedEventName::MPV2_GameSession_Left) \
	op(EAccelBytePredefinedEventName::MPV2_GameSession_LeaderPromoted) \
	op(EAccelBytePredefinedEventName::MPV2_PartySession_Created) \
	op(EAccelBytePredefinedEventName::MPV2_PartySession_Invited) \
	op(EAccelBytePredefinedEventName::MPV2_PartySession_Joined) \
	op(EAccelBytePredefinedEventName::MPV2_PartySession_Left) \
	op(EAccelBytePredefinedEventName::MPV2_PartySession_Kicked) \
	op(EAccelBytePredefinedEventName::MPV2_PartySession_LeaderPromoted) \
	op(EAccelBytePredefinedEventName::MPV2_Matchmaking_Requested) \
	op(EAccelBytePredefinedEventName::MPV2_Matchmaking_Started) \
	op(EAccelBytePredefinedEventName::MPV2_Matchmaking_Canceled) \
	op(EAccelBytePredefinedEventName::DS_DSHub_Connected) \
	op(EAccelBytePredefinedEventName::DS_DSHub_Disconnected) \
	op(EAccelBytePredefinedEventName::DS_Registered) \
	op(EAccelBytePredefinedEventName::DS_Unregistered) \
	op(EAccelBytePredefinedEventName::DS_Claimed) \
	op(EAccelBytePredefinedEventName::DS_MemberChangedNotif_Received) \
	op(EAccelBytePredefinedEventName::DS_GameClient_Joined) \
	op(EAccelBytePredefinedEventName::DS_GameClient_Left) \
	op(EAccelBytePredefinedEventName::DS_BackfillProposal_Received) \
	op(EAccelBytePredefinedEventName::DS_BackfillProposal_Accepted) \
	op(EAccelBytePredefinedEventName::DS_BackfillProposal_Rejected) \
	op(EAccelBytePredefinedEventName::FriendRequest_Sent) \
	op(EAccelBytePredefinedEventName::FriendRequest_Cancelled) \
	op(EAccelBytePredefinedEventName::FriendRequest_Accepted) \
	op(EAccelBytePredefinedEventName::FriendRequest_Rejected) \
	op(EAccelBytePredefinedEventName::Friend_Unfriended) \
	op(EAccelBytePredefinedEventName::User_Blocked) \
	op(EAccelBytePredefinedEventName::User_Unblocked) \
	op(EAccelBytePredefinedEventName::UserPresence_StatusUpdated) \
	op(EAccelBytePredefinedEventName::User_Banned) \
	op(EAccelBytePredefinedEventName::User_Unbanned) \
	op(EAccelBytePredefinedEventName::ChatV2_Connected) \
	op(EAccelBytePredefinedEventName::ChatV2_Disconnected) \
	op(EAccelBytePredefinedEventName::ChatV2_PersonalTopic_Created) \
	op(EAccelBytePredefinedEventName::ChatV2_GroupTopic_Created) \
	op(EAccelBytePredefinedEventName::ChatV2_Topic_Joined) \
	op(EAccelBytePredefinedEventName::ChatV2_Topic_Quit) \
	op(EAccelBytePredefinedEventName::ChatV2_Topic_UserAdded) \
	op(EAccelBytePredefinedEventName::ChatV2_Topic_UserRemoved) \
	op(EAccelBytePredefinedEventName::ChatV2_Topic_Updated) \
	op(EAccelBytePredefinedEventName::ChatV2_Topic_Deleted) \
	op(EAccelBytePredefinedEventName::ChatV2_UserBlocked) \
	op(EAccelBytePredefinedEventName::ChatV2_UserUnblocked) \
	op(EAccelBytePredefinedEventName::ChatV2_GroupChat_ModeratorMutedUser) \
	op(EAccelBytePredefinedEventName::ChatV2_GroupChat_ModeratorUnmutedUser) \
	op(EAccelBytePredefinedEventName::ChatV2_GroupChat_ModeratorBannedUser) \
	op(EAccelBytePredefinedEventName::ChatV2_GroupChat_ModeratorUnbannedUser) \
	op(EAccelBytePredefinedEventName::ChatV2_GroupChat_ModeratorDeletedGroupChat) \
	op(EAccelBytePredefinedEventName::Group_Created) \
	op(EAccelBytePredefinedEventName::Group_Updated) \
	op(EAccelBytePredefinedEventName::Group_CustomAttributesUpdated) \
	op(EAccelBytePredefinedEventName::Group_CustomRuleUpdated) \
	op(EAccelBytePredefinedEventName::Group_PredefinedRuleUpdated) \
	op(EAccelBytePredefinedEventName::Group_PredefinedRuleDeleted) \
	op(EAccelBytePredefinedEventName::Group_GetInformation) \
	op(EAccelBytePredefinedEventName::Group_Find) \
	op(EAccelBytePredefinedEventName::Group_FindByIds) \
	op(EAccelBytePredefinedEventName::Group_Joined) \
	op(EAccelBytePredefinedEventName::Group_Deleted) \
	op(EAccelBytePredefinedEventName::Group_Left) \
	op(EAccelBytePredefinedEventName::Group_UserInvited) \
	op(EAccelBytePredefinedEventName::Group_InvitationAccepted) \
	op(EAccelBytePredefinedEventName::Group_InvitationRejected) \
	op(EAccelBytePredefinedEventName::Group_InvitationCanceled) \
	op(EAccelBytePredefinedEventName::Group_GetInvitationList) \
	op(EAccelBytePredefinedEventName::Group_JoinRequestAccepted) \
	op(EAccelBytePredefinedEventName::Group_JoinRequestRejected) \
	op(EAccelBytePredefinedEventName::Group_JoinRequestCanceled) \
	op(EAccelBytePredefinedEventName::Group_GetJoinRequest) \
	op(EAccelBytePredefinedEventName::Group_MemberKicked) \
	op(EAccelBytePredefinedEventName::Group_MemberRoleUpdated) \
	op(EAccelBytePredefinedEventName::Group_MemberRoleDeleted) \
	op(EAccelBytePredefinedEventName::Group_GetGroupMember) \
	op(EAccelBytePredefinedEventName::Achievement_Unlocked) \
	op(EAccelBytePredefinedEventName::Achievement_GetAll) \
	op(EAccelBytePredefinedEventName::Achievement_GetSpecific) \
	op(EAccelBytePredefinedEventName::Achievement_GetUserAchievements) \
	op(EAccelBytePredefinedEventName::GlobalAchievement_Get) \
	op(EAccelBytePredefinedEventName::GlobalAchievement_GetContributors) \
	op(EAccelBytePredefinedEventName::GlobalAchievement_GetContributed) \
	op(EAccelBytePredefinedEventName::GlobalAchievement_Claimed) \
	op(EAccelBytePredefinedEventName::Achievement_GetTags) \
	op(EAccelBytePredefinedEventName::Leaderboard_GetRankings) \
	op(EAccelBytePredefinedEventName::Leaderboard_GetUserRanking) \
	op(EAccelBytePredefinedEventName::Leaderboard_GetLeaderboards) \
	op(EAccelBytePredefinedEventName::Leaderboard_GetRankingByCycleId) \
	op(EAccelBytePredefinedEventName::Leaderboard_GetUsersRankings) \
	op(EAccelBytePredefinedEventName::SeasonPass_RewardClaimed) \
	op(EAccelBytePredefinedEventName::SeasonPass_BulkRewardClaimed) \
	op(EAccelBytePredefinedEventName::SeasonPass_GetCurrentSeason) \
	op(EAccelBytePredefinedEventName::SeasonPass_GetUserSpecificSeasonData) \
	op(EAccelBytePredefinedEventName::SeasonPass_GetUserCurrentSeasonData) \
	op(EAccelBytePredefinedEventName::Reward_GetRewardByCode) \
	op(EAccelBytePredefinedEventName::Reward_GetRewardById) \
	op(EAccelBytePredefinedEventName::Reward_GetAllReward) \
	op(EAccelBytePredefinedEventName::UGCChannel_Created) \
	op(EAccelBytePredefinedEventName::UGCChannel_Updated) \
	op(EAccelBytePredefinedEventName::UGCContent_Added) \
	op(EAccelBytePredefinedEventName::UGCContent_Deleted) 

enum class EAccelBytePredefinedEventName : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePredefinedEventName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
