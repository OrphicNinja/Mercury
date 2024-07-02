// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZStateMachineStateWaitingActionPhaseBase_generated_h
#error "SBZStateMachineStateWaitingActionPhaseBase.generated.h already included, missing '#pragma once' in SBZStateMachineStateWaitingActionPhaseBase.h"
#endif
#define STARBREEZE_SBZStateMachineStateWaitingActionPhaseBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelayedNetworkBeaconError); \
	DECLARE_FUNCTION(execHandleBeaconNetworkError); \
	DECLARE_FUNCTION(execHandleCinematicStarted); \
	DECLARE_FUNCTION(execHandleCinematicStopped); \
	DECLARE_FUNCTION(execHandleGameReady); \
	DECLARE_FUNCTION(execHandleNetworkError); \
	DECLARE_FUNCTION(execHandleTransitionGameModeReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelayedNetworkBeaconError); \
	DECLARE_FUNCTION(execHandleBeaconNetworkError); \
	DECLARE_FUNCTION(execHandleCinematicStarted); \
	DECLARE_FUNCTION(execHandleCinematicStopped); \
	DECLARE_FUNCTION(execHandleGameReady); \
	DECLARE_FUNCTION(execHandleNetworkError); \
	DECLARE_FUNCTION(execHandleTransitionGameModeReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateWaitingActionPhaseBase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateWaitingActionPhaseBase, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateWaitingActionPhaseBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateWaitingActionPhaseBase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateWaitingActionPhaseBase, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateWaitingActionPhaseBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateWaitingActionPhaseBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateWaitingActionPhaseBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateWaitingActionPhaseBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateWaitingActionPhaseBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateWaitingActionPhaseBase(USBZStateMachineStateWaitingActionPhaseBase&&); \
	NO_API USBZStateMachineStateWaitingActionPhaseBase(const USBZStateMachineStateWaitingActionPhaseBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateWaitingActionPhaseBase(USBZStateMachineStateWaitingActionPhaseBase&&); \
	NO_API USBZStateMachineStateWaitingActionPhaseBase(const USBZStateMachineStateWaitingActionPhaseBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateWaitingActionPhaseBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateWaitingActionPhaseBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateWaitingActionPhaseBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransitionTimeOutTime() { return STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhaseBase, TransitionTimeOutTime); } \
	FORCEINLINE static uint32 __PPO__WaitActionPhaseData() { return STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhaseBase, WaitActionPhaseData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateWaitingActionPhaseBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateWaitingActionPhaseBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
