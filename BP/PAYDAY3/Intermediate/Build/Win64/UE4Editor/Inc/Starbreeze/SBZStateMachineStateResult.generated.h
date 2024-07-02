// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZStateMachineStateResult_generated_h
#error "SBZStateMachineStateResult.generated.h already included, missing '#pragma once' in SBZStateMachineStateResult.h"
#endif
#define STARBREEZE_SBZStateMachineStateResult_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExpireRestartTimerUpdate); \
	DECLARE_FUNCTION(execOnRestartAccepted); \
	DECLARE_FUNCTION(execOnRestartAcceptTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartCountdownTimerStarted); \
	DECLARE_FUNCTION(execOnRestartCountdownTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartTimeExpired); \
	DECLARE_FUNCTION(execSetupMergePartyDone);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExpireRestartTimerUpdate); \
	DECLARE_FUNCTION(execOnRestartAccepted); \
	DECLARE_FUNCTION(execOnRestartAcceptTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartCountdownTimerStarted); \
	DECLARE_FUNCTION(execOnRestartCountdownTimerUpdated); \
	DECLARE_FUNCTION(execOnRestartTimeExpired); \
	DECLARE_FUNCTION(execSetupMergePartyDone);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateResult(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateResult_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateResult, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateResult)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateResult(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateResult_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateResult, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateResult)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateResult(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateResult(USBZStateMachineStateResult&&); \
	NO_API USBZStateMachineStateResult(const USBZStateMachineStateResult&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateResult(USBZStateMachineStateResult&&); \
	NO_API USBZStateMachineStateResult(const USBZStateMachineStateResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateResult); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateResult)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResultWidget() { return STRUCT_OFFSET(USBZStateMachineStateResult, ResultWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerRequestedRestart() { return STRUCT_OFFSET(USBZStateMachineStateResult, PlayerRequestedRestart); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateResult_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
