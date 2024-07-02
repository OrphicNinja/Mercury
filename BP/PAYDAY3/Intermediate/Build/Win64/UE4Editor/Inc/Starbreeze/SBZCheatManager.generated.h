// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3DispatchCaller : uint8;
enum class EPD3DispatchCallerReason : uint8;
enum class ESBZPlayerAbilityBuffType : uint8;
enum class ESBZDamageWeight : uint8;
struct FKey;
enum class ESBZInteractionAction : uint8;
enum class ESBZAIOrderMode : uint8;
enum class ESBZMilestoneType : uint8;
struct FSBZEndMissionResultData;
enum class ESBZEndMissionResult : uint8;
enum class ESBZDifficulty : uint8;
enum class EPD3HeistState : uint8;
enum class ESBZCharacterStance : uint8;
#ifdef STARBREEZE_SBZCheatManager_generated_h
#error "SBZCheatManager.generated.h already included, missing '#pragma once' in SBZCheatManager.h"
#endif
#define STARBREEZE_SBZCheatManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyGameplayEffectTarget); \
	DECLARE_FUNCTION(execCallDispatcher); \
	DECLARE_FUNCTION(execChangeAssaultDrama); \
	DECLARE_FUNCTION(execConsumePlayerAbilityBuff); \
	DECLARE_FUNCTION(execConsumePlayerAbilityBuffAll); \
	DECLARE_FUNCTION(execCuffPlayer); \
	DECLARE_FUNCTION(execDamageAllCrewAI); \
	DECLARE_FUNCTION(execDamageCharacter); \
	DECLARE_FUNCTION(execDamagePlayer); \
	DECLARE_FUNCTION(execDebugCreateBloodSplatterImpact); \
	DECLARE_FUNCTION(execDebugCreateExplosionImpact); \
	DECLARE_FUNCTION(execDebugCreateFootstepImpact); \
	DECLARE_FUNCTION(execDebugCreateProjectileImpact); \
	DECLARE_FUNCTION(execDebugShowSubtitle); \
	DECLARE_FUNCTION(execDebugVehicleSplineData); \
	DECLARE_FUNCTION(execDefeatCrewAI); \
	DECLARE_FUNCTION(execDefeatPlayer); \
	DECLARE_FUNCTION(execDefeatTarget); \
	DECLARE_FUNCTION(execDestroyAllAI); \
	DECLARE_FUNCTION(execDestroyAllDebris); \
	DECLARE_FUNCTION(execDestroyTargetAI); \
	DECLARE_FUNCTION(execDumpPlayersMergePartyStatus); \
	DECLARE_FUNCTION(execEquipOverkillWeapon); \
	DECLARE_FUNCTION(execFindBlocker); \
	DECLARE_FUNCTION(execFindClassReferences); \
	DECLARE_FUNCTION(execGainPlayerAbilityBuff); \
	DECLARE_FUNCTION(execGainPlayerAbilityBuffAll); \
	DECLARE_FUNCTION(execGamepadOpenInGameCheatMenu); \
	DECLARE_FUNCTION(execGiveAmmo); \
	DECLARE_FUNCTION(execGivePlaceableAmmo); \
	DECLARE_FUNCTION(execGiveThrowableAmmo); \
	DECLARE_FUNCTION(execGiveToolAmmo); \
	DECLARE_FUNCTION(execGrabInstantLoot); \
	DECLARE_FUNCTION(execInputActionPlayer); \
	DECLARE_FUNCTION(execInputActionTarget); \
	DECLARE_FUNCTION(execInputAxisPlayer); \
	DECLARE_FUNCTION(execInputAxisTarget); \
	DECLARE_FUNCTION(execInputKeyPlayer); \
	DECLARE_FUNCTION(execInputKeyTarget); \
	DECLARE_FUNCTION(execInputVectorAxisPlayer); \
	DECLARE_FUNCTION(execInputVectorAxisTarget); \
	DECLARE_FUNCTION(execInteractAITarget); \
	DECLARE_FUNCTION(execKillAllAI); \
	DECLARE_FUNCTION(execKillAllCrewAI); \
	DECLARE_FUNCTION(execKillPlayer); \
	DECLARE_FUNCTION(execKillTarget); \
	DECLARE_FUNCTION(execListenToRewardLogs); \
	DECLARE_FUNCTION(execLobotomizeAllAI); \
	DECLARE_FUNCTION(execLobotomizeAllCrewAI); \
	DECLARE_FUNCTION(execLogSceneComponents); \
	DECLARE_FUNCTION(execMoveDebugActorTarget); \
	DECLARE_FUNCTION(execOverlapSphere); \
	DECLARE_FUNCTION(execPerceptionOnAllAI); \
	DECLARE_FUNCTION(execPossessSelf); \
	DECLARE_FUNCTION(execPossessTarget); \
	DECLARE_FUNCTION(execPrintAllInteractable); \
	DECLARE_FUNCTION(execPrintAnimNotifies); \
	DECLARE_FUNCTION(execPrintExperienceMilestone); \
	DECLARE_FUNCTION(execPrintMissionSeed); \
	DECLARE_FUNCTION(execPrintPlayerIDArray); \
	DECLARE_FUNCTION(execPrintRewardLogEvent); \
	DECLARE_FUNCTION(execPrintServerWorldInfo); \
	DECLARE_FUNCTION(execPrintTagChanges); \
	DECLARE_FUNCTION(execPrintTarget); \
	DECLARE_FUNCTION(execPrintTargetTagChanges); \
	DECLARE_FUNCTION(execPrintWorldInfo); \
	DECLARE_FUNCTION(execRebuildAssetLookup); \
	DECLARE_FUNCTION(execRefreshPlayerAbilityBuff); \
	DECLARE_FUNCTION(execRefreshPlayerAbilityBuffAll); \
	DECLARE_FUNCTION(execReportBug); \
	DECLARE_FUNCTION(execRequestMissionEnd); \
	DECLARE_FUNCTION(execRequestMissionFail); \
	DECLARE_FUNCTION(execRequestMissionSuccess); \
	DECLARE_FUNCTION(execResearchAllSkills); \
	DECLARE_FUNCTION(execResetCVars); \
	DECLARE_FUNCTION(execReviveCrewAI); \
	DECLARE_FUNCTION(execRevivePlayer); \
	DECLARE_FUNCTION(execReviveTarget); \
	DECLARE_FUNCTION(execSecureAllAvailableLoot); \
	DECLARE_FUNCTION(execSecureBag); \
	DECLARE_FUNCTION(execSelectDebugActorTarget); \
	DECLARE_FUNCTION(execSendSessionMessage); \
	DECLARE_FUNCTION(execSetAddMissionFailedTimeout); \
	DECLARE_FUNCTION(execSetAllSkills); \
	DECLARE_FUNCTION(execSetAmmoInventory); \
	DECLARE_FUNCTION(execSetAmmoLoaded); \
	DECLARE_FUNCTION(execSetAssaultActive); \
	DECLARE_FUNCTION(execSetAssaultLevelProgression); \
	DECLARE_FUNCTION(execSetCrouchedTarget); \
	DECLARE_FUNCTION(execSetDifficulty); \
	DECLARE_FUNCTION(execSetDownedCount); \
	DECLARE_FUNCTION(execSetDrawTransform); \
	DECLARE_FUNCTION(execSetDrawTransformEnabled); \
	DECLARE_FUNCTION(execSetEquippable); \
	DECLARE_FUNCTION(execSetEquippablePart); \
	DECLARE_FUNCTION(execSetEquippablePreset); \
	DECLARE_FUNCTION(execSetEquippableWeaponPreset); \
	DECLARE_FUNCTION(execSetEquippedTarget); \
	DECLARE_FUNCTION(execSetFriendlyFireSettings); \
	DECLARE_FUNCTION(execSetGod); \
	DECLARE_FUNCTION(execSetHeistState); \
	DECLARE_FUNCTION(execSetInaudiblePlayer); \
	DECLARE_FUNCTION(execSetInfiniteAmmo); \
	DECLARE_FUNCTION(execSetInteractorModeIndex); \
	DECLARE_FUNCTION(execSetInvisiblePlayer); \
	DECLARE_FUNCTION(execSetJesus); \
	DECLARE_FUNCTION(execSetLastArrestedByGuard); \
	DECLARE_FUNCTION(execSetLooseTagCount); \
	DECLARE_FUNCTION(execSetMarkedTarget); \
	DECLARE_FUNCTION(execSetMaxAICrewCountOverride); \
	DECLARE_FUNCTION(execSetMilestonePassed); \
	DECLARE_FUNCTION(execSetMilestonesPassedLoud); \
	DECLARE_FUNCTION(execSetMilestonesPassedStealth); \
	DECLARE_FUNCTION(execSetMissionActive); \
	DECLARE_FUNCTION(execSetMissionFailedEnabled); \
	DECLARE_FUNCTION(execSetOptionalMilestonePassed); \
	DECLARE_FUNCTION(execSetOverkillWeaponProgress); \
	DECLARE_FUNCTION(execSetPlaceable); \
	DECLARE_FUNCTION(execSetPlaceableAmmo); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlockCooldown); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlockCooldownAll); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlocked); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlockedAll); \
	DECLARE_FUNCTION(execSetPlayerArmor); \
	DECLARE_FUNCTION(execSetPlayerCharacter); \
	DECLARE_FUNCTION(execSetPlayerGlove); \
	DECLARE_FUNCTION(execSetPlayerMask); \
	DECLARE_FUNCTION(execSetPlayerMergePartySelected); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execSetPlayerSuit); \
	DECLARE_FUNCTION(execSetRegisterRewardPrints); \
	DECLARE_FUNCTION(execSetSharedTagCount); \
	DECLARE_FUNCTION(execSetSkill); \
	DECLARE_FUNCTION(execSetTargetCharacterStance); \
	DECLARE_FUNCTION(execSetTargetEquippableIndex); \
	DECLARE_FUNCTION(execSetTargetEquippableIndexTarget); \
	DECLARE_FUNCTION(execSetTargetLooseTagCount); \
	DECLARE_FUNCTION(execSetThrowable); \
	DECLARE_FUNCTION(execSetThrowableAmmo); \
	DECLARE_FUNCTION(execSetTool); \
	DECLARE_FUNCTION(execSetToolAmmo); \
	DECLARE_FUNCTION(execSimulateChallengeNotificationReceived); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnAllAITypes); \
	DECLARE_FUNCTION(execSpawnFBI); \
	DECLARE_FUNCTION(execStartEndlessAssault); \
	DECLARE_FUNCTION(execSubduePlayer); \
	DECLARE_FUNCTION(execSurrenderTarget); \
	DECLARE_FUNCTION(execTasePlayer); \
	DECLARE_FUNCTION(execThrowItem); \
	DECLARE_FUNCTION(execToggleCrouchedTarget); \
	DECLARE_FUNCTION(execToggleDebugCameraAndTeleport); \
	DECLARE_FUNCTION(execToggleGod); \
	DECLARE_FUNCTION(execToggleInaudiblePlayer); \
	DECLARE_FUNCTION(execToggleInvisiblePlayer); \
	DECLARE_FUNCTION(execTrace); \
	DECLARE_FUNCTION(execViewSelfByIndex); \
	DECLARE_FUNCTION(execViewTarget);


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyGameplayEffectTarget); \
	DECLARE_FUNCTION(execCallDispatcher); \
	DECLARE_FUNCTION(execChangeAssaultDrama); \
	DECLARE_FUNCTION(execConsumePlayerAbilityBuff); \
	DECLARE_FUNCTION(execConsumePlayerAbilityBuffAll); \
	DECLARE_FUNCTION(execCuffPlayer); \
	DECLARE_FUNCTION(execDamageAllCrewAI); \
	DECLARE_FUNCTION(execDamageCharacter); \
	DECLARE_FUNCTION(execDamagePlayer); \
	DECLARE_FUNCTION(execDebugCreateBloodSplatterImpact); \
	DECLARE_FUNCTION(execDebugCreateExplosionImpact); \
	DECLARE_FUNCTION(execDebugCreateFootstepImpact); \
	DECLARE_FUNCTION(execDebugCreateProjectileImpact); \
	DECLARE_FUNCTION(execDebugShowSubtitle); \
	DECLARE_FUNCTION(execDebugVehicleSplineData); \
	DECLARE_FUNCTION(execDefeatCrewAI); \
	DECLARE_FUNCTION(execDefeatPlayer); \
	DECLARE_FUNCTION(execDefeatTarget); \
	DECLARE_FUNCTION(execDestroyAllAI); \
	DECLARE_FUNCTION(execDestroyAllDebris); \
	DECLARE_FUNCTION(execDestroyTargetAI); \
	DECLARE_FUNCTION(execDumpPlayersMergePartyStatus); \
	DECLARE_FUNCTION(execEquipOverkillWeapon); \
	DECLARE_FUNCTION(execFindBlocker); \
	DECLARE_FUNCTION(execFindClassReferences); \
	DECLARE_FUNCTION(execGainPlayerAbilityBuff); \
	DECLARE_FUNCTION(execGainPlayerAbilityBuffAll); \
	DECLARE_FUNCTION(execGamepadOpenInGameCheatMenu); \
	DECLARE_FUNCTION(execGiveAmmo); \
	DECLARE_FUNCTION(execGivePlaceableAmmo); \
	DECLARE_FUNCTION(execGiveThrowableAmmo); \
	DECLARE_FUNCTION(execGiveToolAmmo); \
	DECLARE_FUNCTION(execGrabInstantLoot); \
	DECLARE_FUNCTION(execInputActionPlayer); \
	DECLARE_FUNCTION(execInputActionTarget); \
	DECLARE_FUNCTION(execInputAxisPlayer); \
	DECLARE_FUNCTION(execInputAxisTarget); \
	DECLARE_FUNCTION(execInputKeyPlayer); \
	DECLARE_FUNCTION(execInputKeyTarget); \
	DECLARE_FUNCTION(execInputVectorAxisPlayer); \
	DECLARE_FUNCTION(execInputVectorAxisTarget); \
	DECLARE_FUNCTION(execInteractAITarget); \
	DECLARE_FUNCTION(execKillAllAI); \
	DECLARE_FUNCTION(execKillAllCrewAI); \
	DECLARE_FUNCTION(execKillPlayer); \
	DECLARE_FUNCTION(execKillTarget); \
	DECLARE_FUNCTION(execListenToRewardLogs); \
	DECLARE_FUNCTION(execLobotomizeAllAI); \
	DECLARE_FUNCTION(execLobotomizeAllCrewAI); \
	DECLARE_FUNCTION(execLogSceneComponents); \
	DECLARE_FUNCTION(execMoveDebugActorTarget); \
	DECLARE_FUNCTION(execOverlapSphere); \
	DECLARE_FUNCTION(execPerceptionOnAllAI); \
	DECLARE_FUNCTION(execPossessSelf); \
	DECLARE_FUNCTION(execPossessTarget); \
	DECLARE_FUNCTION(execPrintAllInteractable); \
	DECLARE_FUNCTION(execPrintAnimNotifies); \
	DECLARE_FUNCTION(execPrintExperienceMilestone); \
	DECLARE_FUNCTION(execPrintMissionSeed); \
	DECLARE_FUNCTION(execPrintPlayerIDArray); \
	DECLARE_FUNCTION(execPrintRewardLogEvent); \
	DECLARE_FUNCTION(execPrintServerWorldInfo); \
	DECLARE_FUNCTION(execPrintTagChanges); \
	DECLARE_FUNCTION(execPrintTarget); \
	DECLARE_FUNCTION(execPrintTargetTagChanges); \
	DECLARE_FUNCTION(execPrintWorldInfo); \
	DECLARE_FUNCTION(execRebuildAssetLookup); \
	DECLARE_FUNCTION(execRefreshPlayerAbilityBuff); \
	DECLARE_FUNCTION(execRefreshPlayerAbilityBuffAll); \
	DECLARE_FUNCTION(execReportBug); \
	DECLARE_FUNCTION(execRequestMissionEnd); \
	DECLARE_FUNCTION(execRequestMissionFail); \
	DECLARE_FUNCTION(execRequestMissionSuccess); \
	DECLARE_FUNCTION(execResearchAllSkills); \
	DECLARE_FUNCTION(execResetCVars); \
	DECLARE_FUNCTION(execReviveCrewAI); \
	DECLARE_FUNCTION(execRevivePlayer); \
	DECLARE_FUNCTION(execReviveTarget); \
	DECLARE_FUNCTION(execSecureAllAvailableLoot); \
	DECLARE_FUNCTION(execSecureBag); \
	DECLARE_FUNCTION(execSelectDebugActorTarget); \
	DECLARE_FUNCTION(execSendSessionMessage); \
	DECLARE_FUNCTION(execSetAddMissionFailedTimeout); \
	DECLARE_FUNCTION(execSetAllSkills); \
	DECLARE_FUNCTION(execSetAmmoInventory); \
	DECLARE_FUNCTION(execSetAmmoLoaded); \
	DECLARE_FUNCTION(execSetAssaultActive); \
	DECLARE_FUNCTION(execSetAssaultLevelProgression); \
	DECLARE_FUNCTION(execSetCrouchedTarget); \
	DECLARE_FUNCTION(execSetDifficulty); \
	DECLARE_FUNCTION(execSetDownedCount); \
	DECLARE_FUNCTION(execSetDrawTransform); \
	DECLARE_FUNCTION(execSetDrawTransformEnabled); \
	DECLARE_FUNCTION(execSetEquippable); \
	DECLARE_FUNCTION(execSetEquippablePart); \
	DECLARE_FUNCTION(execSetEquippablePreset); \
	DECLARE_FUNCTION(execSetEquippableWeaponPreset); \
	DECLARE_FUNCTION(execSetEquippedTarget); \
	DECLARE_FUNCTION(execSetFriendlyFireSettings); \
	DECLARE_FUNCTION(execSetGod); \
	DECLARE_FUNCTION(execSetHeistState); \
	DECLARE_FUNCTION(execSetInaudiblePlayer); \
	DECLARE_FUNCTION(execSetInfiniteAmmo); \
	DECLARE_FUNCTION(execSetInteractorModeIndex); \
	DECLARE_FUNCTION(execSetInvisiblePlayer); \
	DECLARE_FUNCTION(execSetJesus); \
	DECLARE_FUNCTION(execSetLastArrestedByGuard); \
	DECLARE_FUNCTION(execSetLooseTagCount); \
	DECLARE_FUNCTION(execSetMarkedTarget); \
	DECLARE_FUNCTION(execSetMaxAICrewCountOverride); \
	DECLARE_FUNCTION(execSetMilestonePassed); \
	DECLARE_FUNCTION(execSetMilestonesPassedLoud); \
	DECLARE_FUNCTION(execSetMilestonesPassedStealth); \
	DECLARE_FUNCTION(execSetMissionActive); \
	DECLARE_FUNCTION(execSetMissionFailedEnabled); \
	DECLARE_FUNCTION(execSetOptionalMilestonePassed); \
	DECLARE_FUNCTION(execSetOverkillWeaponProgress); \
	DECLARE_FUNCTION(execSetPlaceable); \
	DECLARE_FUNCTION(execSetPlaceableAmmo); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlockCooldown); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlockCooldownAll); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlocked); \
	DECLARE_FUNCTION(execSetPlayerAbilityBuffBlockedAll); \
	DECLARE_FUNCTION(execSetPlayerArmor); \
	DECLARE_FUNCTION(execSetPlayerCharacter); \
	DECLARE_FUNCTION(execSetPlayerGlove); \
	DECLARE_FUNCTION(execSetPlayerMask); \
	DECLARE_FUNCTION(execSetPlayerMergePartySelected); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execSetPlayerSuit); \
	DECLARE_FUNCTION(execSetRegisterRewardPrints); \
	DECLARE_FUNCTION(execSetSharedTagCount); \
	DECLARE_FUNCTION(execSetSkill); \
	DECLARE_FUNCTION(execSetTargetCharacterStance); \
	DECLARE_FUNCTION(execSetTargetEquippableIndex); \
	DECLARE_FUNCTION(execSetTargetEquippableIndexTarget); \
	DECLARE_FUNCTION(execSetTargetLooseTagCount); \
	DECLARE_FUNCTION(execSetThrowable); \
	DECLARE_FUNCTION(execSetThrowableAmmo); \
	DECLARE_FUNCTION(execSetTool); \
	DECLARE_FUNCTION(execSetToolAmmo); \
	DECLARE_FUNCTION(execSimulateChallengeNotificationReceived); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnAllAITypes); \
	DECLARE_FUNCTION(execSpawnFBI); \
	DECLARE_FUNCTION(execStartEndlessAssault); \
	DECLARE_FUNCTION(execSubduePlayer); \
	DECLARE_FUNCTION(execSurrenderTarget); \
	DECLARE_FUNCTION(execTasePlayer); \
	DECLARE_FUNCTION(execThrowItem); \
	DECLARE_FUNCTION(execToggleCrouchedTarget); \
	DECLARE_FUNCTION(execToggleDebugCameraAndTeleport); \
	DECLARE_FUNCTION(execToggleGod); \
	DECLARE_FUNCTION(execToggleInaudiblePlayer); \
	DECLARE_FUNCTION(execToggleInvisiblePlayer); \
	DECLARE_FUNCTION(execTrace); \
	DECLARE_FUNCTION(execViewSelfByIndex); \
	DECLARE_FUNCTION(execViewTarget);


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCheatManager(); \
	friend struct Z_Construct_UClass_USBZCheatManager_Statics; \
