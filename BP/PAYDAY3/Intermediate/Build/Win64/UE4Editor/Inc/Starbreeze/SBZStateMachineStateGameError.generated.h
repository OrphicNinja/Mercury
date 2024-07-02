// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZServiceStatus : uint8;
#ifdef STARBREEZE_SBZStateMachineStateGameError_generated_h
#error "SBZStateMachineStateGameError.generated.h already included, missing '#pragma once' in SBZStateMachineStateGameError.h"
#endif
#define STARBREEZE_SBZStateMachineStateGameError_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMissionEndPopupClosed); \
	DECLARE_FUNCTION(execSetNetworkConnected);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMissionEndPopupClosed); \
	DECLARE_FUNCTION(execSetNetworkConnected);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateGameError(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateGameError_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateGameError, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateGameError)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateGameError(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateGameError_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateGameError, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateGameError)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateGameError(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateGameError) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateGameError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateGameError); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateGameError(USBZStateMachineStateGameError&&); \
	NO_API USBZStateMachineStateGameError(const USBZStateMachineStateGameError&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateGameError(USBZStateMachineStateGameError&&); \
	NO_API USBZStateMachineStateGameError(const USBZStateMachineStateGameError&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateGameError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateGameError); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateGameError)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ErrorData() { return STRUCT_OFFSET(USBZStateMachineStateGameError, ErrorData); } \
	FORCEINLINE static uint32 __PPO__GameErrorWidget() { return STRUCT_OFFSET(USBZStateMachineStateGameError, GameErrorWidget); } \
	FORCEINLINE static uint32 __PPO__GameDataState() { return STRUCT_OFFSET(USBZStateMachineStateGameError, GameDataState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateGameError>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameError_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
