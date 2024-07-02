// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZSecurityCompany : uint8;
enum class ESBZDifficulty : uint8;
struct FSBZOnlineMatchmakingParams;
class UPD3HeistDataAsset;
enum class ESBZOnlineSessionPhase : uint8;
enum class ESBZGameMachineStateError : uint8;
enum class EBlackScreenTransitionType : uint8;
struct FSBZEndMissionRequestData;
struct FSBZReplayInfo;
enum class ESBZReturnToIISReason : uint8;
enum class ESBZReturnToLoginReason : uint8;
enum class ESBZReturnToMainMenuReason : uint8;
#ifdef STARBREEZE_SBZGameStateMachine_generated_h
#error "SBZGameStateMachine.generated.h already included, missing '#pragma once' in SBZGameStateMachine.h"
#endif
#define STARBREEZE_SBZGameStateMachine_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMatchmakingSecurityCompany); \
	DECLARE_FUNCTION(execCanRequestSoloGame); \
	DECLARE_FUNCTION(execDebugOnlineTravel); \
	DECLARE_FUNCTION(execGetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execGetMatchmakingDifficultyIdx); \
	DECLARE_FUNCTION(execGetMatchmakingLevelIdx); \
	DECLARE_FUNCTION(execGetMatchMakingParameters); \
	DECLARE_FUNCTION(execGetMatchmakingRandomSeed); \
	DECLARE_FUNCTION(execGetMatchmakingSecuritCompaniesForHeist); \
	DECLARE_FUNCTION(execGetMatchmakingSecurityCompanies); \
	DECLARE_FUNCTION(execGetSessionPhase); \
	DECLARE_FUNCTION(execHasStartedOutro); \
	DECLARE_FUNCTION(execIsMatchmakingInProgress); \
	DECLARE_FUNCTION(execIsMatchmakingQuickMatch); \
	DECLARE_FUNCTION(execRemoveMatchmakingSecurityCompany); \
	DECLARE_FUNCTION(execRequestDefaultMatchmaking); \
	DECLARE_FUNCTION(execRequestDirectJoin); \
	DECLARE_FUNCTION(execRequestEndIntroSequence); \
	DECLARE_FUNCTION(execRequestEndOutroSequence); \
	DECLARE_FUNCTION(execRequestGameError); \
	DECLARE_FUNCTION(execRequestGameStart); \
	DECLARE_FUNCTION(execRequestGoToLobby); \
	DECLARE_FUNCTION(execRequestJobOverviewAllReady); \
	DECLARE_FUNCTION(execRequestJobOverviewComplete); \
	DECLARE_FUNCTION(execRequestJobOverviewReady); \
	DECLARE_FUNCTION(execRequestMatchmaking); \
	DECLARE_FUNCTION(execRequestMissionEnd); \
	DECLARE_FUNCTION(execRequestP2PHost); \
	DECLARE_FUNCTION(execRequestPlatformJoin); \
	DECLARE_FUNCTION(execRequestReplay); \
	DECLARE_FUNCTION(execRequestRestart); \
	DECLARE_FUNCTION(execRequestReturnToIIS); \
	DECLARE_FUNCTION(execRequestReturnToLogin); \
	DECLARE_FUNCTION(execRequestReturnToMainMenu); \
	DECLARE_FUNCTION(execRequestSoloGame); \
	DECLARE_FUNCTION(execSetIsMatchmakingQuickMatch); \
	DECLARE_FUNCTION(execSetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execSetMatchmakingDifficultyIdx); \
	DECLARE_FUNCTION(execSetMatchmakingLevelIdx); \
	DECLARE_FUNCTION(execSetMatchMakingParameters); \
	DECLARE_FUNCTION(execSetMatchmakingRandomSeed); \
	DECLARE_FUNCTION(execSetMatchmakingSecurityCompanies);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMatchmakingSecurityCompany); \
	DECLARE_FUNCTION(execCanRequestSoloGame); \
	DECLARE_FUNCTION(execDebugOnlineTravel); \
	DECLARE_FUNCTION(execGetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execGetMatchmakingDifficultyIdx); \
	DECLARE_FUNCTION(execGetMatchmakingLevelIdx); \
	DECLARE_FUNCTION(execGetMatchMakingParameters); \
	DECLARE_FUNCTION(execGetMatchmakingRandomSeed); \
	DECLARE_FUNCTION(execGetMatchmakingSecuritCompaniesForHeist); \
	DECLARE_FUNCTION(execGetMatchmakingSecurityCompanies); \
	DECLARE_FUNCTION(execGetSessionPhase); \
	DECLARE_FUNCTION(execHasStartedOutro); \
	DECLARE_FUNCTION(execIsMatchmakingInProgress); \
	DECLARE_FUNCTION(execIsMatchmakingQuickMatch); \
	DECLARE_FUNCTION(execRemoveMatchmakingSecurityCompany); \
	DECLARE_FUNCTION(execRequestDefaultMatchmaking); \
	DECLARE_FUNCTION(execRequestDirectJoin); \
	DECLARE_FUNCTION(execRequestEndIntroSequence); \
	DECLARE_FUNCTION(execRequestEndOutroSequence); \
	DECLARE_FUNCTION(execRequestGameError); \
	DECLARE_FUNCTION(execRequestGameStart); \
	DECLARE_FUNCTION(execRequestGoToLobby); \
	DECLARE_FUNCTION(execRequestJobOverviewAllReady); \
	DECLARE_FUNCTION(execRequestJobOverviewComplete); \
	DECLARE_FUNCTION(execRequestJobOverviewReady); \
	DECLARE_FUNCTION(execRequestMatchmaking); \
	DECLARE_FUNCTION(execRequestMissionEnd); \
	DECLARE_FUNCTION(execRequestP2PHost); \
	DECLARE_FUNCTION(execRequestPlatformJoin); \
	DECLARE_FUNCTION(execRequestReplay); \
	DECLARE_FUNCTION(execRequestRestart); \
	DECLARE_FUNCTION(execRequestReturnToIIS); \
	DECLARE_FUNCTION(execRequestReturnToLogin); \
	DECLARE_FUNCTION(execRequestReturnToMainMenu); \
	DECLARE_FUNCTION(execRequestSoloGame); \
	DECLARE_FUNCTION(execSetIsMatchmakingQuickMatch); \
	DECLARE_FUNCTION(execSetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execSetMatchmakingDifficultyIdx); \
	DECLARE_FUNCTION(execSetMatchmakingLevelIdx); \
	DECLARE_FUNCTION(execSetMatchMakingParameters); \
	DECLARE_FUNCTION(execSetMatchmakingRandomSeed); \
	DECLARE_FUNCTION(execSetMatchmakingSecurityCompanies);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameStateMachine(); \
	friend struct Z_Construct_UClass_USBZGameStateMachine_Statics; \
public: \
	DECLARE_CLASS(USBZGameStateMachine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameStateMachine)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameStateMachine(); \
	friend struct Z_Construct_UClass_USBZGameStateMachine_Statics; \
public: \
	DECLARE_CLASS(USBZGameStateMachine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameStateMachine)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameStateMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameStateMachine(USBZGameStateMachine&&); \
	NO_API USBZGameStateMachine(const USBZGameStateMachine&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameStateMachine(USBZGameStateMachine&&); \
	NO_API USBZGameStateMachine(const USBZGameStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameStateMachine)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateMachine() { return STRUCT_OFFSET(USBZGameStateMachine, StateMachine); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_31_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameStateMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameStateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
