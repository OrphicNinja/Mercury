// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZEndMissionResultData;
#ifdef STARBREEZE_SBZStateMachineStateOutro_generated_h
#error "SBZStateMachineStateOutro.generated.h already included, missing '#pragma once' in SBZStateMachineStateOutro.h"
#endif
#define STARBREEZE_SBZStateMachineStateOutro_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelayedLeaveOutroSequence); \
	DECLARE_FUNCTION(execHandleMissionResultReady); \
	DECLARE_FUNCTION(execOutroSequenceTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelayedLeaveOutroSequence); \
	DECLARE_FUNCTION(execHandleMissionResultReady); \
	DECLARE_FUNCTION(execOutroSequenceTimeout);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateOutro(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateOutro_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateOutro, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateOutro)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateOutro(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateOutro_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateOutro, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateOutro)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateOutro(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateOutro) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateOutro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateOutro); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateOutro(USBZStateMachineStateOutro&&); \
	NO_API USBZStateMachineStateOutro(const USBZStateMachineStateOutro&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateOutro(USBZStateMachineStateOutro&&); \
	NO_API USBZStateMachineStateOutro(const USBZStateMachineStateOutro&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateOutro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateOutro); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateOutro)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResultData() { return STRUCT_OFFSET(USBZStateMachineStateOutro, ResultData); } \
	FORCEINLINE static uint32 __PPO__WaitingForEndResult() { return STRUCT_OFFSET(USBZStateMachineStateOutro, WaitingForEndResult); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateOutro>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateOutro_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
