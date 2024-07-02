// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCheatManagerMainMenu.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCheatManagerMainMenu() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManagerMainMenu_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManagerMainMenu();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManagerBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSprayCanData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execAddOwnedDLCAndPopulateEntitlementDisabledArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DLCNameCommaList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOwnedDLCAndPopulateEntitlementDisabledArray(Z_Param_DLCNameCommaList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execAddUniquePartToWeaponConfig)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponPartName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUniquePartToWeaponConfig(Z_Param_SlotIndex,Z_Param_SlotName,Z_Param_WeaponPartName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execApplyAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAsset(Z_Param_ItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execApplyWeaponDummyCharm)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWeaponDummyCharm(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execApplyWeaponDummyPattern)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWeaponDummyPattern(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuyItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyItem(Z_Param_ItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuyItemAccelByteRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemSku);
		P_GET_PROPERTY(FIntProperty,Z_Param_Price);
		P_GET_PROPERTY(FIntProperty,Z_Param_DiscountedPrice);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteCurrencyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyItemAccelByteRequest(Z_Param_ItemId,Z_Param_ItemSku,Z_Param_Price,Z_Param_DiscountedPrice,Z_Param_Quantity,Z_Param_AccelByteCurrencyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuyLoadoutSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyLoadoutSlot(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuyPrimaryWeapon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyPrimaryWeapon(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuyPrimaryWeaponConfigSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyPrimaryWeaponConfigSlot(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuySecondaryWeapon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuySecondaryWeapon(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execBuySecondaryWeaponConfigSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuySecondaryWeaponConfigSlot(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execCanEquipDummyPatternToWeapon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CanEquipDummyPatternToWeapon(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execClearAllAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllAchievements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execClearPreferredCharacters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPreferredCharacters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execConsumeUserEntitlement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeUserEntitlement(Z_Param_EntitlementId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDebugAllItemsResearched)
	{
		P_GET_UBOOL(Z_Param_bIsDebugAllItemsResearched);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAllItemsResearched(Z_Param_bIsDebugAllItemsResearched);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDiscardItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardItem(Z_Param_EntitlementId,Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAllGloveInventorySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllGloveInventorySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAllItemProgressionLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllItemProgressionLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAllMaskInventorySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllMaskInventorySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAllSuitInventorySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllSuitInventorySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAllVendorItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllVendorItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAllWeaponPresets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllWeaponPresets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAttachedWeaponPartsForAllInventorySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAttachedWeaponPartsForAllInventorySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpAvavilableWeaponParts)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAvavilableWeaponParts(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpBaseWeaponProgressionInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpBaseWeaponProgressionInfo(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpBaseWeaponProgressionLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpBaseWeaponProgressionLevel(Z_Param_ItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpBestLevelTimes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpBestLevelTimes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpCharacterInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpCharacterInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpCosmeticsInventoryItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpCosmeticsInventoryItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpCosmeticsInventoryItemsForWeaponPatternSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpCosmeticsInventoryItemsForWeaponPatternSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpCurrentRenownLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpCurrentRenownLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpDailyChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpDailyChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpDLCRewards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpDLCRewards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpEntitlementSkuFromDLCButNotOwnedArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpEntitlementSkuFromDLCButNotOwnedArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpGetProgressInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpGetProgressInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpInventoryItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpInventoryItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpIsQuickPlayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpIsQuickPlayEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpItemsProgressions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpItemsProgressions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpLoadoutName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpLoadoutName(Z_Param_LoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpMaskOfTheWeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpMaskOfTheWeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpNextResetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpNextResetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpOwnedHeists)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpOwnedHeists();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpPlayerSkillPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpPlayerSkillPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpPlayerSkills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpPlayerSkills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpPreferredCharacters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpPreferredCharacters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpRealMoneyStoreItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpRealMoneyStoreItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpReceipts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpReceipts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpRecommendedChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpRecommendedChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpSelectablePlayerCharacters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpSelectablePlayerCharacters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpSteamItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpSteamItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpWeaponSlotToWeaponPartMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpWeaponSlotToWeaponPartMap(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execDumpWeaponWeaponPartProgressionArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemIdSku);
		P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpWeaponWeaponPartProgressionArray(Z_Param_ItemIdSku,Z_Param_EntitlementId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execEmptyPrimaryWeaponLoadout)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_LoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptyPrimaryWeaponLoadout(Z_Param_LoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execEmptySecondaryWeaponLoadout)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_LoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptySecondaryWeaponLoadout(Z_Param_LoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execGamepadOpenInGameCheatMenu)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GamepadOpenInGameCheatMenu(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execGetCosmeticsForWeapon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCosmeticsForWeapon(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execGetPartyCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPartyCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execGetUserEntitlementsForAllItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEntitlementsForAllItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execGetWeaponProgressionForBarrelSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponProgressionForBarrelSlot(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execJoinPartyByCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinPartyByCode(Z_Param_Code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execLoadWeaponExperienceToLevelTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadWeaponExperienceToLevelTable(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execLockCharacterForTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockCharacterForTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execPurchaseItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchaseItem(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execPurchaseRealMoneyItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchaseRealMoneyItems(Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execQueryAchivements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryAchivements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execRemoveAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execRemoveCharacterFromSelectedSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCharacterFromSelectedSlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execRemoveWeaponDummyCharm)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWeaponDummyCharm(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execRemoveWeaponDummyPattern)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponEntitlementIdString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWeaponDummyPattern(Z_Param_WeaponEntitlementIdString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execRemoveWeaponPartConfig)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWeaponPartConfig(Z_Param_SlotIndex,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execResetPriceProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPriceProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSelectCharacterIntoFirstAvailableSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectedCharacterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectCharacterIntoFirstAvailableSlot(Z_Param_SelectedCharacterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSelectCharacterIntoSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectedCharacterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectCharacterIntoSlot(Z_Param_SelectedCharacterIndex,Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSendLobbyMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendLobbyMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSendPartyMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPartyMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetActiveLoadoutIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveLoadoutIndex(Z_Param_ActiveLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetCheatAllowAttachAllWeaponParts)
	{
		P_GET_UBOOL(Z_Param_bIsSetCheatAllowAttachAllWeaponParts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheatAllowAttachAllWeaponParts(Z_Param_bIsSetCheatAllowAttachAllWeaponParts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetEquippiedMaskInventoryIndex)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ConfigSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippiedMaskInventoryIndex(Z_Param_ConfigSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetEquippiedSuitInventoryIndex)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ConfigSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippiedSuitInventoryIndex(Z_Param_ConfigSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetLoadoutName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_LoadoutName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutName(Z_Param_LoadoutIndex,Z_Param_LoadoutName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetPrimaryWeaponLoadout)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_LoadoutIndex);
		P_GET_PROPERTY(FUInt32Property,Z_Param_ConfigSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimaryWeaponLoadout(Z_Param_LoadoutIndex,Z_Param_ConfigSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSetSecondaryWeaponLoadout)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_LoadoutIndex);
		P_GET_PROPERTY(FUInt32Property,Z_Param_ConfigSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSecondaryWeaponLoadout(Z_Param_LoadoutIndex,Z_Param_ConfigSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSimulateForeground)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateForeground();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execSyncDLC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncDLC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execUnlockCharacterForTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockCharacterForTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execUseDefaultMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseDefaultMask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execUseDefaultSuit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseDefaultSuit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerMainMenu::execWriteAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteAchievement(Z_Param_AchievementId);
		P_NATIVE_END;
	}
	void USBZCheatManagerMainMenu::StaticRegisterNativesUSBZCheatManagerMainMenu()
	{
		UClass* Class = USBZCheatManagerMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOwnedDLCAndPopulateEntitlementDisabledArray", &USBZCheatManagerMainMenu::execAddOwnedDLCAndPopulateEntitlementDisabledArray },
			{ "AddUniquePartToWeaponConfig", &USBZCheatManagerMainMenu::execAddUniquePartToWeaponConfig },
			{ "ApplyAsset", &USBZCheatManagerMainMenu::execApplyAsset },
			{ "ApplyWeaponDummyCharm", &USBZCheatManagerMainMenu::execApplyWeaponDummyCharm },
			{ "ApplyWeaponDummyPattern", &USBZCheatManagerMainMenu::execApplyWeaponDummyPattern },
			{ "BuyItem", &USBZCheatManagerMainMenu::execBuyItem },
			{ "BuyItemAccelByteRequest", &USBZCheatManagerMainMenu::execBuyItemAccelByteRequest },
			{ "BuyLoadoutSlot", &USBZCheatManagerMainMenu::execBuyLoadoutSlot },
			{ "BuyPrimaryWeapon", &USBZCheatManagerMainMenu::execBuyPrimaryWeapon },
			{ "BuyPrimaryWeaponConfigSlot", &USBZCheatManagerMainMenu::execBuyPrimaryWeaponConfigSlot },
			{ "BuySecondaryWeapon", &USBZCheatManagerMainMenu::execBuySecondaryWeapon },
			{ "BuySecondaryWeaponConfigSlot", &USBZCheatManagerMainMenu::execBuySecondaryWeaponConfigSlot },
			{ "CanEquipDummyPatternToWeapon", &USBZCheatManagerMainMenu::execCanEquipDummyPatternToWeapon },
			{ "ClearAllAchievements", &USBZCheatManagerMainMenu::execClearAllAchievements },
			{ "ClearPreferredCharacters", &USBZCheatManagerMainMenu::execClearPreferredCharacters },
			{ "ConsumeUserEntitlement", &USBZCheatManagerMainMenu::execConsumeUserEntitlement },
			{ "DebugAllItemsResearched", &USBZCheatManagerMainMenu::execDebugAllItemsResearched },
			{ "DiscardItem", &USBZCheatManagerMainMenu::execDiscardItem },
			{ "DumpAllGloveInventorySlots", &USBZCheatManagerMainMenu::execDumpAllGloveInventorySlots },
			{ "DumpAllItemProgressionLevels", &USBZCheatManagerMainMenu::execDumpAllItemProgressionLevels },
			{ "DumpAllMaskInventorySlots", &USBZCheatManagerMainMenu::execDumpAllMaskInventorySlots },
			{ "DumpAllSuitInventorySlots", &USBZCheatManagerMainMenu::execDumpAllSuitInventorySlots },
			{ "DumpAllVendorItems", &USBZCheatManagerMainMenu::execDumpAllVendorItems },
			{ "DumpAllWeaponPresets", &USBZCheatManagerMainMenu::execDumpAllWeaponPresets },
			{ "DumpAttachedWeaponPartsForAllInventorySlots", &USBZCheatManagerMainMenu::execDumpAttachedWeaponPartsForAllInventorySlots },
			{ "DumpAvavilableWeaponParts", &USBZCheatManagerMainMenu::execDumpAvavilableWeaponParts },
			{ "DumpBaseWeaponProgressionInfo", &USBZCheatManagerMainMenu::execDumpBaseWeaponProgressionInfo },
			{ "DumpBaseWeaponProgressionLevel", &USBZCheatManagerMainMenu::execDumpBaseWeaponProgressionLevel },
			{ "DumpBestLevelTimes", &USBZCheatManagerMainMenu::execDumpBestLevelTimes },
			{ "DumpCharacterInventory", &USBZCheatManagerMainMenu::execDumpCharacterInventory },
			{ "DumpCosmeticsInventoryItems", &USBZCheatManagerMainMenu::execDumpCosmeticsInventoryItems },
			{ "DumpCosmeticsInventoryItemsForWeaponPatternSlot", &USBZCheatManagerMainMenu::execDumpCosmeticsInventoryItemsForWeaponPatternSlot },
			{ "DumpCurrentRenownLevel", &USBZCheatManagerMainMenu::execDumpCurrentRenownLevel },
			{ "DumpDailyChallenges", &USBZCheatManagerMainMenu::execDumpDailyChallenges },
			{ "DumpDLCRewards", &USBZCheatManagerMainMenu::execDumpDLCRewards },
			{ "DumpEntitlementSkuFromDLCButNotOwnedArray", &USBZCheatManagerMainMenu::execDumpEntitlementSkuFromDLCButNotOwnedArray },
			{ "DumpGetProgressInfo", &USBZCheatManagerMainMenu::execDumpGetProgressInfo },
			{ "DumpInventoryItems", &USBZCheatManagerMainMenu::execDumpInventoryItems },
			{ "DumpIsQuickPlayEnabled", &USBZCheatManagerMainMenu::execDumpIsQuickPlayEnabled },
			{ "DumpItemsProgressions", &USBZCheatManagerMainMenu::execDumpItemsProgressions },
			{ "DumpLoadoutName", &USBZCheatManagerMainMenu::execDumpLoadoutName },
			{ "DumpMaskOfTheWeek", &USBZCheatManagerMainMenu::execDumpMaskOfTheWeek },
			{ "DumpNextResetTime", &USBZCheatManagerMainMenu::execDumpNextResetTime },
			{ "DumpOwnedHeists", &USBZCheatManagerMainMenu::execDumpOwnedHeists },
			{ "DumpPlayerSkillPoints", &USBZCheatManagerMainMenu::execDumpPlayerSkillPoints },
			{ "DumpPlayerSkills", &USBZCheatManagerMainMenu::execDumpPlayerSkills },
			{ "DumpPreferredCharacters", &USBZCheatManagerMainMenu::execDumpPreferredCharacters },
			{ "DumpRealMoneyStoreItems", &USBZCheatManagerMainMenu::execDumpRealMoneyStoreItems },
			{ "DumpReceipts", &USBZCheatManagerMainMenu::execDumpReceipts },
			{ "DumpRecommendedChallenges", &USBZCheatManagerMainMenu::execDumpRecommendedChallenges },
			{ "DumpSelectablePlayerCharacters", &USBZCheatManagerMainMenu::execDumpSelectablePlayerCharacters },
			{ "DumpSteamItems", &USBZCheatManagerMainMenu::execDumpSteamItems },
			{ "DumpWeaponSlotToWeaponPartMap", &USBZCheatManagerMainMenu::execDumpWeaponSlotToWeaponPartMap },
			{ "DumpWeaponWeaponPartProgressionArray", &USBZCheatManagerMainMenu::execDumpWeaponWeaponPartProgressionArray },
			{ "EmptyPrimaryWeaponLoadout", &USBZCheatManagerMainMenu::execEmptyPrimaryWeaponLoadout },
			{ "EmptySecondaryWeaponLoadout", &USBZCheatManagerMainMenu::execEmptySecondaryWeaponLoadout },
			{ "GamepadOpenInGameCheatMenu", &USBZCheatManagerMainMenu::execGamepadOpenInGameCheatMenu },
			{ "GetCosmeticsForWeapon", &USBZCheatManagerMainMenu::execGetCosmeticsForWeapon },
			{ "GetPartyCode", &USBZCheatManagerMainMenu::execGetPartyCode },
			{ "GetUserEntitlementsForAllItems", &USBZCheatManagerMainMenu::execGetUserEntitlementsForAllItems },
			{ "GetWeaponProgressionForBarrelSlot", &USBZCheatManagerMainMenu::execGetWeaponProgressionForBarrelSlot },
			{ "JoinPartyByCode", &USBZCheatManagerMainMenu::execJoinPartyByCode },
			{ "LoadWeaponExperienceToLevelTable", &USBZCheatManagerMainMenu::execLoadWeaponExperienceToLevelTable },
			{ "LockCharacterForTutorial", &USBZCheatManagerMainMenu::execLockCharacterForTutorial },
			{ "PurchaseItem", &USBZCheatManagerMainMenu::execPurchaseItem },
			{ "PurchaseRealMoneyItems", &USBZCheatManagerMainMenu::execPurchaseRealMoneyItems },
			{ "QueryAchivements", &USBZCheatManagerMainMenu::execQueryAchivements },
			{ "RemoveAsset", &USBZCheatManagerMainMenu::execRemoveAsset },
			{ "RemoveCharacterFromSelectedSlot", &USBZCheatManagerMainMenu::execRemoveCharacterFromSelectedSlot },
			{ "RemoveWeaponDummyCharm", &USBZCheatManagerMainMenu::execRemoveWeaponDummyCharm },
			{ "RemoveWeaponDummyPattern", &USBZCheatManagerMainMenu::execRemoveWeaponDummyPattern },
			{ "RemoveWeaponPartConfig", &USBZCheatManagerMainMenu::execRemoveWeaponPartConfig },
			{ "ResetPriceProgression", &USBZCheatManagerMainMenu::execResetPriceProgression },
			{ "SelectCharacterIntoFirstAvailableSlot", &USBZCheatManagerMainMenu::execSelectCharacterIntoFirstAvailableSlot },
			{ "SelectCharacterIntoSlot", &USBZCheatManagerMainMenu::execSelectCharacterIntoSlot },
			{ "SendLobbyMessage", &USBZCheatManagerMainMenu::execSendLobbyMessage },
			{ "SendPartyMessage", &USBZCheatManagerMainMenu::execSendPartyMessage },
			{ "SetActiveLoadoutIndex", &USBZCheatManagerMainMenu::execSetActiveLoadoutIndex },
			{ "SetCheatAllowAttachAllWeaponParts", &USBZCheatManagerMainMenu::execSetCheatAllowAttachAllWeaponParts },
			{ "SetEquippiedMaskInventoryIndex", &USBZCheatManagerMainMenu::execSetEquippiedMaskInventoryIndex },
			{ "SetEquippiedSuitInventoryIndex", &USBZCheatManagerMainMenu::execSetEquippiedSuitInventoryIndex },
			{ "SetLoadoutName", &USBZCheatManagerMainMenu::execSetLoadoutName },
			{ "SetPrimaryWeaponLoadout", &USBZCheatManagerMainMenu::execSetPrimaryWeaponLoadout },
			{ "SetSecondaryWeaponLoadout", &USBZCheatManagerMainMenu::execSetSecondaryWeaponLoadout },
			{ "SimulateForeground", &USBZCheatManagerMainMenu::execSimulateForeground },
			{ "SyncDLC", &USBZCheatManagerMainMenu::execSyncDLC },
			{ "UnlockCharacterForTutorial", &USBZCheatManagerMainMenu::execUnlockCharacterForTutorial },
			{ "UseDefaultMask", &USBZCheatManagerMainMenu::execUseDefaultMask },
			{ "UseDefaultSuit", &USBZCheatManagerMainMenu::execUseDefaultSuit },
			{ "WriteAchievement", &USBZCheatManagerMainMenu::execWriteAchievement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics
	{
		struct SBZCheatManagerMainMenu_eventAddOwnedDLCAndPopulateEntitlementDisabledArray_Parms
		{
			FString DLCNameCommaList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCNameCommaList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLCNameCommaList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::NewProp_DLCNameCommaList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::NewProp_DLCNameCommaList = { "DLCNameCommaList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventAddOwnedDLCAndPopulateEntitlementDisabledArray_Parms, DLCNameCommaList), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::NewProp_DLCNameCommaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::NewProp_DLCNameCommaList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::NewProp_DLCNameCommaList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "AddOwnedDLCAndPopulateEntitlementDisabledArray", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventAddOwnedDLCAndPopulateEntitlementDisabledArray_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics
	{
		struct SBZCheatManagerMainMenu_eventAddUniquePartToWeaponConfig_Parms
		{
			uint32 SlotIndex;
			FString SlotName;
			FString WeaponPartName;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponPartName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventAddUniquePartToWeaponConfig_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventAddUniquePartToWeaponConfig_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_WeaponPartName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_WeaponPartName = { "WeaponPartName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventAddUniquePartToWeaponConfig_Parms, WeaponPartName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_WeaponPartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_WeaponPartName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::NewProp_WeaponPartName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "AddUniquePartToWeaponConfig", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventAddUniquePartToWeaponConfig_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics
	{
		struct SBZCheatManagerMainMenu_eventApplyAsset_Parms
		{
			FString ItemSku;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::NewProp_ItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventApplyAsset_Parms, ItemSku), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::NewProp_ItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::NewProp_ItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ApplyAsset", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventApplyAsset_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics
	{
		struct SBZCheatManagerMainMenu_eventApplyWeaponDummyCharm_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventApplyWeaponDummyCharm_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ApplyWeaponDummyCharm", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventApplyWeaponDummyCharm_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics
	{
		struct SBZCheatManagerMainMenu_eventApplyWeaponDummyPattern_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventApplyWeaponDummyPattern_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ApplyWeaponDummyPattern", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventApplyWeaponDummyPattern_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuyItem_Parms
		{
			FString ItemSku;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::NewProp_ItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItem_Parms, ItemSku), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::NewProp_ItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::NewProp_ItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuyItem", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuyItem_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms
		{
			FString ItemId;
			FString ItemSku;
			int32 Price;
			int32 DiscountedPrice;
			int32 Quantity;
			FString AccelByteCurrencyCode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountedPrice;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteCurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteCurrencyCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms, ItemSku), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemSku_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms, Price), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_DiscountedPrice = { "DiscountedPrice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms, DiscountedPrice), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_AccelByteCurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_AccelByteCurrencyCode = { "AccelByteCurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms, AccelByteCurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_AccelByteCurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_AccelByteCurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_ItemSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_DiscountedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::NewProp_AccelByteCurrencyCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuyItemAccelByteRequest", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuyItemAccelByteRequest_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuyLoadoutSlot_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyLoadoutSlot_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuyLoadoutSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuyLoadoutSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuyPrimaryWeapon_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyPrimaryWeapon_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuyPrimaryWeapon", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuyPrimaryWeapon_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuyPrimaryWeaponConfigSlot_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuyPrimaryWeaponConfigSlot_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuyPrimaryWeaponConfigSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuyPrimaryWeaponConfigSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuySecondaryWeapon_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuySecondaryWeapon_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuySecondaryWeapon", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuySecondaryWeapon_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventBuySecondaryWeaponConfigSlot_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventBuySecondaryWeaponConfigSlot_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "BuySecondaryWeaponConfigSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventBuySecondaryWeaponConfigSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics
	{
		struct SBZCheatManagerMainMenu_eventCanEquipDummyPatternToWeapon_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventCanEquipDummyPatternToWeapon_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "CanEquipDummyPatternToWeapon", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventCanEquipDummyPatternToWeapon_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ClearAllAchievements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ClearPreferredCharacters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics
	{
		struct SBZCheatManagerMainMenu_eventConsumeUserEntitlement_Parms
		{
			FString EntitlementId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventConsumeUserEntitlement_Parms, EntitlementId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::NewProp_EntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::NewProp_EntitlementId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::NewProp_EntitlementId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ConsumeUserEntitlement", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventConsumeUserEntitlement_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics
	{
		struct SBZCheatManagerMainMenu_eventDebugAllItemsResearched_Parms
		{
			bool bIsDebugAllItemsResearched;
		};
		static void NewProp_bIsDebugAllItemsResearched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugAllItemsResearched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::NewProp_bIsDebugAllItemsResearched_SetBit(void* Obj)
	{
		((SBZCheatManagerMainMenu_eventDebugAllItemsResearched_Parms*)Obj)->bIsDebugAllItemsResearched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::NewProp_bIsDebugAllItemsResearched = { "bIsDebugAllItemsResearched", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerMainMenu_eventDebugAllItemsResearched_Parms), &Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::NewProp_bIsDebugAllItemsResearched_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::NewProp_bIsDebugAllItemsResearched,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DebugAllItemsResearched", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDebugAllItemsResearched_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics
	{
		struct SBZCheatManagerMainMenu_eventDiscardItem_Parms
		{
			FString EntitlementId;
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDiscardItem_Parms, EntitlementId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_EntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_EntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDiscardItem_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_EntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DiscardItem", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDiscardItem_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAllGloveInventorySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAllItemProgressionLevels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAllMaskInventorySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAllSuitInventorySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAllVendorItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAllWeaponPresets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAttachedWeaponPartsForAllInventorySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics
	{
		struct SBZCheatManagerMainMenu_eventDumpAvavilableWeaponParts_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpAvavilableWeaponParts_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpAvavilableWeaponParts", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDumpAvavilableWeaponParts_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics
	{
		struct SBZCheatManagerMainMenu_eventDumpBaseWeaponProgressionInfo_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpBaseWeaponProgressionInfo_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpBaseWeaponProgressionInfo", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDumpBaseWeaponProgressionInfo_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics
	{
		struct SBZCheatManagerMainMenu_eventDumpBaseWeaponProgressionLevel_Parms
		{
			FString ItemSku;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::NewProp_ItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpBaseWeaponProgressionLevel_Parms, ItemSku), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::NewProp_ItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::NewProp_ItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpBaseWeaponProgressionLevel", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDumpBaseWeaponProgressionLevel_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpBestLevelTimes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpCharacterInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpCosmeticsInventoryItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpCosmeticsInventoryItemsForWeaponPatternSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpCurrentRenownLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpDailyChallenges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpDLCRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpEntitlementSkuFromDLCButNotOwnedArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpGetProgressInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpInventoryItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpIsQuickPlayEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpItemsProgressions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics
	{
		struct SBZCheatManagerMainMenu_eventDumpLoadoutName_Parms
		{
			int32 LoadoutIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpLoadoutName_Parms, LoadoutIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::NewProp_LoadoutIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::NewProp_LoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpLoadoutName", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDumpLoadoutName_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpMaskOfTheWeek", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpNextResetTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpOwnedHeists", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpPlayerSkillPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpPlayerSkills", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpPreferredCharacters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpRealMoneyStoreItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpReceipts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpRecommendedChallenges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpSelectablePlayerCharacters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpSteamItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics
	{
		struct SBZCheatManagerMainMenu_eventDumpWeaponSlotToWeaponPartMap_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpWeaponSlotToWeaponPartMap_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpWeaponSlotToWeaponPartMap", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDumpWeaponSlotToWeaponPartMap_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics
	{
		struct SBZCheatManagerMainMenu_eventDumpWeaponWeaponPartProgressionArray_Parms
		{
			FString ItemIdSku;
			FString EntitlementId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIdSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIdSku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_ItemIdSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_ItemIdSku = { "ItemIdSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpWeaponWeaponPartProgressionArray_Parms, ItemIdSku), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_ItemIdSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_ItemIdSku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventDumpWeaponWeaponPartProgressionArray_Parms, EntitlementId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_EntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_EntitlementId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_ItemIdSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::NewProp_EntitlementId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "DumpWeaponWeaponPartProgressionArray", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventDumpWeaponWeaponPartProgressionArray_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics
	{
		struct SBZCheatManagerMainMenu_eventEmptyPrimaryWeaponLoadout_Parms
		{
			uint32 LoadoutIndex;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventEmptyPrimaryWeaponLoadout_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::NewProp_LoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "EmptyPrimaryWeaponLoadout", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventEmptyPrimaryWeaponLoadout_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics
	{
		struct SBZCheatManagerMainMenu_eventEmptySecondaryWeaponLoadout_Parms
		{
			uint32 LoadoutIndex;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventEmptySecondaryWeaponLoadout_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::NewProp_LoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "EmptySecondaryWeaponLoadout", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventEmptySecondaryWeaponLoadout_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics
	{
		struct SBZCheatManagerMainMenu_eventGamepadOpenInGameCheatMenu_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventGamepadOpenInGameCheatMenu_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "GamepadOpenInGameCheatMenu", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventGamepadOpenInGameCheatMenu_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics
	{
		struct SBZCheatManagerMainMenu_eventGetCosmeticsForWeapon_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventGetCosmeticsForWeapon_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "GetCosmeticsForWeapon", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventGetCosmeticsForWeapon_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "GetPartyCode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "GetUserEntitlementsForAllItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventGetWeaponProgressionForBarrelSlot_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventGetWeaponProgressionForBarrelSlot_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "GetWeaponProgressionForBarrelSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventGetWeaponProgressionForBarrelSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics
	{
		struct SBZCheatManagerMainMenu_eventJoinPartyByCode_Parms
		{
			FString Code;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventJoinPartyByCode_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "JoinPartyByCode", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventJoinPartyByCode_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics
	{
		struct SBZCheatManagerMainMenu_eventLoadWeaponExperienceToLevelTable_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventLoadWeaponExperienceToLevelTable_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "LoadWeaponExperienceToLevelTable", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventLoadWeaponExperienceToLevelTable_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "LockCharacterForTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics
	{
		struct SBZCheatManagerMainMenu_eventPurchaseItem_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventPurchaseItem_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "PurchaseItem", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventPurchaseItem_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics
	{
		struct SBZCheatManagerMainMenu_eventPurchaseRealMoneyItems_Parms
		{
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventPurchaseRealMoneyItems_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "PurchaseRealMoneyItems", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventPurchaseRealMoneyItems_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "QueryAchivements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "RemoveAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventRemoveCharacterFromSelectedSlot_Parms
		{
			int32 SlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventRemoveCharacterFromSelectedSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "RemoveCharacterFromSelectedSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventRemoveCharacterFromSelectedSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics
	{
		struct SBZCheatManagerMainMenu_eventRemoveWeaponDummyCharm_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventRemoveWeaponDummyCharm_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "RemoveWeaponDummyCharm", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventRemoveWeaponDummyCharm_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics
	{
		struct SBZCheatManagerMainMenu_eventRemoveWeaponDummyPattern_Parms
		{
			FString WeaponEntitlementIdString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEntitlementIdString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponEntitlementIdString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString = { "WeaponEntitlementIdString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventRemoveWeaponDummyPattern_Parms, WeaponEntitlementIdString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::NewProp_WeaponEntitlementIdString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "RemoveWeaponDummyPattern", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventRemoveWeaponDummyPattern_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics
	{
		struct SBZCheatManagerMainMenu_eventRemoveWeaponPartConfig_Parms
		{
			uint32 SlotIndex;
			FString SlotName;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventRemoveWeaponPartConfig_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventRemoveWeaponPartConfig_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "RemoveWeaponPartConfig", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventRemoveWeaponPartConfig_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "ResetPriceProgression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventSelectCharacterIntoFirstAvailableSlot_Parms
		{
			int32 SelectedCharacterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedCharacterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::NewProp_SelectedCharacterIndex = { "SelectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSelectCharacterIntoFirstAvailableSlot_Parms, SelectedCharacterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::NewProp_SelectedCharacterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SelectCharacterIntoFirstAvailableSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSelectCharacterIntoFirstAvailableSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics
	{
		struct SBZCheatManagerMainMenu_eventSelectCharacterIntoSlot_Parms
		{
			int32 SelectedCharacterIndex;
			int32 SlotIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedCharacterIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::NewProp_SelectedCharacterIndex = { "SelectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSelectCharacterIntoSlot_Parms, SelectedCharacterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSelectCharacterIntoSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::NewProp_SelectedCharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SelectCharacterIntoSlot", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSelectCharacterIntoSlot_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics
	{
		struct SBZCheatManagerMainMenu_eventSendLobbyMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSendLobbyMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SendLobbyMessage", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSendLobbyMessage_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics
	{
		struct SBZCheatManagerMainMenu_eventSendPartyMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSendPartyMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SendPartyMessage", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSendPartyMessage_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetActiveLoadoutIndex_Parms
		{
			int32 ActiveLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::NewProp_ActiveLoadoutIndex = { "ActiveLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetActiveLoadoutIndex_Parms, ActiveLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::NewProp_ActiveLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetActiveLoadoutIndex", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetActiveLoadoutIndex_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetCheatAllowAttachAllWeaponParts_Parms
		{
			bool bIsSetCheatAllowAttachAllWeaponParts;
		};
		static void NewProp_bIsSetCheatAllowAttachAllWeaponParts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSetCheatAllowAttachAllWeaponParts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::NewProp_bIsSetCheatAllowAttachAllWeaponParts_SetBit(void* Obj)
	{
		((SBZCheatManagerMainMenu_eventSetCheatAllowAttachAllWeaponParts_Parms*)Obj)->bIsSetCheatAllowAttachAllWeaponParts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::NewProp_bIsSetCheatAllowAttachAllWeaponParts = { "bIsSetCheatAllowAttachAllWeaponParts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerMainMenu_eventSetCheatAllowAttachAllWeaponParts_Parms), &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::NewProp_bIsSetCheatAllowAttachAllWeaponParts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::NewProp_bIsSetCheatAllowAttachAllWeaponParts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetCheatAllowAttachAllWeaponParts", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetCheatAllowAttachAllWeaponParts_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetEquippiedMaskInventoryIndex_Parms
		{
			uint32 ConfigSlotIndex;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConfigSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::NewProp_ConfigSlotIndex = { "ConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetEquippiedMaskInventoryIndex_Parms, ConfigSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::NewProp_ConfigSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetEquippiedMaskInventoryIndex", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetEquippiedMaskInventoryIndex_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetEquippiedSuitInventoryIndex_Parms
		{
			uint32 ConfigSlotIndex;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConfigSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::NewProp_ConfigSlotIndex = { "ConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetEquippiedSuitInventoryIndex_Parms, ConfigSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::NewProp_ConfigSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetEquippiedSuitInventoryIndex", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetEquippiedSuitInventoryIndex_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetLoadoutName_Parms
		{
			int32 LoadoutIndex;
			FString LoadoutName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetLoadoutName_Parms, LoadoutIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutName = { "LoadoutName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetLoadoutName_Parms, LoadoutName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::NewProp_LoadoutName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetLoadoutName", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetLoadoutName_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetPrimaryWeaponLoadout_Parms
		{
			uint32 LoadoutIndex;
			uint32 ConfigSlotIndex;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConfigSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetPrimaryWeaponLoadout_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::NewProp_ConfigSlotIndex = { "ConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetPrimaryWeaponLoadout_Parms, ConfigSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::NewProp_ConfigSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetPrimaryWeaponLoadout", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetPrimaryWeaponLoadout_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics
	{
		struct SBZCheatManagerMainMenu_eventSetSecondaryWeaponLoadout_Parms
		{
			uint32 LoadoutIndex;
			uint32 ConfigSlotIndex;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConfigSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetSecondaryWeaponLoadout_Parms, LoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::NewProp_ConfigSlotIndex = { "ConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventSetSecondaryWeaponLoadout_Parms, ConfigSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::NewProp_ConfigSlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SetSecondaryWeaponLoadout", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventSetSecondaryWeaponLoadout_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SimulateForeground", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "SyncDLC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "UnlockCharacterForTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "UseDefaultMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "UseDefaultSuit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics
	{
		struct SBZCheatManagerMainMenu_eventWriteAchievement_Parms
		{
			FString AchievementId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::NewProp_AchievementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerMainMenu_eventWriteAchievement_Parms, AchievementId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::NewProp_AchievementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::NewProp_AchievementId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::NewProp_AchievementId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerMainMenu, nullptr, "WriteAchievement", nullptr, nullptr, sizeof(SBZCheatManagerMainMenu_eventWriteAchievement_Parms), Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCheatManagerMainMenu_NoRegister()
	{
		return USBZCheatManagerMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_USBZCheatManagerMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedMaskSprayCanData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedMaskSprayCanData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPartConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitPartConfigs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconTextureSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTextureSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IconTextureSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCheatManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_AddOwnedDLCAndPopulateEntitlementDisabledArray, "AddOwnedDLCAndPopulateEntitlementDisabledArray" }, // 182171114
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_AddUniquePartToWeaponConfig, "AddUniquePartToWeaponConfig" }, // 2706368812
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyAsset, "ApplyAsset" }, // 1986589783
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyCharm, "ApplyWeaponDummyCharm" }, // 3059754898
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ApplyWeaponDummyPattern, "ApplyWeaponDummyPattern" }, // 3328871077
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItem, "BuyItem" }, // 2481675588
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyItemAccelByteRequest, "BuyItemAccelByteRequest" }, // 629140524
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyLoadoutSlot, "BuyLoadoutSlot" }, // 85881783
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeapon, "BuyPrimaryWeapon" }, // 3289794258
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuyPrimaryWeaponConfigSlot, "BuyPrimaryWeaponConfigSlot" }, // 3392092840
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeapon, "BuySecondaryWeapon" }, // 3821640325
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_BuySecondaryWeaponConfigSlot, "BuySecondaryWeaponConfigSlot" }, // 2731140742
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_CanEquipDummyPatternToWeapon, "CanEquipDummyPatternToWeapon" }, // 2492201450
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearAllAchievements, "ClearAllAchievements" }, // 851750814
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ClearPreferredCharacters, "ClearPreferredCharacters" }, // 450966172
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ConsumeUserEntitlement, "ConsumeUserEntitlement" }, // 492085718
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DebugAllItemsResearched, "DebugAllItemsResearched" }, // 2780552582
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DiscardItem, "DiscardItem" }, // 2702436983
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllGloveInventorySlots, "DumpAllGloveInventorySlots" }, // 3638314528
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllItemProgressionLevels, "DumpAllItemProgressionLevels" }, // 3399012894
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllMaskInventorySlots, "DumpAllMaskInventorySlots" }, // 126084689
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllSuitInventorySlots, "DumpAllSuitInventorySlots" }, // 3587658597
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllVendorItems, "DumpAllVendorItems" }, // 310757738
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAllWeaponPresets, "DumpAllWeaponPresets" }, // 558570431
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAttachedWeaponPartsForAllInventorySlots, "DumpAttachedWeaponPartsForAllInventorySlots" }, // 218749601
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpAvavilableWeaponParts, "DumpAvavilableWeaponParts" }, // 1143922766
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionInfo, "DumpBaseWeaponProgressionInfo" }, // 4117041625
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBaseWeaponProgressionLevel, "DumpBaseWeaponProgressionLevel" }, // 2843054811
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpBestLevelTimes, "DumpBestLevelTimes" }, // 2683213873
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCharacterInventory, "DumpCharacterInventory" }, // 2706752089
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItems, "DumpCosmeticsInventoryItems" }, // 1595314150
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCosmeticsInventoryItemsForWeaponPatternSlot, "DumpCosmeticsInventoryItemsForWeaponPatternSlot" }, // 1336733165
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpCurrentRenownLevel, "DumpCurrentRenownLevel" }, // 2615555707
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDailyChallenges, "DumpDailyChallenges" }, // 2374015535
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpDLCRewards, "DumpDLCRewards" }, // 3846044673
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpEntitlementSkuFromDLCButNotOwnedArray, "DumpEntitlementSkuFromDLCButNotOwnedArray" }, // 4074967977
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpGetProgressInfo, "DumpGetProgressInfo" }, // 1730289988
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpInventoryItems, "DumpInventoryItems" }, // 1031957122
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpIsQuickPlayEnabled, "DumpIsQuickPlayEnabled" }, // 1004507981
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpItemsProgressions, "DumpItemsProgressions" }, // 17307125
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpLoadoutName, "DumpLoadoutName" }, // 842842759
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpMaskOfTheWeek, "DumpMaskOfTheWeek" }, // 1008181249
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpNextResetTime, "DumpNextResetTime" }, // 3290642910
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpOwnedHeists, "DumpOwnedHeists" }, // 1663129542
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkillPoints, "DumpPlayerSkillPoints" }, // 1130309837
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPlayerSkills, "DumpPlayerSkills" }, // 2906273354
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpPreferredCharacters, "DumpPreferredCharacters" }, // 1704219250
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRealMoneyStoreItems, "DumpRealMoneyStoreItems" }, // 3290182162
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpReceipts, "DumpReceipts" }, // 2861339319
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpRecommendedChallenges, "DumpRecommendedChallenges" }, // 673062583
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSelectablePlayerCharacters, "DumpSelectablePlayerCharacters" }, // 1286285575
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpSteamItems, "DumpSteamItems" }, // 758070275
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponSlotToWeaponPartMap, "DumpWeaponSlotToWeaponPartMap" }, // 3042296929
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_DumpWeaponWeaponPartProgressionArray, "DumpWeaponWeaponPartProgressionArray" }, // 1333714234
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptyPrimaryWeaponLoadout, "EmptyPrimaryWeaponLoadout" }, // 1515460532
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_EmptySecondaryWeaponLoadout, "EmptySecondaryWeaponLoadout" }, // 1592640020
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_GamepadOpenInGameCheatMenu, "GamepadOpenInGameCheatMenu" }, // 3929923498
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_GetCosmeticsForWeapon, "GetCosmeticsForWeapon" }, // 1312821017
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_GetPartyCode, "GetPartyCode" }, // 1929806268
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_GetUserEntitlementsForAllItems, "GetUserEntitlementsForAllItems" }, // 1944809404
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_GetWeaponProgressionForBarrelSlot, "GetWeaponProgressionForBarrelSlot" }, // 1772208209
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_JoinPartyByCode, "JoinPartyByCode" }, // 2910435853
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_LoadWeaponExperienceToLevelTable, "LoadWeaponExperienceToLevelTable" }, // 4210458089
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_LockCharacterForTutorial, "LockCharacterForTutorial" }, // 3763798862
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseItem, "PurchaseItem" }, // 4246581667
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_PurchaseRealMoneyItems, "PurchaseRealMoneyItems" }, // 1363716537
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_QueryAchivements, "QueryAchivements" }, // 2193204252
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveAsset, "RemoveAsset" }, // 3380661627
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveCharacterFromSelectedSlot, "RemoveCharacterFromSelectedSlot" }, // 119850225
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyCharm, "RemoveWeaponDummyCharm" }, // 2090464107
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponDummyPattern, "RemoveWeaponDummyPattern" }, // 1297148532
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_RemoveWeaponPartConfig, "RemoveWeaponPartConfig" }, // 1308632170
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_ResetPriceProgression, "ResetPriceProgression" }, // 3896257294
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoFirstAvailableSlot, "SelectCharacterIntoFirstAvailableSlot" }, // 3167610569
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SelectCharacterIntoSlot, "SelectCharacterIntoSlot" }, // 1835027967
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SendLobbyMessage, "SendLobbyMessage" }, // 2395915510
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SendPartyMessage, "SendPartyMessage" }, // 1536188034
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetActiveLoadoutIndex, "SetActiveLoadoutIndex" }, // 370312249
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetCheatAllowAttachAllWeaponParts, "SetCheatAllowAttachAllWeaponParts" }, // 3431373304
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedMaskInventoryIndex, "SetEquippiedMaskInventoryIndex" }, // 4098800899
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetEquippiedSuitInventoryIndex, "SetEquippiedSuitInventoryIndex" }, // 515049205
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetLoadoutName, "SetLoadoutName" }, // 948794058
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetPrimaryWeaponLoadout, "SetPrimaryWeaponLoadout" }, // 3175291041
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SetSecondaryWeaponLoadout, "SetSecondaryWeaponLoadout" }, // 2935333536
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SimulateForeground, "SimulateForeground" }, // 3104196760
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_SyncDLC, "SyncDLC" }, // 2588771882
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_UnlockCharacterForTutorial, "UnlockCharacterForTutorial" }, // 810682616
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultMask, "UseDefaultMask" }, // 2157135430
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_UseDefaultSuit, "UseDefaultSuit" }, // 739066085
		{ &Z_Construct_UFunction_USBZCheatManagerMainMenu_WriteAchievement, "WriteAchievement" }, // 2051282918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCheatManagerMainMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_MenuInputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_MenuInputComponent = { "MenuInputComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerMainMenu, MenuInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_MenuInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_MenuInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SelectedMaskSprayCanData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerMainMenu" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SelectedMaskSprayCanData = { "SelectedMaskSprayCanData", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SelectedMaskSprayCanData, USBZCheatManagerMainMenu), STRUCT_OFFSET(USBZCheatManagerMainMenu, SelectedMaskSprayCanData), Z_Construct_UClass_USBZSprayCanData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SelectedMaskSprayCanData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SelectedMaskSprayCanData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SuitPartConfigs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerMainMenu" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SuitPartConfigs = { "SuitPartConfigs", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SuitPartConfigs, USBZCheatManagerMainMenu), STRUCT_OFFSET(USBZCheatManagerMainMenu, SuitPartConfigs), Z_Construct_UClass_USBZSuitPartConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SuitPartConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SuitPartConfigs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet_ElementProp = { "IconTextureSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerMainMenu" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet = { "IconTextureSet", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerMainMenu, IconTextureSet), METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_MenuInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SelectedMaskSprayCanData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_SuitPartConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::NewProp_IconTextureSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCheatManagerMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::ClassParams = {
		&USBZCheatManagerMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCheatManagerMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCheatManagerMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCheatManagerMainMenu, 1108278991);
	template<> STARBREEZE_API UClass* StaticClass<USBZCheatManagerMainMenu>()
	{
		return USBZCheatManagerMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCheatManagerMainMenu(Z_Construct_UClass_USBZCheatManagerMainMenu, &USBZCheatManagerMainMenu::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCheatManagerMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCheatManagerMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
