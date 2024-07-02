// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDifficulty : uint8;
class USBZGlobalItemDatabase;
class USBZPlatformUserManager;
class USBZReplayManager;
class USBZSaveManager;
class USBZTimeEventManager;
struct FSBZReplayInfo;
#ifdef STARBREEZE_SBZGameInstance_generated_h
#error "SBZGameInstance.generated.h already included, missing '#pragma once' in SBZGameInstance.h"
#endif
#define STARBREEZE_SBZGameInstance_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayVersion); \
	DECLARE_FUNCTION(execGetBuiltFromChangelist); \
	DECLARE_FUNCTION(execGetDifficulty); \
	DECLARE_FUNCTION(execGetGlobalItemDatabase); \
	DECLARE_FUNCTION(execGetPlatformUserManager); \
	DECLARE_FUNCTION(execGetReplayManager); \
	DECLARE_FUNCTION(execGetSaveManager); \
	DECLARE_FUNCTION(execGetTimeEventManager); \
	DECLARE_FUNCTION(execHandleGameStateEntered); \
	DECLARE_FUNCTION(execSetDifficulty);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayVersion); \
	DECLARE_FUNCTION(execGetBuiltFromChangelist); \
	DECLARE_FUNCTION(execGetDifficulty); \
	DECLARE_FUNCTION(execGetGlobalItemDatabase); \
	DECLARE_FUNCTION(execGetPlatformUserManager); \
	DECLARE_FUNCTION(execGetReplayManager); \
	DECLARE_FUNCTION(execGetSaveManager); \
	DECLARE_FUNCTION(execGetTimeEventManager); \
	DECLARE_FUNCTION(execHandleGameStateEntered); \
	DECLARE_FUNCTION(execSetDifficulty);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_EVENT_PARMS \
	struct SBZGameInstance_eventOnFindReplaysComplete_Parms \
	{ \
		TArray<FSBZReplayInfo> Replays; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameInstance(); \
	friend struct Z_Construct_UClass_USBZGameInstance_Statics; \
public: \
	DECLARE_CLASS(USBZGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameInstance(); \
	friend struct Z_Construct_UClass_USBZGameInstance_Statics; \
public: \
	DECLARE_CLASS(USBZGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameInstance(USBZGameInstance&&); \
	NO_API USBZGameInstance(const USBZGameInstance&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameInstance(USBZGameInstance&&); \
	NO_API USBZGameInstance(const USBZGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameInstance)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WwiseInitBank() { return STRUCT_OFFSET(USBZGameInstance, WwiseInitBank); } \
	FORCEINLINE static uint32 __PPO__MusicManagerClass() { return STRUCT_OFFSET(USBZGameInstance, MusicManagerClass); } \
	FORCEINLINE static uint32 __PPO__MotionManagerClass() { return STRUCT_OFFSET(USBZGameInstance, MotionManagerClass); } \
	FORCEINLINE static uint32 __PPO__VolumeManagerClass() { return STRUCT_OFFSET(USBZGameInstance, VolumeManagerClass); } \
	FORCEINLINE static uint32 __PPO__GamepadBindingsManagerClass() { return STRUCT_OFFSET(USBZGameInstance, GamepadBindingsManagerClass); } \
	FORCEINLINE static uint32 __PPO__ListenerManagerClass() { return STRUCT_OFFSET(USBZGameInstance, ListenerManagerClass); } \
	FORCEINLINE static uint32 __PPO__SoundEnvironmentManagerClass() { return STRUCT_OFFSET(USBZGameInstance, SoundEnvironmentManagerClass); } \
	FORCEINLINE static uint32 __PPO__ChallengeManagerClass() { return STRUCT_OFFSET(USBZGameInstance, ChallengeManagerClass); } \
	FORCEINLINE static uint32 __PPO__ChallengeCategoryManagerClass() { return STRUCT_OFFSET(USBZGameInstance, ChallengeCategoryManagerClass); } \
	FORCEINLINE static uint32 __PPO__DSChallengeManagerClass() { return STRUCT_OFFSET(USBZGameInstance, DSChallengeManagerClass); } \
	FORCEINLINE static uint32 __PPO__ServerStatusManagerClass() { return STRUCT_OFFSET(USBZGameInstance, ServerStatusManagerClass); } \
	FORCEINLINE static uint32 __PPO__UIManagerClass() { return STRUCT_OFFSET(USBZGameInstance, UIManagerClass); } \
	FORCEINLINE static uint32 __PPO__GlobalItemDatabaseClass() { return STRUCT_OFFSET(USBZGameInstance, GlobalItemDatabaseClass); } \
	FORCEINLINE static uint32 __PPO__GlobalQuickStartItemDatabaseClass() { return STRUCT_OFFSET(USBZGameInstance, GlobalQuickStartItemDatabaseClass); } \
	FORCEINLINE static uint32 __PPO__GameStateMachine() { return STRUCT_OFFSET(USBZGameInstance, GameStateMachine); } \
	FORCEINLINE static uint32 __PPO__FramerateLimitOutOfFocus() { return STRUCT_OFFSET(USBZGameInstance, FramerateLimitOutOfFocus); } \
	FORCEINLINE static uint32 __PPO__SaveManager() { return STRUCT_OFFSET(USBZGameInstance, SaveManager); } \
	FORCEINLINE static uint32 __PPO__SettingsMenuManager() { return STRUCT_OFFSET(USBZGameInstance, SettingsMenuManager); } \
	FORCEINLINE static uint32 __PPO__WeaponConfigManager() { return STRUCT_OFFSET(USBZGameInstance, WeaponConfigManager); } \
	FORCEINLINE static uint32 __PPO__WeaponCosmeticsManager() { return STRUCT_OFFSET(USBZGameInstance, WeaponCosmeticsManager); } \
	FORCEINLINE static uint32 __PPO__WeaponProgressionManager() { return STRUCT_OFFSET(USBZGameInstance, WeaponProgressionManager); } \
	FORCEINLINE static uint32 __PPO__AssetDatabaseManager() { return STRUCT_OFFSET(USBZGameInstance, AssetDatabaseManager); } \
	FORCEINLINE static uint32 __PPO__StoreManager() { return STRUCT_OFFSET(USBZGameInstance, StoreManager); } \
	FORCEINLINE static uint32 __PPO__InventoryManager() { return STRUCT_OFFSET(USBZGameInstance, InventoryManager); } \
	FORCEINLINE static uint32 __PPO__PlayerStatisticsManager() { return STRUCT_OFFSET(USBZGameInstance, PlayerStatisticsManager); } \
	FORCEINLINE static uint32 __PPO__LoadoutManager() { return STRUCT_OFFSET(USBZGameInstance, LoadoutManager); } \
	FORCEINLINE static uint32 __PPO__MusicManager() { return STRUCT_OFFSET(USBZGameInstance, MusicManager); } \
	FORCEINLINE static uint32 __PPO__VolumeManager() { return STRUCT_OFFSET(USBZGameInstance, VolumeManager); } \
	FORCEINLINE static uint32 __PPO__MotionManager() { return STRUCT_OFFSET(USBZGameInstance, MotionManager); } \
	FORCEINLINE static uint32 __PPO__GamepadBindingsManager() { return STRUCT_OFFSET(USBZGameInstance, GamepadBindingsManager); } \
	FORCEINLINE static uint32 __PPO__ListenerManager() { return STRUCT_OFFSET(USBZGameInstance, ListenerManager); } \
	FORCEINLINE static uint32 __PPO__SoundEnvironmentManager() { return STRUCT_OFFSET(USBZGameInstance, SoundEnvironmentManager); } \
	FORCEINLINE static uint32 __PPO__AccelByteUser() { return STRUCT_OFFSET(USBZGameInstance, AccelByteUser); } \
	FORCEINLINE static uint32 __PPO__ChallengeManager() { return STRUCT_OFFSET(USBZGameInstance, ChallengeManager); } \
	FORCEINLINE static uint32 __PPO__DSChallengeManager() { return STRUCT_OFFSET(USBZGameInstance, DSChallengeManager); } \
	FORCEINLINE static uint32 __PPO__ChallengeCategoryManager() { return STRUCT_OFFSET(USBZGameInstance, ChallengeCategoryManager); } \
	FORCEINLINE static uint32 __PPO__ServerStatusManager() { return STRUCT_OFFSET(USBZGameInstance, ServerStatusManager); } \
	FORCEINLINE static uint32 __PPO__UIManager() { return STRUCT_OFFSET(USBZGameInstance, UIManager); } \
	FORCEINLINE static uint32 __PPO__AnalyticsManager() { return STRUCT_OFFSET(USBZGameInstance, AnalyticsManager); } \
	FORCEINLINE static uint32 __PPO__WorldLoader() { return STRUCT_OFFSET(USBZGameInstance, WorldLoader); } \
	FORCEINLINE static uint32 __PPO__ReplayManager() { return STRUCT_OFFSET(USBZGameInstance, ReplayManager); } \
	FORCEINLINE static uint32 __PPO__SafeHouseManager() { return STRUCT_OFFSET(USBZGameInstance, SafeHouseManager); } \
	FORCEINLINE static uint32 __PPO__GlobalItemDatabase() { return STRUCT_OFFSET(USBZGameInstance, GlobalItemDatabase); } \
	FORCEINLINE static uint32 __PPO__CharacterManager() { return STRUCT_OFFSET(USBZGameInstance, CharacterManager); } \
	FORCEINLINE static uint32 __PPO__CurrencyManager() { return STRUCT_OFFSET(USBZGameInstance, CurrencyManager); } \
	FORCEINLINE static uint32 __PPO__ExperienceManager() { return STRUCT_OFFSET(USBZGameInstance, ExperienceManager); } \
	FORCEINLINE static uint32 __PPO__InstantLootManager() { return STRUCT_OFFSET(USBZGameInstance, InstantLootManager); } \
	FORCEINLINE static uint32 __PPO__InfamyManager() { return STRUCT_OFFSET(USBZGameInstance, InfamyManager); } \
	FORCEINLINE static uint32 __PPO__SkillManager() { return STRUCT_OFFSET(USBZGameInstance, SkillManager); } \
	FORCEINLINE static uint32 __PPO__PreplanningAssetManager() { return STRUCT_OFFSET(USBZGameInstance, PreplanningAssetManager); } \
	FORCEINLINE static uint32 __PPO__AchievementManager() { return STRUCT_OFFSET(USBZGameInstance, AchievementManager); } \
	FORCEINLINE static uint32 __PPO__TimeEventManager() { return STRUCT_OFFSET(USBZGameInstance, TimeEventManager); } \
	FORCEINLINE static uint32 __PPO__AccelByteNetworkPoll() { return STRUCT_OFFSET(USBZGameInstance, AccelByteNetworkPoll); } \
	FORCEINLINE static uint32 __PPO__ItemProgressionManager() { return STRUCT_OFFSET(USBZGameInstance, ItemProgressionManager); } \
	FORCEINLINE static uint32 __PPO__BanPlayerManager() { return STRUCT_OFFSET(USBZGameInstance, BanPlayerManager); } \
	FORCEINLINE static uint32 __PPO__UE4StatsProfiler() { return STRUCT_OFFSET(USBZGameInstance, UE4StatsProfiler); } \
	FORCEINLINE static uint32 __PPO__GameplayManager() { return STRUCT_OFFSET(USBZGameInstance, GameplayManager); } \
	FORCEINLINE static uint32 __PPO__MergePartyManager() { return STRUCT_OFFSET(USBZGameInstance, MergePartyManager); } \
	FORCEINLINE static uint32 __PPO__FGRLManager() { return STRUCT_OFFSET(USBZGameInstance, FGRLManager); } \
	FORCEINLINE static uint32 __PPO__PlatformUserManager() { return STRUCT_OFFSET(USBZGameInstance, PlatformUserManager); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_60_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
