// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZChallengeData;
class UObject;
class USBZChallengeManager;
struct FSBZChallengeProgressStat;
struct FSBZRecommendedChallenges;
#ifdef STARBREEZE_SBZChallengeManager_generated_h
#error "SBZChallengeManager.generated.h already included, missing '#pragma once' in SBZChallengeManager.h"
#endif
#define STARBREEZE_SBZChallengeManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChallengeDescriptionText); \
	DECLARE_FUNCTION(execGetChallengeManager); \
	DECLARE_FUNCTION(execGetChallengeNameText); \
	DECLARE_FUNCTION(execGetChallengeStatDescriptionText); \
	DECLARE_FUNCTION(execGetChallengeStatNameText); \
	DECLARE_FUNCTION(execGetChallengeStatObjectiveText); \
	DECLARE_FUNCTION(execGetCompletedChallengesDuringMission); \
	DECLARE_FUNCTION(execGetDailyChallengesArray); \
	DECLARE_FUNCTION(execGetRecommendedChallenges); \
	DECLARE_FUNCTION(execGetRerollAvailable); \
	DECLARE_FUNCTION(execGetStatProgress); \
	DECLARE_FUNCTION(execHandleOnStateMachineStateEntered); \
	DECLARE_FUNCTION(execHandlePlatformUserChanged); \
	DECLARE_FUNCTION(execRefreshChallengeRecordCache); \
	DECLARE_FUNCTION(execRefreshDailySlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChallengeDescriptionText); \
	DECLARE_FUNCTION(execGetChallengeManager); \
	DECLARE_FUNCTION(execGetChallengeNameText); \
	DECLARE_FUNCTION(execGetChallengeStatDescriptionText); \
	DECLARE_FUNCTION(execGetChallengeStatNameText); \
	DECLARE_FUNCTION(execGetChallengeStatObjectiveText); \
	DECLARE_FUNCTION(execGetCompletedChallengesDuringMission); \
	DECLARE_FUNCTION(execGetDailyChallengesArray); \
	DECLARE_FUNCTION(execGetRecommendedChallenges); \
	DECLARE_FUNCTION(execGetRerollAvailable); \
	DECLARE_FUNCTION(execGetStatProgress); \
	DECLARE_FUNCTION(execHandleOnStateMachineStateEntered); \
	DECLARE_FUNCTION(execHandlePlatformUserChanged); \
	DECLARE_FUNCTION(execRefreshChallengeRecordCache); \
	DECLARE_FUNCTION(execRefreshDailySlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZChallengeManager(); \
	friend struct Z_Construct_UClass_USBZChallengeManager_Statics; \
public: \
	DECLARE_CLASS(USBZChallengeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChallengeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZChallengeManager(); \
	friend struct Z_Construct_UClass_USBZChallengeManager_Statics; \
public: \
	DECLARE_CLASS(USBZChallengeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChallengeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZChallengeManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZChallengeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChallengeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChallengeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChallengeManager(USBZChallengeManager&&); \
	NO_API USBZChallengeManager(const USBZChallengeManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChallengeManager(USBZChallengeManager&&); \
	NO_API USBZChallengeManager(const USBZChallengeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChallengeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChallengeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZChallengeManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InfamyPointRewardStatID() { return STRUCT_OFFSET(USBZChallengeManager, InfamyPointRewardStatID); } \
	FORCEINLINE static uint32 __PPO__ChallengesStringTables() { return STRUCT_OFFSET(USBZChallengeManager, ChallengesStringTables); } \
	FORCEINLINE static uint32 __PPO__ChallengesStatsStringTables() { return STRUCT_OFFSET(USBZChallengeManager, ChallengesStatsStringTables); } \
	FORCEINLINE static uint32 __PPO__ChallengeMap() { return STRUCT_OFFSET(USBZChallengeManager, ChallengeMap); } \
	FORCEINLINE static uint32 __PPO__AchievementMap() { return STRUCT_OFFSET(USBZChallengeManager, AchievementMap); } \
	FORCEINLINE static uint32 __PPO__StatMap() { return STRUCT_OFFSET(USBZChallengeManager, StatMap); } \
	FORCEINLINE static uint32 __PPO__CompletedChallenges() { return STRUCT_OFFSET(USBZChallengeManager, CompletedChallenges); } \
	FORCEINLINE static uint32 __PPO__ChallengeConversionMap() { return STRUCT_OFFSET(USBZChallengeManager, ChallengeConversionMap); } \
	FORCEINLINE static uint32 __PPO__CompletedAchievementsAtStartup() { return STRUCT_OFFSET(USBZChallengeManager, CompletedAchievementsAtStartup); } \
	FORCEINLINE static uint32 __PPO__ChallengeRecordCaches() { return STRUCT_OFFSET(USBZChallengeManager, ChallengeRecordCaches); }


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZChallengeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZChallengeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
