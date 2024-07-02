// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineSessionPhase : uint8;
struct FSBZRegistrationFieldInfo;
struct FSBZLoginFieldInfo;
struct FSBZOnlineMatchmakingParams;
struct FSBZEndMissionRequestData;
struct FSBZReplayInfo;
enum class ESBZReturnToIISReason : uint8;
enum class ESBZReturnToLoginReason : uint8;
enum class ESBZReturnToMainMenuReason : uint8;
#ifdef STARBREEZE_SBZClientStateMachine_generated_h
#error "SBZClientStateMachine.generated.h already included, missing '#pragma once' in SBZClientStateMachine.h"
#endif
#define STARBREEZE_SBZClientStateMachine_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyPreplanningAsset); \
	DECLARE_FUNCTION(execCanRequestSoloGame); \
	DECLARE_FUNCTION(execGetCurrentStateNameString); \
	DECLARE_FUNCTION(execGetSessionPhase); \
	DECLARE_FUNCTION(execHasStartedOutro); \
	DECLARE_FUNCTION(execIsMatchmakingInProgress); \
	DECLARE_FUNCTION(execisPreMatchAsyncLoadingDone); \
	DECLARE_FUNCTION(execOnPartyHostEnteredLobby); \
	DECLARE_FUNCTION(execOnPartyHostEnteredMainMenu); \
	DECLARE_FUNCTION(execOnPartyHostEnteredMatchmaking); \
	DECLARE_FUNCTION(execOnPopUpClosedIsNotPartyLeader); \
	DECLARE_FUNCTION(execOnUserSwitchDuringInvite); \
	DECLARE_FUNCTION(execRemoveAppliedPreplanningAsset); \
	DECLARE_FUNCTION(execRequestCreateAccount); \
	DECLARE_FUNCTION(execRequestDefaultMatchmaking); \
	DECLARE_FUNCTION(execRequestDirectJoin); \
	DECLARE_FUNCTION(execRequestEndIntroSequence); \
	DECLARE_FUNCTION(execRequestEndOutroSequence); \
	DECLARE_FUNCTION(execRequestGameStart); \
	DECLARE_FUNCTION(execRequestGoToLobby); \
	DECLARE_FUNCTION(execRequestLogin); \
	DECLARE_FUNCTION(execRequestLoginWithDeviceID); \
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
	DECLARE_FUNCTION(execRequestSteamLogin); \
	DECLARE_FUNCTION(execRequestTravelToServer);


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyPreplanningAsset); \
	DECLARE_FUNCTION(execCanRequestSoloGame); \
	DECLARE_FUNCTION(execGetCurrentStateNameString); \
	DECLARE_FUNCTION(execGetSessionPhase); \
	DECLARE_FUNCTION(execHasStartedOutro); \
	DECLARE_FUNCTION(execIsMatchmakingInProgress); \
	DECLARE_FUNCTION(execisPreMatchAsyncLoadingDone); \
	DECLARE_FUNCTION(execOnPartyHostEnteredLobby); \
	DECLARE_FUNCTION(execOnPartyHostEnteredMainMenu); \
	DECLARE_FUNCTION(execOnPartyHostEnteredMatchmaking); \
	DECLARE_FUNCTION(execOnPopUpClosedIsNotPartyLeader); \
	DECLARE_FUNCTION(execOnUserSwitchDuringInvite); \
	DECLARE_FUNCTION(execRemoveAppliedPreplanningAsset); \
	DECLARE_FUNCTION(execRequestCreateAccount); \
	DECLARE_FUNCTION(execRequestDefaultMatchmaking); \
	DECLARE_FUNCTION(execRequestDirectJoin); \
	DECLARE_FUNCTION(execRequestEndIntroSequence); \
	DECLARE_FUNCTION(execRequestEndOutroSequence); \
	DECLARE_FUNCTION(execRequestGameStart); \
	DECLARE_FUNCTION(execRequestGoToLobby); \
	DECLARE_FUNCTION(execRequestLogin); \
	DECLARE_FUNCTION(execRequestLoginWithDeviceID); \
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
	DECLARE_FUNCTION(execRequestSteamLogin); \
	DECLARE_FUNCTION(execRequestTravelToServer);


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZClientStateMachine(); \
	friend struct Z_Construct_UClass_USBZClientStateMachine_Statics; \
public: \
	DECLARE_CLASS(USBZClientStateMachine, USBZCommonStateMachine, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZClientStateMachine)


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZClientStateMachine(); \
	friend struct Z_Construct_UClass_USBZClientStateMachine_Statics; \
public: \
	DECLARE_CLASS(USBZClientStateMachine, USBZCommonStateMachine, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZClientStateMachine)


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZClientStateMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZClientStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZClientStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZClientStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZClientStateMachine(USBZClientStateMachine&&); \
	NO_API USBZClientStateMachine(const USBZClientStateMachine&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZClientStateMachine(USBZClientStateMachine&&); \
	NO_API USBZClientStateMachine(const USBZClientStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZClientStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZClientStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZClientStateMachine)


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateEnums() { return STRUCT_OFFSET(USBZClientStateMachine, StateEnums); } \
	FORCEINLINE static uint32 __PPO__LoadingScreen() { return STRUCT_OFFSET(USBZClientStateMachine, LoadingScreen); }


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZClientStateMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZClientStateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
