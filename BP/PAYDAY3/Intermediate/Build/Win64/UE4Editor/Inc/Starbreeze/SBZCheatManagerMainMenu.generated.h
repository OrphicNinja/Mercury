// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef STARBREEZE_SBZCheatManagerMainMenu_generated_h
#error "SBZCheatManagerMainMenu.generated.h already included, missing '#pragma once' in SBZCheatManagerMainMenu.h"
#endif
#define STARBREEZE_SBZCheatManagerMainMenu_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOwnedDLCAndPopulateEntitlementDisabledArray); \
	DECLARE_FUNCTION(execAddUniquePartToWeaponConfig); \
	DECLARE_FUNCTION(execApplyAsset); \
	DECLARE_FUNCTION(execApplyWeaponDummyCharm); \
	DECLARE_FUNCTION(execApplyWeaponDummyPattern); \
	DECLARE_FUNCTION(execBuyItem); \
	DECLARE_FUNCTION(execBuyItemAccelByteRequest); \
	DECLARE_FUNCTION(execBuyLoadoutSlot); \
	DECLARE_FUNCTION(execBuyPrimaryWeapon); \
	DECLARE_FUNCTION(execBuyPrimaryWeaponConfigSlot); \
	DECLARE_FUNCTION(execBuySecondaryWeapon); \
	DECLARE_FUNCTION(execBuySecondaryWeaponConfigSlot); \
	DECLARE_FUNCTION(execCanEquipDummyPatternToWeapon); \
	DECLARE_FUNCTION(execClearAllAchievements); \
	DECLARE_FUNCTION(execClearPreferredCharacters); \
	DECLARE_FUNCTION(execConsumeUserEntitlement); \
	DECLARE_FUNCTION(execDebugAllItemsResearched); \
	DECLARE_FUNCTION(execDiscardItem); \
	DECLARE_FUNCTION(execDumpAllGloveInventorySlots); \
	DECLARE_FUNCTION(execDumpAllItemProgressionLevels); \
	DECLARE_FUNCTION(execDumpAllMaskInventorySlots); \
	DECLARE_FUNCTION(execDumpAllSuitInventorySlots); \
	DECLARE_FUNCTION(execDumpAllVendorItems); \
	DECLARE_FUNCTION(execDumpAllWeaponPresets); \
	DECLARE_FUNCTION(execDumpAttachedWeaponPartsForAllInventorySlots); \
	DECLARE_FUNCTION(execDumpAvavilableWeaponParts); \
	DECLARE_FUNCTION(execDumpBaseWeaponProgressionInfo); \
	DECLARE_FUNCTION(execDumpBaseWeaponProgressionLevel); \
	DECLARE_FUNCTION(execDumpBestLevelTimes); \
	DECLARE_FUNCTION(execDumpCharacterInventory); \
	DECLARE_FUNCTION(execDumpCosmeticsInventoryItems); \
	DECLARE_FUNCTION(execDumpCosmeticsInventoryItemsForWeaponPatternSlot); \
	DECLARE_FUNCTION(execDumpCurrentRenownLevel); \
	DECLARE_FUNCTION(execDumpDailyChallenges); \
	DECLARE_FUNCTION(execDumpDLCRewards); \
	DECLARE_FUNCTION(execDumpEntitlementSkuFromDLCButNotOwnedArray); \
	DECLARE_FUNCTION(execDumpGetProgressInfo); \
	DECLARE_FUNCTION(execDumpInventoryItems); \
	DECLARE_FUNCTION(execDumpIsQuickPlayEnabled); \
	DECLARE_FUNCTION(execDumpItemsProgressions); \
	DECLARE_FUNCTION(execDumpLoadoutName); \
	DECLARE_FUNCTION(execDumpMaskOfTheWeek); \
	DECLARE_FUNCTION(execDumpNextResetTime); \
	DECLARE_FUNCTION(execDumpOwnedHeists); \
	DECLARE_FUNCTION(execDumpPlayerSkillPoints); \
	DECLARE_FUNCTION(execDumpPlayerSkills); \
	DECLARE_FUNCTION(execDumpPreferredCharacters); \
	DECLARE_FUNCTION(execDumpRealMoneyStoreItems); \
	DECLARE_FUNCTION(execDumpReceipts); \
	DECLARE_FUNCTION(execDumpRecommendedChallenges); \
	DECLARE_FUNCTION(execDumpSelectablePlayerCharacters); \
	DECLARE_FUNCTION(execDumpSteamItems); \
	DECLARE_FUNCTION(execDumpWeaponSlotToWeaponPartMap); \
	DECLARE_FUNCTION(execDumpWeaponWeaponPartProgressionArray); \
	DECLARE_FUNCTION(execEmptyPrimaryWeaponLoadout); \
	DECLARE_FUNCTION(execEmptySecondaryWeaponLoadout); \
	DECLARE_FUNCTION(execGamepadOpenInGameCheatMenu); \
	DECLARE_FUNCTION(execGetCosmeticsForWeapon); \
	DECLARE_FUNCTION(execGetPartyCode); \
	DECLARE_FUNCTION(execGetUserEntitlementsForAllItems); \
	DECLARE_FUNCTION(execGetWeaponProgressionForBarrelSlot); \
	DECLARE_FUNCTION(execJoinPartyByCode); \
	DECLARE_FUNCTION(execLoadWeaponExperienceToLevelTable); \
	DECLARE_FUNCTION(execLockCharacterForTutorial); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execPurchaseRealMoneyItems); \
	DECLARE_FUNCTION(execQueryAchivements); \
	DECLARE_FUNCTION(execRemoveAsset); \
	DECLARE_FUNCTION(execRemoveCharacterFromSelectedSlot); \
	DECLARE_FUNCTION(execRemoveWeaponDummyCharm); \
	DECLARE_FUNCTION(execRemoveWeaponDummyPattern); \
	DECLARE_FUNCTION(execRemoveWeaponPartConfig); \
	DECLARE_FUNCTION(execResetPriceProgression); \
	DECLARE_FUNCTION(execSelectCharacterIntoFirstAvailableSlot); \
	DECLARE_FUNCTION(execSelectCharacterIntoSlot); \
	DECLARE_FUNCTION(execSendLobbyMessage); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSetActiveLoadoutIndex); \
	DECLARE_FUNCTION(execSetCheatAllowAttachAllWeaponParts); \
	DECLARE_FUNCTION(execSetEquippiedMaskInventoryIndex); \
	DECLARE_FUNCTION(execSetEquippiedSuitInventoryIndex); \
	DECLARE_FUNCTION(execSetLoadoutName); \
	DECLARE_FUNCTION(execSetPrimaryWeaponLoadout); \
	DECLARE_FUNCTION(execSetSecondaryWeaponLoadout); \
	DECLARE_FUNCTION(execSimulateForeground); \
	DECLARE_FUNCTION(execSyncDLC); \
	DECLARE_FUNCTION(execUnlockCharacterForTutorial); \
	DECLARE_FUNCTION(execUseDefaultMask); \
	DECLARE_FUNCTION(execUseDefaultSuit); \
	DECLARE_FUNCTION(execWriteAchievement);


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOwnedDLCAndPopulateEntitlementDisabledArray); \
	DECLARE_FUNCTION(execAddUniquePartToWeaponConfig); \
	DECLARE_FUNCTION(execApplyAsset); \
	DECLARE_FUNCTION(execApplyWeaponDummyCharm); \
	DECLARE_FUNCTION(execApplyWeaponDummyPattern); \
	DECLARE_FUNCTION(execBuyItem); \
	DECLARE_FUNCTION(execBuyItemAccelByteRequest); \
	DECLARE_FUNCTION(execBuyLoadoutSlot); \
	DECLARE_FUNCTION(execBuyPrimaryWeapon); \
	DECLARE_FUNCTION(execBuyPrimaryWeaponConfigSlot); \
	DECLARE_FUNCTION(execBuySecondaryWeapon); \
	DECLARE_FUNCTION(execBuySecondaryWeaponConfigSlot); \
	DECLARE_FUNCTION(execCanEquipDummyPatternToWeapon); \
	DECLARE_FUNCTION(execClearAllAchievements); \
	DECLARE_FUNCTION(execClearPreferredCharacters); \
	DECLARE_FUNCTION(execConsumeUserEntitlement); \
	DECLARE_FUNCTION(execDebugAllItemsResearched); \
	DECLARE_FUNCTION(execDiscardItem); \
	DECLARE_FUNCTION(execDumpAllGloveInventorySlots); \
	DECLARE_FUNCTION(execDumpAllItemProgressionLevels); \
	DECLARE_FUNCTION(execDumpAllMaskInventorySlots); \
	DECLARE_FUNCTION(execDumpAllSuitInventorySlots); \
	DECLARE_FUNCTION(execDumpAllVendorItems); \
	DECLARE_FUNCTION(execDumpAllWeaponPresets); \
	DECLARE_FUNCTION(execDumpAttachedWeaponPartsForAllInventorySlots); \
	DECLARE_FUNCTION(execDumpAvavilableWeaponParts); \
	DECLARE_FUNCTION(execDumpBaseWeaponProgressionInfo); \
	DECLARE_FUNCTION(execDumpBaseWeaponProgressionLevel); \
	DECLARE_FUNCTION(execDumpBestLevelTimes); \
	DECLARE_FUNCTION(execDumpCharacterInventory); \
	DECLARE_FUNCTION(execDumpCosmeticsInventoryItems); \
	DECLARE_FUNCTION(execDumpCosmeticsInventoryItemsForWeaponPatternSlot); \
	DECLARE_FUNCTION(execDumpCurrentRenownLevel); \
	DECLARE_FUNCTION(execDumpDailyChallenges); \
	DECLARE_FUNCTION(execDumpDLCRewards); \
	DECLARE_FUNCTION(execDumpEntitlementSkuFromDLCButNotOwnedArray); \
	DECLARE_FUNCTION(execDumpGetProgressInfo); \
	DECLARE_FUNCTION(execDumpInventoryItems); \
	DECLARE_FUNCTION(execDumpIsQuickPlayEnabled); \
	DECLARE_FUNCTION(execDumpItemsProgressions); \
	DECLARE_FUNCTION(execDumpLoadoutName); \
	DECLARE_FUNCTION(execDumpMaskOfTheWeek); \
	DECLARE_FUNCTION(execDumpNextResetTime); \
	DECLARE_FUNCTION(execDumpOwnedHeists); \
	DECLARE_FUNCTION(execDumpPlayerSkillPoints); \
	DECLARE_FUNCTION(execDumpPlayerSkills); \
	DECLARE_FUNCTION(execDumpPreferredCharacters); \
	DECLARE_FUNCTION(execDumpRealMoneyStoreItems); \
	DECLARE_FUNCTION(execDumpReceipts); \
	DECLARE_FUNCTION(execDumpRecommendedChallenges); \
	DECLARE_FUNCTION(execDumpSelectablePlayerCharacters); \
	DECLARE_FUNCTION(execDumpSteamItems); \
	DECLARE_FUNCTION(execDumpWeaponSlotToWeaponPartMap); \
	DECLARE_FUNCTION(execDumpWeaponWeaponPartProgressionArray); \
	DECLARE_FUNCTION(execEmptyPrimaryWeaponLoadout); \
	DECLARE_FUNCTION(execEmptySecondaryWeaponLoadout); \
	DECLARE_FUNCTION(execGamepadOpenInGameCheatMenu); \
	DECLARE_FUNCTION(execGetCosmeticsForWeapon); \
	DECLARE_FUNCTION(execGetPartyCode); \
	DECLARE_FUNCTION(execGetUserEntitlementsForAllItems); \
	DECLARE_FUNCTION(execGetWeaponProgressionForBarrelSlot); \
	DECLARE_FUNCTION(execJoinPartyByCode); \
	DECLARE_FUNCTION(execLoadWeaponExperienceToLevelTable); \
	DECLARE_FUNCTION(execLockCharacterForTutorial); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execPurchaseRealMoneyItems); \
	DECLARE_FUNCTION(execQueryAchivements); \
	DECLARE_FUNCTION(execRemoveAsset); \
	DECLARE_FUNCTION(execRemoveCharacterFromSelectedSlot); \
	DECLARE_FUNCTION(execRemoveWeaponDummyCharm); \
	DECLARE_FUNCTION(execRemoveWeaponDummyPattern); \
	DECLARE_FUNCTION(execRemoveWeaponPartConfig); \
	DECLARE_FUNCTION(execResetPriceProgression); \
	DECLARE_FUNCTION(execSelectCharacterIntoFirstAvailableSlot); \
	DECLARE_FUNCTION(execSelectCharacterIntoSlot); \
	DECLARE_FUNCTION(execSendLobbyMessage); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSetActiveLoadoutIndex); \
	DECLARE_FUNCTION(execSetCheatAllowAttachAllWeaponParts); \
	DECLARE_FUNCTION(execSetEquippiedMaskInventoryIndex); \
	DECLARE_FUNCTION(execSetEquippiedSuitInventoryIndex); \
	DECLARE_FUNCTION(execSetLoadoutName); \
	DECLARE_FUNCTION(execSetPrimaryWeaponLoadout); \
	DECLARE_FUNCTION(execSetSecondaryWeaponLoadout); \
	DECLARE_FUNCTION(execSimulateForeground); \
	DECLARE_FUNCTION(execSyncDLC); \
	DECLARE_FUNCTION(execUnlockCharacterForTutorial); \
	DECLARE_FUNCTION(execUseDefaultMask); \
	DECLARE_FUNCTION(execUseDefaultSuit); \
	DECLARE_FUNCTION(execWriteAchievement);


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCheatManagerMainMenu(); \
	friend struct Z_Construct_UClass_USBZCheatManagerMainMenu_Statics; \
