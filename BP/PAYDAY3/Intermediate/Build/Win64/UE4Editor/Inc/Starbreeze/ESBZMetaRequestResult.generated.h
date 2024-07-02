// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZMetaRequestResult_generated_h
#error "ESBZMetaRequestResult.generated.h already included, missing '#pragma once' in ESBZMetaRequestResult.h"
#endif
#define STARBREEZE_ESBZMetaRequestResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZMetaRequestResult_h


#define FOREACH_ENUM_ESBZMETAREQUESTRESULT(op) \
	op(ESBZMetaRequestResult::Ok) \
	op(ESBZMetaRequestResult::AccelByteHttpClientRequestError) \
	op(ESBZMetaRequestResult::AccelByteHttpServerError) \
	op(ESBZMetaRequestResult::AccelBytePlatformError) \
	op(ESBZMetaRequestResult::AccelByteNamespaceError) \
	op(ESBZMetaRequestResult::AccelByteProfileError) \
	op(ESBZMetaRequestResult::AccelByteBuildInfoError) \
	op(ESBZMetaRequestResult::AccelByteCategoryError) \
	op(ESBZMetaRequestResult::AccelByteEntitlementError) \
	op(ESBZMetaRequestResult::AccelByteOrderError) \
	op(ESBZMetaRequestResult::AccelBytePaymentError) \
	op(ESBZMetaRequestResult::AccelByteWalletError) \
	op(ESBZMetaRequestResult::AccelByteCurrencyError) \
	op(ESBZMetaRequestResult::AccelByteCampaignError) \
	op(ESBZMetaRequestResult::AccelByteSocialError) \
	op(ESBZMetaRequestResult::AccelByteFavoriteError) \
	op(ESBZMetaRequestResult::AccelByteOffenseError) \
	op(ESBZMetaRequestResult::AccelByteStatisticError) \
	op(ESBZMetaRequestResult::AccelByteLeaderboardError) \
	op(ESBZMetaRequestResult::AccelByteCloudSaveError) \
	op(ESBZMetaRequestResult::AccelByteDedicatedServerNotFound) \
	op(ESBZMetaRequestResult::AccelByteDedicatedServerConfigNotFound) \
	op(ESBZMetaRequestResult::AccelByteUnknownError) \
	op(ESBZMetaRequestResult::AccelByteJsonDeserializationFailed) \
	op(ESBZMetaRequestResult::AccelByteInvalidRequest) \
	op(ESBZMetaRequestResult::AccelByteInvalidResponse) \
	op(ESBZMetaRequestResult::AccelByteNetworkError) \
	op(ESBZMetaRequestResult::AccelByteIsNotLoggedIn) \
	op(ESBZMetaRequestResult::AccelByteDsRegistrationConflict) \
	op(ESBZMetaRequestResult::AccelBytePartyStorageError) \
	op(ESBZMetaRequestResult::AccelByteInsufficientFunds) \
	op(ESBZMetaRequestResult::AccelByteBackendFailure) \
	op(ESBZMetaRequestResult::AccelByteUnauthorized) \
	op(ESBZMetaRequestResult::AccelByteInvalidOrder) \
	op(ESBZMetaRequestResult::AccelBytePlayerRecordNotFoundException) \
	op(ESBZMetaRequestResult::AccelByteLobbyNotConnectedError) \
	op(ESBZMetaRequestResult::AccelByteLobbySetupChallengesError) \
	op(ESBZMetaRequestResult::AccelByteFailedToSyncDLC) \
	op(ESBZMetaRequestResult::NoAvailableInventorySlot) \
	op(ESBZMetaRequestResult::AccelByteSavedDataAfterResetOK) \
	op(ESBZMetaRequestResult::AccelByteSavedDataAfterResetFailed) \
	op(ESBZMetaRequestResult::LoadoutIndexOutOfRange) \
	op(ESBZMetaRequestResult::WeaponSlotIndexOutOfRange) \
	op(ESBZMetaRequestResult::InvalidAccelByteOperationForClient) \
	op(ESBZMetaRequestResult::SkillNotProgressed) \
	op(ESBZMetaRequestResult::SkillAlreadyResearched) \
	op(ESBZMetaRequestResult::SkillEquipped) \
	op(ESBZMetaRequestResult::SkillNotEquipped) \
	op(ESBZMetaRequestResult::MissingLoadoutItem) \
	op(ESBZMetaRequestResult::MissingStoreItem) \
	op(ESBZMetaRequestResult::InvalidItemTypeInStoreRequest) \
	op(ESBZMetaRequestResult::FailedToAddWeaponToInventorySlot) \
	op(ESBZMetaRequestResult::InvalidGameConfiguration) \
	op(ESBZMetaRequestResult::FailedToDeleteUserAccount) \
	op(ESBZMetaRequestResult::MissingEntitlementToConsume) \
	op(ESBZMetaRequestResult::ApplyCosmeticsFailed) \
	op(ESBZMetaRequestResult::UpgradeSaveDataFailed) \
	op(ESBZMetaRequestResult::InvalidState) \
	op(ESBZMetaRequestResult::FailedToPurchaseRealMoneyItem) \
	op(ESBZMetaRequestResult::FailedToQueryAchievements) \
	op(ESBZMetaRequestResult::InventoryItemCannotBeDiscarded) \
	op(ESBZMetaRequestResult::FailedToGetReceipts) \
	op(ESBZMetaRequestResult::HaveNotReceivedInitialRewards) \
	op(ESBZMetaRequestResult::MissingEnitlementPermission) \
	op(ESBZMetaRequestResult::VendorItemLocked) 

enum class ESBZMetaRequestResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZMetaRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
