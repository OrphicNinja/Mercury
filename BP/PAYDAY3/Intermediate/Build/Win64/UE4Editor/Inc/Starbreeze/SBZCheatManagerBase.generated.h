// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCurrencyCode : uint8;
class AActor;
enum class ESBZGameMachineStateError : uint8;
enum class ESBZDebugNetEmulationType : uint8;
enum class ESBZDebugNetEmulationTarget : uint8;
#ifdef STARBREEZE_SBZCheatManagerBase_generated_h
#error "SBZCheatManagerBase.generated.h already included, missing '#pragma once' in SBZCheatManagerBase.h"
#endif
#define STARBREEZE_SBZCheatManagerBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execChangeStatCode); \
	DECLARE_FUNCTION(execClearFriends); \
	DECLARE_FUNCTION(execCompleteChallenge); \
	DECLARE_FUNCTION(execDebugChallengeRecords); \
	DECLARE_FUNCTION(execDebugIncrementPlayerStat); \
	DECLARE_FUNCTION(execDebugVoteInit); \
	DECLARE_FUNCTION(execDebugVoteNegative); \
	DECLARE_FUNCTION(execDebugVotePositive); \
	DECLARE_FUNCTION(execDebugVoteRecall); \
	DECLARE_FUNCTION(execDeleteMyAccount); \
	DECLARE_FUNCTION(execDeleteProgressionSaveGame); \
	DECLARE_FUNCTION(execDisableTimeouts); \
	DECLARE_FUNCTION(execDisconnectPlayer); \
	DECLARE_FUNCTION(execDisconnectServer); \
	DECLARE_FUNCTION(execDumpActiveLoadout); \
	DECLARE_FUNCTION(execDumpAllPlayersAccelByteDisplayName); \
	DECLARE_FUNCTION(execDumpAllPlayersInfamyAndPlatform); \
	DECLARE_FUNCTION(execDumpAllPlayerStatistics); \
	DECLARE_FUNCTION(execDumpAssetDatabase); \
	DECLARE_FUNCTION(execDumpWeaponPresetAssets); \
	DECLARE_FUNCTION(execExecF); \
	DECLARE_FUNCTION(execFakeInvite); \
	DECLARE_FUNCTION(execFetchAllVendorItems); \
	DECLARE_FUNCTION(execLoadProgressionSaveChallenges); \
	DECLARE_FUNCTION(execLoadProgressionSaveGame); \
	DECLARE_FUNCTION(execOnEndPlay); \
	DECLARE_FUNCTION(execPrintAbilitySystem); \
	DECLARE_FUNCTION(execPrintAbilitySystemBothCurrent); \
	DECLARE_FUNCTION(execPrintError); \
	DECLARE_FUNCTION(execPrintInputEnabled); \
	DECLARE_FUNCTION(execPrintInputEnabledBothCurrent); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execPrintSelection); \
	DECLARE_FUNCTION(execPrintSelectionHierarchy); \
	DECLARE_FUNCTION(execPrintStuckInfo); \
	DECLARE_FUNCTION(execPrintTargetAbilitySystem); \
	DECLARE_FUNCTION(execPrintVersion); \
	DECLARE_FUNCTION(execPrintWarning); \
	DECLARE_FUNCTION(execRemoveCurrency); \
	DECLARE_FUNCTION(execRequestGameError); \
	DECLARE_FUNCTION(execRequestSwitchUser); \
	DECLARE_FUNCTION(execResetMyAccount); \
	DECLARE_FUNCTION(execResetProgressionSaveGame); \
	DECLARE_FUNCTION(execResetSettingsSaveGame); \
	DECLARE_FUNCTION(execSaveProgressionSaveGame); \
	DECLARE_FUNCTION(execSelectActorClass); \
	DECLARE_FUNCTION(execSelectActorName); \
	DECLARE_FUNCTION(execSelectChild); \
	DECLARE_FUNCTION(execSelectComponentClass); \
	DECLARE_FUNCTION(execSelectComponentIndex); \
	DECLARE_FUNCTION(execSelectComponentName); \
	DECLARE_FUNCTION(execSelectLast); \
	DECLARE_FUNCTION(execSelectParentActor); \
	DECLARE_FUNCTION(execSelectParentSocket); \
	DECLARE_FUNCTION(execSelectSocketIndex); \
	DECLARE_FUNCTION(execSelectSocketName); \
	DECLARE_FUNCTION(execSelectTarget); \
	DECLARE_FUNCTION(execServerCommand); \
	DECLARE_FUNCTION(execSetAudioRTPCValue); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execSetCulture); \
	DECLARE_FUNCTION(execSetCurrency); \
	DECLARE_FUNCTION(execSetDebugEarnedExperiencePoints); \
	DECLARE_FUNCTION(execSetInfamyExperience); \
	DECLARE_FUNCTION(execSetInfamyLevel); \
	DECLARE_FUNCTION(execSetInfamyLevelExperience); \
	DECLARE_FUNCTION(execSetInputTypeOverride); \
	DECLARE_FUNCTION(execSetListenerEnabled); \
	DECLARE_FUNCTION(execSetNetEmulationType); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetPreMatchInfamyExperience); \
	DECLARE_FUNCTION(execSimulateLobbyCloseConnection); \
	DECLARE_FUNCTION(execSimulateLobbyConnectSuccess); \
	DECLARE_FUNCTION(execToggleCVar); \
	DECLARE_FUNCTION(execToggleDrawDebugSpread); \
	DECLARE_FUNCTION(execToggleInGameCheatMenu); \
	DECLARE_FUNCTION(execToggleMuteMusic); \
	DECLARE_FUNCTION(execUnselect); \
	DECLARE_FUNCTION(execUnselectComponent); \
	DECLARE_FUNCTION(execUnselectSocket); \
	DECLARE_FUNCTION(execVoteKickPlayer); \
	DECLARE_FUNCTION(execVoteRestartLevel);


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execChangeStatCode); \
	DECLARE_FUNCTION(execClearFriends); \
	DECLARE_FUNCTION(execCompleteChallenge); \
	DECLARE_FUNCTION(execDebugChallengeRecords); \
	DECLARE_FUNCTION(execDebugIncrementPlayerStat); \
	DECLARE_FUNCTION(execDebugVoteInit); \
	DECLARE_FUNCTION(execDebugVoteNegative); \
	DECLARE_FUNCTION(execDebugVotePositive); \
	DECLARE_FUNCTION(execDebugVoteRecall); \
	DECLARE_FUNCTION(execDeleteMyAccount); \
	DECLARE_FUNCTION(execDeleteProgressionSaveGame); \
	DECLARE_FUNCTION(execDisableTimeouts); \
	DECLARE_FUNCTION(execDisconnectPlayer); \
	DECLARE_FUNCTION(execDisconnectServer); \
	DECLARE_FUNCTION(execDumpActiveLoadout); \
	DECLARE_FUNCTION(execDumpAllPlayersAccelByteDisplayName); \
	DECLARE_FUNCTION(execDumpAllPlayersInfamyAndPlatform); \
	DECLARE_FUNCTION(execDumpAllPlayerStatistics); \
	DECLARE_FUNCTION(execDumpAssetDatabase); \
	DECLARE_FUNCTION(execDumpWeaponPresetAssets); \
	DECLARE_FUNCTION(execExecF); \
	DECLARE_FUNCTION(execFakeInvite); \
	DECLARE_FUNCTION(execFetchAllVendorItems); \
	DECLARE_FUNCTION(execLoadProgressionSaveChallenges); \
	DECLARE_FUNCTION(execLoadProgressionSaveGame); \
	DECLARE_FUNCTION(execOnEndPlay); \
	DECLARE_FUNCTION(execPrintAbilitySystem); \
	DECLARE_FUNCTION(execPrintAbilitySystemBothCurrent); \
	DECLARE_FUNCTION(execPrintError); \
	DECLARE_FUNCTION(execPrintInputEnabled); \
	DECLARE_FUNCTION(execPrintInputEnabledBothCurrent); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execPrintSelection); \
	DECLARE_FUNCTION(execPrintSelectionHierarchy); \
	DECLARE_FUNCTION(execPrintStuckInfo); \
	DECLARE_FUNCTION(execPrintTargetAbilitySystem); \
	DECLARE_FUNCTION(execPrintVersion); \
	DECLARE_FUNCTION(execPrintWarning); \
	DECLARE_FUNCTION(execRemoveCurrency); \
	DECLARE_FUNCTION(execRequestGameError); \
	DECLARE_FUNCTION(execRequestSwitchUser); \
	DECLARE_FUNCTION(execResetMyAccount); \
	DECLARE_FUNCTION(execResetProgressionSaveGame); \
	DECLARE_FUNCTION(execResetSettingsSaveGame); \
	DECLARE_FUNCTION(execSaveProgressionSaveGame); \
	DECLARE_FUNCTION(execSelectActorClass); \
	DECLARE_FUNCTION(execSelectActorName); \
	DECLARE_FUNCTION(execSelectChild); \
	DECLARE_FUNCTION(execSelectComponentClass); \
	DECLARE_FUNCTION(execSelectComponentIndex); \
	DECLARE_FUNCTION(execSelectComponentName); \
	DECLARE_FUNCTION(execSelectLast); \
	DECLARE_FUNCTION(execSelectParentActor); \
	DECLARE_FUNCTION(execSelectParentSocket); \
	DECLARE_FUNCTION(execSelectSocketIndex); \
	DECLARE_FUNCTION(execSelectSocketName); \
	DECLARE_FUNCTION(execSelectTarget); \
	DECLARE_FUNCTION(execServerCommand); \
	DECLARE_FUNCTION(execSetAudioRTPCValue); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execSetCulture); \
	DECLARE_FUNCTION(execSetCurrency); \
	DECLARE_FUNCTION(execSetDebugEarnedExperiencePoints); \
	DECLARE_FUNCTION(execSetInfamyExperience); \
	DECLARE_FUNCTION(execSetInfamyLevel); \
	DECLARE_FUNCTION(execSetInfamyLevelExperience); \
	DECLARE_FUNCTION(execSetInputTypeOverride); \
	DECLARE_FUNCTION(execSetListenerEnabled); \
	DECLARE_FUNCTION(execSetNetEmulationType); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetPreMatchInfamyExperience); \
	DECLARE_FUNCTION(execSimulateLobbyCloseConnection); \
	DECLARE_FUNCTION(execSimulateLobbyConnectSuccess); \
	DECLARE_FUNCTION(execToggleCVar); \
	DECLARE_FUNCTION(execToggleDrawDebugSpread); \
	DECLARE_FUNCTION(execToggleInGameCheatMenu); \
	DECLARE_FUNCTION(execToggleMuteMusic); \
	DECLARE_FUNCTION(execUnselect); \
	DECLARE_FUNCTION(execUnselectComponent); \
	DECLARE_FUNCTION(execUnselectSocket); \
	DECLARE_FUNCTION(execVoteKickPlayer); \
	DECLARE_FUNCTION(execVoteRestartLevel);


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCheatManagerBase(); \
	friend struct Z_Construct_UClass_USBZCheatManagerBase_Statics; \