public: \
	DECLARE_CLASS(USBZCheatManagerMainMenu, USBZCheatManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCheatManagerMainMenu)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCheatManagerMainMenu(); \
	friend struct Z_Construct_UClass_USBZCheatManagerMainMenu_Statics; \
public: \
	DECLARE_CLASS(USBZCheatManagerMainMenu, USBZCheatManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCheatManagerMainMenu)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCheatManagerMainMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCheatManagerMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCheatManagerMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCheatManagerMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCheatManagerMainMenu(USBZCheatManagerMainMenu&&); \
	NO_API USBZCheatManagerMainMenu(const USBZCheatManagerMainMenu&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCheatManagerMainMenu(USBZCheatManagerMainMenu&&); \
	NO_API USBZCheatManagerMainMenu(const USBZCheatManagerMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCheatManagerMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCheatManagerMainMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCheatManagerMainMenu)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuInputComponent() { return STRUCT_OFFSET(USBZCheatManagerMainMenu, MenuInputComponent); } \
	FORCEINLINE static uint32 __PPO__SelectedMaskSprayCanData() { return STRUCT_OFFSET(USBZCheatManagerMainMenu, SelectedMaskSprayCanData); } \
	FORCEINLINE static uint32 __PPO__SuitPartConfigs() { return STRUCT_OFFSET(USBZCheatManagerMainMenu, SuitPartConfigs); } \
	FORCEINLINE static uint32 __PPO__IconTextureSet() { return STRUCT_OFFSET(USBZCheatManagerMainMenu, IconTextureSet); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCheatManagerMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerMainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
