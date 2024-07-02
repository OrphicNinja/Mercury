// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZStateMachineStateDsResult_generated_h
#error "SBZStateMachineStateDsResult.generated.h already included, missing '#pragma once' in SBZStateMachineStateDsResult.h"
#endif
#define STARBREEZE_SBZStateMachineStateDsResult_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestinationMapLoaded); \
	DECLARE_FUNCTION(execOnRestartAccepted); \
	DECLARE_FUNCTION(execOnRestartAcceptTimerFinsihed); \
	DECLARE_FUNCTION(execOnRestartLevelTimeExpired); \
	DECLARE_FUNCTION(execOnRestartTimerFinsihed);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestinationMapLoaded); \
	DECLARE_FUNCTION(execOnRestartAccepted); \
	DECLARE_FUNCTION(execOnRestartAcceptTimerFinsihed); \
	DECLARE_FUNCTION(execOnRestartLevelTimeExpired); \
	DECLARE_FUNCTION(execOnRestartTimerFinsihed);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateDsResult(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateDsResult_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateDsResult, USBZDsStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateDsResult) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateDsResult(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateDsResult_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateDsResult, USBZDsStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateDsResult) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateDsResult(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateDsResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateDsResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateDsResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateDsResult(USBZStateMachineStateDsResult&&); \
	NO_API USBZStateMachineStateDsResult(const USBZStateMachineStateDsResult&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateDsResult(USBZStateMachineStateDsResult&&); \
	NO_API USBZStateMachineStateDsResult(const USBZStateMachineStateDsResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateDsResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateDsResult); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateDsResult)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResultWidget() { return STRUCT_OFFSET(USBZStateMachineStateDsResult, ResultWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerRequestedRestart() { return STRUCT_OFFSET(USBZStateMachineStateDsResult, PlayerRequestedRestart); } \
	FORCEINLINE static uint32 __PPO__RestartAcceptTimerHandler() { return STRUCT_OFFSET(USBZStateMachineStateDsResult, RestartAcceptTimerHandler); } \
	FORCEINLINE static uint32 __PPO__RestartLevelTimerHandler() { return STRUCT_OFFSET(USBZStateMachineStateDsResult, RestartLevelTimerHandler); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateDsResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateDsResult_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
