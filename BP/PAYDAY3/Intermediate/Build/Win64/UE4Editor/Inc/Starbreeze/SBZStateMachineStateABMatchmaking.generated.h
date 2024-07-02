// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZStateMachineStateABMatchmaking_generated_h
#error "SBZStateMachineStateABMatchmaking.generated.h already included, missing '#pragma once' in SBZStateMachineStateABMatchmaking.h"
#endif
#define STARBREEZE_SBZStateMachineStateABMatchmaking_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleBeaconDisconnect);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleBeaconDisconnect);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateABMatchmaking(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateABMatchmaking, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateABMatchmaking)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateABMatchmaking(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateABMatchmaking, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateABMatchmaking)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateABMatchmaking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateABMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateABMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateABMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateABMatchmaking(USBZStateMachineStateABMatchmaking&&); \
	NO_API USBZStateMachineStateABMatchmaking(const USBZStateMachineStateABMatchmaking&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateABMatchmaking(USBZStateMachineStateABMatchmaking&&); \
	NO_API USBZStateMachineStateABMatchmaking(const USBZStateMachineStateABMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateABMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateABMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateABMatchmaking)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingScreen() { return STRUCT_OFFSET(USBZStateMachineStateABMatchmaking, LoadingScreen); } \
	FORCEINLINE static uint32 __PPO__MatchmakingData() { return STRUCT_OFFSET(USBZStateMachineStateABMatchmaking, MatchmakingData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateABMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateABMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
