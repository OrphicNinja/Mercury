// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
class UWorld;
#ifdef STARBREEZE_SBZStateMachineStateWaitingActionPhase_generated_h
#error "SBZStateMachineStateWaitingActionPhase.generated.h already included, missing '#pragma once' in SBZStateMachineStateWaitingActionPhase.h"
#endif
#define STARBREEZE_SBZStateMachineStateWaitingActionPhase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConsumePreplanningAssets); \
	DECLARE_FUNCTION(execDelayedNetworkBeaconError); \
	DECLARE_FUNCTION(execHandleBeaconNetworkError); \
	DECLARE_FUNCTION(execHandleGameStateReady); \
	DECLARE_FUNCTION(execHandleJoinedHost); \
	DECLARE_FUNCTION(execHandleNetworkError); \
	DECLARE_FUNCTION(execHandlePlayerControllerReady); \
	DECLARE_FUNCTION(execTravelToHostTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConsumePreplanningAssets); \
	DECLARE_FUNCTION(execDelayedNetworkBeaconError); \
	DECLARE_FUNCTION(execHandleBeaconNetworkError); \
	DECLARE_FUNCTION(execHandleGameStateReady); \
	DECLARE_FUNCTION(execHandleJoinedHost); \
	DECLARE_FUNCTION(execHandleNetworkError); \
	DECLARE_FUNCTION(execHandlePlayerControllerReady); \
	DECLARE_FUNCTION(execTravelToHostTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateWaitingActionPhase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateWaitingActionPhase, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateWaitingActionPhase)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateWaitingActionPhase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateWaitingActionPhase, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateWaitingActionPhase)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateWaitingActionPhase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateWaitingActionPhase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateWaitingActionPhase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateWaitingActionPhase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateWaitingActionPhase(USBZStateMachineStateWaitingActionPhase&&); \
	NO_API USBZStateMachineStateWaitingActionPhase(const USBZStateMachineStateWaitingActionPhase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateWaitingActionPhase(USBZStateMachineStateWaitingActionPhase&&); \
	NO_API USBZStateMachineStateWaitingActionPhase(const USBZStateMachineStateWaitingActionPhase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateWaitingActionPhase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateWaitingActionPhase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateWaitingActionPhase)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingScreen() { return STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhase, LoadingScreen); } \
	FORCEINLINE static uint32 __PPO__WaitingActionPhaseData() { return STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhase, WaitingActionPhaseData); } \
	FORCEINLINE static uint32 __PPO__TravelToHostTimer() { return STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhase, TravelToHostTimer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateWaitingActionPhase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
