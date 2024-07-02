// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FSBZPlayerStateAddedEvent;
class ASBZPlayerController;
struct FSBZPlayerStateRemovedEvent;
#ifdef STARBREEZE_SBZStateMachineStateActionPhase_generated_h
#error "SBZStateMachineStateActionPhase.generated.h already included, missing '#pragma once' in SBZStateMachineStateActionPhase.h"
#endif
#define STARBREEZE_SBZStateMachineStateActionPhase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execBlackScreenDoneTimeout); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execHandleMissionEnd); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateChanged); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execBlackScreenDoneTimeout); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execHandleMissionEnd); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateChanged); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateActionPhase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateActionPhase, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateActionPhase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateActionPhase(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateActionPhase, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateActionPhase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateActionPhase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateActionPhase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateActionPhase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateActionPhase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateActionPhase(USBZStateMachineStateActionPhase&&); \
	NO_API USBZStateMachineStateActionPhase(const USBZStateMachineStateActionPhase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateActionPhase(USBZStateMachineStateActionPhase&&); \
	NO_API USBZStateMachineStateActionPhase(const USBZStateMachineStateActionPhase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateActionPhase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateActionPhase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateActionPhase)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionPhaseWidget() { return STRUCT_OFFSET(USBZStateMachineStateActionPhase, ActionPhaseWidget); } \
	FORCEINLINE static uint32 __PPO__ActionPhaseData() { return STRUCT_OFFSET(USBZStateMachineStateActionPhase, ActionPhaseData); } \
	FORCEINLINE static uint32 __PPO__InitialLongTimeoutDelay() { return STRUCT_OFFSET(USBZStateMachineStateActionPhase, InitialLongTimeoutDelay); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateActionPhase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateActionPhase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