public: \
	DECLARE_CLASS(USBZCheatManager, USBZCheatManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCheatManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCheatManager(); \
	friend struct Z_Construct_UClass_USBZCheatManager_Statics; \
public: \
	DECLARE_CLASS(USBZCheatManager, USBZCheatManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCheatManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCheatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCheatManager(USBZCheatManager&&); \
	NO_API USBZCheatManager(const USBZCheatManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCheatManager(USBZCheatManager&&); \
	NO_API USBZCheatManager(const USBZCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCheatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCheatManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuInputComponent() { return STRUCT_OFFSET(USBZCheatManager, MenuInputComponent); } \
	FORCEINLINE static uint32 __PPO__SelectedWeaponPartSlot() { return STRUCT_OFFSET(USBZCheatManager, SelectedWeaponPartSlot); } \
	FORCEINLINE static uint32 __PPO__SelectedWeaponPart() { return STRUCT_OFFSET(USBZCheatManager, SelectedWeaponPart); } \
	FORCEINLINE static uint32 __PPO__SelectedWeaponCosmeticsPartSlot() { return STRUCT_OFFSET(USBZCheatManager, SelectedWeaponCosmeticsPartSlot); } \
	FORCEINLINE static uint32 __PPO__SelectedWeaponCosmeticsPart() { return STRUCT_OFFSET(USBZCheatManager, SelectedWeaponCosmeticsPart); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_27_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
