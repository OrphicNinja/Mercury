// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZStateMachineStateABPreMatch_generated_h
#error "SBZStateMachineStateABPreMatch.generated.h already included, missing '#pragma once' in SBZStateMachineStateABPreMatch.h"
#endif
#define STARBREEZE_SBZStateMachineStateABPreMatch_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelayedTravelToServer); \
	DECLARE_FUNCTION(execHandleBeaconDisconnect); \
	DECLARE_FUNCTION(execHandleInitializeTravel); \
	DECLARE_FUNCTION(execHandleLobbyStateUpdated); \
	DECLARE_FUNCTION(execHandleReceivedPlayerReadyAck); \
	DECLARE_FUNCTION(execOnPlayerReadyStatusUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelayedTravelToServer); \
	DECLARE_FUNCTION(execHandleBeaconDisconnect); \
	DECLARE_FUNCTION(execHandleInitializeTravel); \
	DECLARE_FUNCTION(execHandleLobbyStateUpdated); \
	DECLARE_FUNCTION(execHandleReceivedPlayerReadyAck); \
	DECLARE_FUNCTION(execOnPlayerReadyStatusUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateABPreMatch(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateABPreMatch, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateABPreMatch)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateABPreMatch(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateABPreMatch, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateABPreMatch)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateABPreMatch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateABPreMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateABPreMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateABPreMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateABPreMatch(USBZStateMachineStateABPreMatch&&); \
	NO_API USBZStateMachineStateABPreMatch(const USBZStateMachineStateABPreMatch&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateABPreMatch(USBZStateMachineStateABPreMatch&&); \
	NO_API USBZStateMachineStateABPreMatch(const USBZStateMachineStateABPreMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateABPreMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateABPreMatch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateABPreMatch)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MatchmakingData() { return STRUCT_OFFSET(USBZStateMachineStateABPreMatch, MatchmakingData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateABPreMatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABPreMatch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
