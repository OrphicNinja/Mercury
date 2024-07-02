// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMetaRequestResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMetaRequestResult() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMetaRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMetaRequestResult"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMetaRequestResult>()
	{
		return ESBZMetaRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMetaRequestResult(ESBZMetaRequestResult_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMetaRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult_Hash() { return 2051577383U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMetaRequestResult"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMetaRequestResult::Ok", (int64)ESBZMetaRequestResult::Ok },
				{ "ESBZMetaRequestResult::AccelByteHttpClientRequestError", (int64)ESBZMetaRequestResult::AccelByteHttpClientRequestError },
				{ "ESBZMetaRequestResult::AccelByteHttpServerError", (int64)ESBZMetaRequestResult::AccelByteHttpServerError },
				{ "ESBZMetaRequestResult::AccelBytePlatformError", (int64)ESBZMetaRequestResult::AccelBytePlatformError },
				{ "ESBZMetaRequestResult::AccelByteNamespaceError", (int64)ESBZMetaRequestResult::AccelByteNamespaceError },
				{ "ESBZMetaRequestResult::AccelByteProfileError", (int64)ESBZMetaRequestResult::AccelByteProfileError },
				{ "ESBZMetaRequestResult::AccelByteBuildInfoError", (int64)ESBZMetaRequestResult::AccelByteBuildInfoError },
				{ "ESBZMetaRequestResult::AccelByteCategoryError", (int64)ESBZMetaRequestResult::AccelByteCategoryError },
				{ "ESBZMetaRequestResult::AccelByteEntitlementError", (int64)ESBZMetaRequestResult::AccelByteEntitlementError },
				{ "ESBZMetaRequestResult::AccelByteOrderError", (int64)ESBZMetaRequestResult::AccelByteOrderError },
				{ "ESBZMetaRequestResult::AccelBytePaymentError", (int64)ESBZMetaRequestResult::AccelBytePaymentError },
				{ "ESBZMetaRequestResult::AccelByteWalletError", (int64)ESBZMetaRequestResult::AccelByteWalletError },
				{ "ESBZMetaRequestResult::AccelByteCurrencyError", (int64)ESBZMetaRequestResult::AccelByteCurrencyError },
				{ "ESBZMetaRequestResult::AccelByteCampaignError", (int64)ESBZMetaRequestResult::AccelByteCampaignError },
				{ "ESBZMetaRequestResult::AccelByteSocialError", (int64)ESBZMetaRequestResult::AccelByteSocialError },
				{ "ESBZMetaRequestResult::AccelByteFavoriteError", (int64)ESBZMetaRequestResult::AccelByteFavoriteError },
				{ "ESBZMetaRequestResult::AccelByteOffenseError", (int64)ESBZMetaRequestResult::AccelByteOffenseError },
				{ "ESBZMetaRequestResult::AccelByteStatisticError", (int64)ESBZMetaRequestResult::AccelByteStatisticError },
				{ "ESBZMetaRequestResult::AccelByteLeaderboardError", (int64)ESBZMetaRequestResult::AccelByteLeaderboardError },
				{ "ESBZMetaRequestResult::AccelByteCloudSaveError", (int64)ESBZMetaRequestResult::AccelByteCloudSaveError },
				{ "ESBZMetaRequestResult::AccelByteDedicatedServerNotFound", (int64)ESBZMetaRequestResult::AccelByteDedicatedServerNotFound },
				{ "ESBZMetaRequestResult::AccelByteDedicatedServerConfigNotFound", (int64)ESBZMetaRequestResult::AccelByteDedicatedServerConfigNotFound },
				{ "ESBZMetaRequestResult::AccelByteUnknownError", (int64)ESBZMetaRequestResult::AccelByteUnknownError },
				{ "ESBZMetaRequestResult::AccelByteJsonDeserializationFailed", (int64)ESBZMetaRequestResult::AccelByteJsonDeserializationFailed },
				{ "ESBZMetaRequestResult::AccelByteInvalidRequest", (int64)ESBZMetaRequestResult::AccelByteInvalidRequest },
				{ "ESBZMetaRequestResult::AccelByteInvalidResponse", (int64)ESBZMetaRequestResult::AccelByteInvalidResponse },
				{ "ESBZMetaRequestResult::AccelByteNetworkError", (int64)ESBZMetaRequestResult::AccelByteNetworkError },
				{ "ESBZMetaRequestResult::AccelByteIsNotLoggedIn", (int64)ESBZMetaRequestResult::AccelByteIsNotLoggedIn },
				{ "ESBZMetaRequestResult::AccelByteDsRegistrationConflict", (int64)ESBZMetaRequestResult::AccelByteDsRegistrationConflict },
				{ "ESBZMetaRequestResult::AccelBytePartyStorageError", (int64)ESBZMetaRequestResult::AccelBytePartyStorageError },
				{ "ESBZMetaRequestResult::AccelByteInsufficientFunds", (int64)ESBZMetaRequestResult::AccelByteInsufficientFunds },
				{ "ESBZMetaRequestResult::AccelByteBackendFailure", (int64)ESBZMetaRequestResult::AccelByteBackendFailure },
				{ "ESBZMetaRequestResult::AccelByteUnauthorized", (int64)ESBZMetaRequestResult::AccelByteUnauthorized },
				{ "ESBZMetaRequestResult::AccelByteInvalidOrder", (int64)ESBZMetaRequestResult::AccelByteInvalidOrder },
				{ "ESBZMetaRequestResult::AccelBytePlayerRecordNotFoundException", (int64)ESBZMetaRequestResult::AccelBytePlayerRecordNotFoundException },
				{ "ESBZMetaRequestResult::AccelByteLobbyNotConnectedError", (int64)ESBZMetaRequestResult::AccelByteLobbyNotConnectedError },
				{ "ESBZMetaRequestResult::AccelByteLobbySetupChallengesError", (int64)ESBZMetaRequestResult::AccelByteLobbySetupChallengesError },
				{ "ESBZMetaRequestResult::AccelByteFailedToSyncDLC", (int64)ESBZMetaRequestResult::AccelByteFailedToSyncDLC },
				{ "ESBZMetaRequestResult::NoAvailableInventorySlot", (int64)ESBZMetaRequestResult::NoAvailableInventorySlot },
				{ "ESBZMetaRequestResult::AccelByteSavedDataAfterResetOK", (int64)ESBZMetaRequestResult::AccelByteSavedDataAfterResetOK },
				{ "ESBZMetaRequestResult::AccelByteSavedDataAfterResetFailed", (int64)ESBZMetaRequestResult::AccelByteSavedDataAfterResetFailed },
				{ "ESBZMetaRequestResult::LoadoutIndexOutOfRange", (int64)ESBZMetaRequestResult::LoadoutIndexOutOfRange },
				{ "ESBZMetaRequestResult::WeaponSlotIndexOutOfRange", (int64)ESBZMetaRequestResult::WeaponSlotIndexOutOfRange },
				{ "ESBZMetaRequestResult::InvalidAccelByteOperationForClient", (int64)ESBZMetaRequestResult::InvalidAccelByteOperationForClient },
				{ "ESBZMetaRequestResult::SkillNotProgressed", (int64)ESBZMetaRequestResult::SkillNotProgressed },
				{ "ESBZMetaRequestResult::SkillAlreadyResearched", (int64)ESBZMetaRequestResult::SkillAlreadyResearched },
				{ "ESBZMetaRequestResult::SkillEquipped", (int64)ESBZMetaRequestResult::SkillEquipped },
				{ "ESBZMetaRequestResult::SkillNotEquipped", (int64)ESBZMetaRequestResult::SkillNotEquipped },
				{ "ESBZMetaRequestResult::MissingLoadoutItem", (int64)ESBZMetaRequestResult::MissingLoadoutItem },
				{ "ESBZMetaRequestResult::MissingStoreItem", (int64)ESBZMetaRequestResult::MissingStoreItem },
				{ "ESBZMetaRequestResult::InvalidItemTypeInStoreRequest", (int64)ESBZMetaRequestResult::InvalidItemTypeInStoreRequest },
				{ "ESBZMetaRequestResult::FailedToAddWeaponToInventorySlot", (int64)ESBZMetaRequestResult::FailedToAddWeaponToInventorySlot },
				{ "ESBZMetaRequestResult::InvalidGameConfiguration", (int64)ESBZMetaRequestResult::InvalidGameConfiguration },
				{ "ESBZMetaRequestResult::FailedToDeleteUserAccount", (int64)ESBZMetaRequestResult::FailedToDeleteUserAccount },
				{ "ESBZMetaRequestResult::MissingEntitlementToConsume", (int64)ESBZMetaRequestResult::MissingEntitlementToConsume },
				{ "ESBZMetaRequestResult::ApplyCosmeticsFailed", (int64)ESBZMetaRequestResult::ApplyCosmeticsFailed },
				{ "ESBZMetaRequestResult::UpgradeSaveDataFailed", (int64)ESBZMetaRequestResult::UpgradeSaveDataFailed },
				{ "ESBZMetaRequestResult::InvalidState", (int64)ESBZMetaRequestResult::InvalidState },
				{ "ESBZMetaRequestResult::FailedToPurchaseRealMoneyItem", (int64)ESBZMetaRequestResult::FailedToPurchaseRealMoneyItem },
				{ "ESBZMetaRequestResult::FailedToQueryAchievements", (int64)ESBZMetaRequestResult::FailedToQueryAchievements },
				{ "ESBZMetaRequestResult::InventoryItemCannotBeDiscarded", (int64)ESBZMetaRequestResult::InventoryItemCannotBeDiscarded },
				{ "ESBZMetaRequestResult::FailedToGetReceipts", (int64)ESBZMetaRequestResult::FailedToGetReceipts },
				{ "ESBZMetaRequestResult::HaveNotReceivedInitialRewards", (int64)ESBZMetaRequestResult::HaveNotReceivedInitialRewards },
				{ "ESBZMetaRequestResult::MissingEnitlementPermission", (int64)ESBZMetaRequestResult::MissingEnitlementPermission },
				{ "ESBZMetaRequestResult::VendorItemLocked", (int64)ESBZMetaRequestResult::VendorItemLocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccelByteBackendFailure.Name", "ESBZMetaRequestResult::AccelByteBackendFailure" },
				{ "AccelByteBuildInfoError.Name", "ESBZMetaRequestResult::AccelByteBuildInfoError" },
				{ "AccelByteCampaignError.Name", "ESBZMetaRequestResult::AccelByteCampaignError" },
				{ "AccelByteCategoryError.Name", "ESBZMetaRequestResult::AccelByteCategoryError" },
				{ "AccelByteCloudSaveError.Name", "ESBZMetaRequestResult::AccelByteCloudSaveError" },
				{ "AccelByteCurrencyError.Name", "ESBZMetaRequestResult::AccelByteCurrencyError" },
				{ "AccelByteDedicatedServerConfigNotFound.Name", "ESBZMetaRequestResult::AccelByteDedicatedServerConfigNotFound" },
				{ "AccelByteDedicatedServerNotFound.Name", "ESBZMetaRequestResult::AccelByteDedicatedServerNotFound" },
				{ "AccelByteDsRegistrationConflict.Name", "ESBZMetaRequestResult::AccelByteDsRegistrationConflict" },
				{ "AccelByteEntitlementError.Name", "ESBZMetaRequestResult::AccelByteEntitlementError" },
				{ "AccelByteFailedToSyncDLC.Name", "ESBZMetaRequestResult::AccelByteFailedToSyncDLC" },
				{ "AccelByteFavoriteError.Name", "ESBZMetaRequestResult::AccelByteFavoriteError" },
				{ "AccelByteHttpClientRequestError.Name", "ESBZMetaRequestResult::AccelByteHttpClientRequestError" },
				{ "AccelByteHttpServerError.Name", "ESBZMetaRequestResult::AccelByteHttpServerError" },
				{ "AccelByteInsufficientFunds.Name", "ESBZMetaRequestResult::AccelByteInsufficientFunds" },
				{ "AccelByteInvalidOrder.Name", "ESBZMetaRequestResult::AccelByteInvalidOrder" },
				{ "AccelByteInvalidRequest.Name", "ESBZMetaRequestResult::AccelByteInvalidRequest" },
				{ "AccelByteInvalidResponse.Name", "ESBZMetaRequestResult::AccelByteInvalidResponse" },
				{ "AccelByteIsNotLoggedIn.Name", "ESBZMetaRequestResult::AccelByteIsNotLoggedIn" },
				{ "AccelByteJsonDeserializationFailed.Name", "ESBZMetaRequestResult::AccelByteJsonDeserializationFailed" },
				{ "AccelByteLeaderboardError.Name", "ESBZMetaRequestResult::AccelByteLeaderboardError" },
				{ "AccelByteLobbyNotConnectedError.Name", "ESBZMetaRequestResult::AccelByteLobbyNotConnectedError" },
				{ "AccelByteLobbySetupChallengesError.Name", "ESBZMetaRequestResult::AccelByteLobbySetupChallengesError" },
				{ "AccelByteNamespaceError.Name", "ESBZMetaRequestResult::AccelByteNamespaceError" },
				{ "AccelByteNetworkError.Name", "ESBZMetaRequestResult::AccelByteNetworkError" },
				{ "AccelByteOffenseError.Name", "ESBZMetaRequestResult::AccelByteOffenseError" },
				{ "AccelByteOrderError.Name", "ESBZMetaRequestResult::AccelByteOrderError" },
				{ "AccelBytePartyStorageError.Name", "ESBZMetaRequestResult::AccelBytePartyStorageError" },
				{ "AccelBytePaymentError.Name", "ESBZMetaRequestResult::AccelBytePaymentError" },
				{ "AccelBytePlatformError.Name", "ESBZMetaRequestResult::AccelBytePlatformError" },
				{ "AccelBytePlayerRecordNotFoundException.Name", "ESBZMetaRequestResult::AccelBytePlayerRecordNotFoundException" },
				{ "AccelByteProfileError.Name", "ESBZMetaRequestResult::AccelByteProfileError" },
				{ "AccelByteSavedDataAfterResetFailed.Name", "ESBZMetaRequestResult::AccelByteSavedDataAfterResetFailed" },
				{ "AccelByteSavedDataAfterResetOK.Name", "ESBZMetaRequestResult::AccelByteSavedDataAfterResetOK" },
				{ "AccelByteSocialError.Name", "ESBZMetaRequestResult::AccelByteSocialError" },
				{ "AccelByteStatisticError.Name", "ESBZMetaRequestResult::AccelByteStatisticError" },
				{ "AccelByteUnauthorized.Name", "ESBZMetaRequestResult::AccelByteUnauthorized" },
				{ "AccelByteUnknownError.Name", "ESBZMetaRequestResult::AccelByteUnknownError" },
				{ "AccelByteWalletError.Name", "ESBZMetaRequestResult::AccelByteWalletError" },
				{ "ApplyCosmeticsFailed.Name", "ESBZMetaRequestResult::ApplyCosmeticsFailed" },
				{ "BlueprintType", "true" },
				{ "FailedToAddWeaponToInventorySlot.Name", "ESBZMetaRequestResult::FailedToAddWeaponToInventorySlot" },
				{ "FailedToDeleteUserAccount.Name", "ESBZMetaRequestResult::FailedToDeleteUserAccount" },
				{ "FailedToGetReceipts.Name", "ESBZMetaRequestResult::FailedToGetReceipts" },
				{ "FailedToPurchaseRealMoneyItem.Name", "ESBZMetaRequestResult::FailedToPurchaseRealMoneyItem" },
				{ "FailedToQueryAchievements.Name", "ESBZMetaRequestResult::FailedToQueryAchievements" },
				{ "HaveNotReceivedInitialRewards.Name", "ESBZMetaRequestResult::HaveNotReceivedInitialRewards" },
				{ "InvalidAccelByteOperationForClient.Name", "ESBZMetaRequestResult::InvalidAccelByteOperationForClient" },
				{ "InvalidGameConfiguration.Name", "ESBZMetaRequestResult::InvalidGameConfiguration" },
				{ "InvalidItemTypeInStoreRequest.Name", "ESBZMetaRequestResult::InvalidItemTypeInStoreRequest" },
				{ "InvalidState.Name", "ESBZMetaRequestResult::InvalidState" },
				{ "InventoryItemCannotBeDiscarded.Name", "ESBZMetaRequestResult::InventoryItemCannotBeDiscarded" },
				{ "LoadoutIndexOutOfRange.Name", "ESBZMetaRequestResult::LoadoutIndexOutOfRange" },
				{ "MissingEnitlementPermission.Name", "ESBZMetaRequestResult::MissingEnitlementPermission" },
				{ "MissingEntitlementToConsume.Name", "ESBZMetaRequestResult::MissingEntitlementToConsume" },
				{ "MissingLoadoutItem.Name", "ESBZMetaRequestResult::MissingLoadoutItem" },
				{ "MissingStoreItem.Name", "ESBZMetaRequestResult::MissingStoreItem" },
				{ "ModuleRelativePath", "Public/ESBZMetaRequestResult.h" },
				{ "NoAvailableInventorySlot.Name", "ESBZMetaRequestResult::NoAvailableInventorySlot" },
				{ "Ok.Name", "ESBZMetaRequestResult::Ok" },
				{ "SkillAlreadyResearched.Name", "ESBZMetaRequestResult::SkillAlreadyResearched" },
				{ "SkillEquipped.Name", "ESBZMetaRequestResult::SkillEquipped" },
				{ "SkillNotEquipped.Name", "ESBZMetaRequestResult::SkillNotEquipped" },
				{ "SkillNotProgressed.Name", "ESBZMetaRequestResult::SkillNotProgressed" },
				{ "UpgradeSaveDataFailed.Name", "ESBZMetaRequestResult::UpgradeSaveDataFailed" },
				{ "VendorItemLocked.Name", "ESBZMetaRequestResult::VendorItemLocked" },
				{ "WeaponSlotIndexOutOfRange.Name", "ESBZMetaRequestResult::WeaponSlotIndexOutOfRange" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMetaRequestResult",
				"ESBZMetaRequestResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
