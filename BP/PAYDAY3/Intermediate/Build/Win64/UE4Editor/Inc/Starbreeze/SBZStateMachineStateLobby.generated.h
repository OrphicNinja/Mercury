// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZStateMachineStateLobby_generated_h
#error "SBZStateMachineStateLobby.generated.h already included, missing '#pragma once' in SBZStateMachineStateLobby.h"
#endif
#define STARBREEZE_SBZStateMachineStateLobby_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToHost); \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execHandleWaitActionPhaseReceived); \
	DECLARE_FUNCTION(execOnMissionEnd); \
	DECLARE_FUNCTION(execReceivedHostUpdate); \
	DECLARE_FUNCTION(execResetWaitPlayersTimer); \
	DECLARE_FUNCTION(execStartWaitForServerPlayerReadyAck); \
	DECLARE_FUNCTION(execStartWaitGameTimer); \
	DECLARE_FUNCTION(execStartWaitPlayersTimer); \
	DECLARE_FUNCTION(execTryUpdateWaitPlayersTimer); \
	DECLARE_FUNCTION(execWaitGameTickSeconds); \
	DECLARE_FUNCTION(execWaitPlayersTickSeconds);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToHost); \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execHandleWaitActionPhaseReceived); \
	DECLARE_FUNCTION(execOnMissionEnd); \
	DECLARE_FUNCTION(execReceivedHostUpdate); \
	DECLARE_FUNCTION(execResetWaitPlayersTimer); \
	DECLARE_FUNCTION(execStartWaitForServerPlayerReadyAck); \
	DECLARE_FUNCTION(execStartWaitGameTimer); \
	DECLARE_FUNCTION(execStartWaitPlayersTimer); \
	DECLARE_FUNCTION(execTryUpdateWaitPlayersTimer); \
	DECLARE_FUNCTION(execWaitGameTickSeconds); \
	DECLARE_FUNCTION(execWaitPlayersTickSeconds);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateLobby(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateLobby_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateLobby, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateLobby) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateLobby(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateLobby_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateLobby, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateLobby) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateLobby(USBZStateMachineStateLobby&&); \
	NO_API USBZStateMachineStateLobby(const USBZStateMachineStateLobby&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateLobby(USBZStateMachineStateLobby&&); \
	NO_API USBZStateMachineStateLobby(const USBZStateMachineStateLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateLobby)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayersWaitTimeout() { return STRUCT_OFFSET(USBZStateMachineStateLobby, PlayersWaitTimeout); } \
	FORCEINLINE static uint32 __PPO__ActionPhasePlayersWaitTimeout() { return STRUCT_OFFSET(USBZStateMachineStateLobby, ActionPhasePlayersWaitTimeout); } \
	FORCEINLINE static uint32 __PPO__GameStartTimeout() { return STRUCT_OFFSET(USBZStateMachineStateLobby, GameStartTimeout); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
