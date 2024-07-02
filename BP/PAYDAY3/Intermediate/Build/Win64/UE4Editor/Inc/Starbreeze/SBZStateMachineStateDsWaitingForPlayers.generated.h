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
struct FSBZPlayerStateRemovedEvent;
#ifdef STARBREEZE_SBZStateMachineStateDsWaitingForPlayers_generated_h
#error "SBZStateMachineStateDsWaitingForPlayers.generated.h already included, missing '#pragma once' in SBZStateMachineStateDsWaitingForPlayers.h"
#endif
#define STARBREEZE_SBZStateMachineStateDsWaitingForPlayers_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execBlackScreenDoneTimeout); \
	DECLARE_FUNCTION(execCleanState); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execEndIntroSequence); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execIntroSequenceTimeout); \
	DECLARE_FUNCTION(execOnPlayersReadyTimerComplete); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived); \
	DECLARE_FUNCTION(execPlayerStartTravel); \
	DECLARE_FUNCTION(execPlayerWaitForReady); \
	DECLARE_FUNCTION(execUnregisterClient);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutoReadyTimeout); \
	DECLARE_FUNCTION(execBlackScreenDoneTimeout); \
	DECLARE_FUNCTION(execCleanState); \
	DECLARE_FUNCTION(execDropInLobbyClient); \
	DECLARE_FUNCTION(execEndIntroSequence); \
	DECLARE_FUNCTION(execHandlePlayerStateAdded); \
	DECLARE_FUNCTION(execHandlePlayerStateRemoved); \
	DECLARE_FUNCTION(execIntroSequenceTimeout); \
	DECLARE_FUNCTION(execOnPlayersReadyTimerComplete); \
	DECLARE_FUNCTION(execPlayerDisconnectedAtBeacon); \
	DECLARE_FUNCTION(execPlayerReadyReceived); \
	DECLARE_FUNCTION(execPlayerStartTravel); \
	DECLARE_FUNCTION(execPlayerWaitForReady); \
	DECLARE_FUNCTION(execUnregisterClient);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateDsWaitingForPlayers(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateDsWaitingForPlayers, USBZDsStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateDsWaitingForPlayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateDsWaitingForPlayers(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateDsWaitingForPlayers, USBZDsStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateDsWaitingForPlayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateDsWaitingForPlayers(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateDsWaitingForPlayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateDsWaitingForPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateDsWaitingForPlayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateDsWaitingForPlayers(USBZStateMachineStateDsWaitingForPlayers&&); \
	NO_API USBZStateMachineStateDsWaitingForPlayers(const USBZStateMachineStateDsWaitingForPlayers&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateDsWaitingForPlayers(USBZStateMachineStateDsWaitingForPlayers&&); \
	NO_API USBZStateMachineStateDsWaitingForPlayers(const USBZStateMachineStateDsWaitingForPlayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateDsWaitingForPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateDsWaitingForPlayers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateDsWaitingForPlayers)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayersReadyTimeoutValue() { return STRUCT_OFFSET(USBZStateMachineStateDsWaitingForPlayers, PlayersReadyTimeoutValue); } \
	FORCEINLINE static uint32 __PPO__PlayersReadyTimer() { return STRUCT_OFFSET(USBZStateMachineStateDsWaitingForPlayers, PlayersReadyTimer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateDsWaitingForPlayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsWaitingForPlayers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