public: \
	DECLARE_CLASS(USBZCheatManagerBase, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCheatManagerBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCheatManagerBase(); \
	friend struct Z_Construct_UClass_USBZCheatManagerBase_Statics; \
public: \
	DECLARE_CLASS(USBZCheatManagerBase, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCheatManagerBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCheatManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCheatManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCheatManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCheatManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCheatManagerBase(USBZCheatManagerBase&&); \
	NO_API USBZCheatManagerBase(const USBZCheatManagerBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCheatManagerBase(USBZCheatManagerBase&&); \
	NO_API USBZCheatManagerBase(const USBZCheatManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCheatManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCheatManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCheatManagerBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(USBZCheatManagerBase, InputComponent); } \
	FORCEINLINE static uint32 __PPO__Selection() { return STRUCT_OFFSET(USBZCheatManagerBase, Selection); } \
	FORCEINLINE static uint32 __PPO__LastSelection() { return STRUCT_OFFSET(USBZCheatManagerBase, LastSelection); } \
	FORCEINLINE static uint32 __PPO__AccelByteAdminHelper() { return STRUCT_OFFSET(USBZCheatManagerBase, AccelByteAdminHelper); } \
	FORCEINLINE static uint32 __PPO__SelectedEmulationType() { return STRUCT_OFFSET(USBZCheatManagerBase, SelectedEmulationType); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCheatManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCheatManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
