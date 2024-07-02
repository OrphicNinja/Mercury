// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FSBZEndMissionResultData;
struct FSBZPlayerStateAddedEvent;
struct FSBZPlayerStateRemovedEvent;
#ifdef STARBREEZE_SBZStateMachineStateDsActionPhase_generated_h
#error "SBZStateMachineStateDsActionPhase.generated.h already included, missing '#pragma once' in SBZStateMachineStateDsActionPhase.h"
#endif
#define STARBREEZE_SBZStateMachineStateDsActionPhase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execHandleMissionEnd); \
	DECLARE_FUNCTION(execHandleMissionResultReady); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived); \
	DECLARE_FUNCTION(execPlayerStartTravel); \
	DECLARE_FUNCTION(execPlayerWaitForReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execHandleMissionEnd); \
	DECLARE_FUNCTION(execHandleMissionResultReady); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived); \
	DECLARE_FUNCTION(execPlayerStartTravel); \
	DECLARE_FUNCTION(execPlayerWaitForReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateDsActionPhase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateDsActionPhase, USBZDsStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateDsActionPhase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateDsActionPhase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateDsActionPhase, USBZDsStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateDsActionPhase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateDsActionPhase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateDsActionPhase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateDsActionPhase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateDsActionPhase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateDsActionPhase(USBZStateMachineStateDsActionPhase&&); \
	NO_API USBZStateMachineStateDsActionPhase(const USBZStateMachineStateDsActionPhase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateDsActionPhase(USBZStateMachineStateDsActionPhase&&); \
	NO_API USBZStateMachineStateDsActionPhase(const USBZStateMachineStateDsActionPhase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateDsActionPhase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateDsActionPhase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateDsActionPhase)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionPhaseData() { return STRUCT_OFFSET(USBZStateMachineStateDsActionPhase, ActionPhaseData); } \
	FORCEINLINE static uint32 __PPO__InitialLongTimeoutDelay() { return STRUCT_OFFSET(USBZStateMachineStateDsActionPhase, InitialLongTimeoutDelay); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateDsActionPhase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsActionPhase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
