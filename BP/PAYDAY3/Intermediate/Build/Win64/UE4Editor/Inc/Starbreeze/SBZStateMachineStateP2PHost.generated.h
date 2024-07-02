// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef STARBREEZE_SBZStateMachineStateP2PHost_generated_h
#error "SBZStateMachineStateP2PHost.generated.h already included, missing '#pragma once' in SBZStateMachineStateP2PHost.h"
#endif
#define STARBREEZE_SBZStateMachineStateP2PHost_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostLoadMap);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostLoadMap);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateP2PHost(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateP2PHost_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateP2PHost, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateP2PHost)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateP2PHost(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateP2PHost_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateP2PHost, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateP2PHost)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateP2PHost(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateP2PHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateP2PHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateP2PHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateP2PHost(USBZStateMachineStateP2PHost&&); \
	NO_API USBZStateMachineStateP2PHost(const USBZStateMachineStateP2PHost&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateP2PHost(USBZStateMachineStateP2PHost&&); \
	NO_API USBZStateMachineStateP2PHost(const USBZStateMachineStateP2PHost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateP2PHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateP2PHost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateP2PHost)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MatchmakingData() { return STRUCT_OFFSET(USBZStateMachineStateP2PHost, MatchmakingData); } \
	FORCEINLINE static uint32 __PPO__AccelByteDS() { return STRUCT_OFFSET(USBZStateMachineStateP2PHost, AccelByteDS); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateP2PHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateP2PHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
