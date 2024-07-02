// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZStateMachineStateMatchmaking_generated_h
#error "SBZStateMachineStateMatchmaking.generated.h already included, missing '#pragma once' in SBZStateMachineStateMatchmaking.h"
#endif
#define STARBREEZE_SBZStateMachineStateMatchmaking_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireMatchAcceptUnlock); \
	DECLARE_FUNCTION(execHandleLostConnectionToHost); \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execHandleMatchInfoUpdated); \
	DECLARE_FUNCTION(execHandlePlayerCountChanged); \
	DECLARE_FUNCTION(execHandleSessionBecomeOutdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireMatchAcceptUnlock); \
	DECLARE_FUNCTION(execHandleLostConnectionToHost); \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execHandleMatchInfoUpdated); \
	DECLARE_FUNCTION(execHandlePlayerCountChanged); \
	DECLARE_FUNCTION(execHandleSessionBecomeOutdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateMatchmaking(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateMatchmaking, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateMatchmaking) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateMatchmaking(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateMatchmaking, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateMatchmaking) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateMatchmaking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateMatchmaking(USBZStateMachineStateMatchmaking&&); \
	NO_API USBZStateMachineStateMatchmaking(const USBZStateMachineStateMatchmaking&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateMatchmaking(USBZStateMachineStateMatchmaking&&); \
	NO_API USBZStateMachineStateMatchmaking(const USBZStateMachineStateMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateMatchmaking)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AcceptMatchTimeMax() { return STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchTimeMax); } \
	FORCEINLINE static uint32 __PPO__AcceptMatchUnlockTimeDebug() { return STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimeDebug); } \
	FORCEINLINE static uint32 __PPO__AcceptMatchUnlockTimeShipping() { return STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimeShipping); } \
	FORCEINLINE static uint32 __PPO__AcceptMatchUnlockTimePrivateParty() { return STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimePrivateParty); } \
	FORCEINLINE static uint32 __PPO__AcceptMatchUnlockTimeCamp() { return STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimeCamp); } \
	FORCEINLINE static uint32 __PPO__MatchmakingData() { return STRUCT_OFFSET(USBZStateMachineStateMatchmaking, MatchmakingData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
