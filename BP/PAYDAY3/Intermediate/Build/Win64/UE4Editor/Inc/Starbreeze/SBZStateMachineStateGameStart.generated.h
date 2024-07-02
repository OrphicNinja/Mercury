// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
class UWorld;
#ifdef STARBREEZE_SBZStateMachineStateGameStart_generated_h
#error "SBZStateMachineStateGameStart.generated.h already included, missing '#pragma once' in SBZStateMachineStateGameStart.h"
#endif
#define STARBREEZE_SBZStateMachineStateGameStart_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execSessionJoined); \
	DECLARE_FUNCTION(execSessionJoinStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToPartyHost); \
	DECLARE_FUNCTION(execSessionJoined); \
	DECLARE_FUNCTION(execSessionJoinStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateGameStart(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateGameStart_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateGameStart, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateGameStart)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStateMachineStateGameStart(); \
	friend struct Z_Construct_UClass_USBZStateMachineStateGameStart_Statics; \
public: \
	DECLARE_CLASS(USBZStateMachineStateGameStart, USBZClientStateMachineState, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStateMachineStateGameStart)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStateMachineStateGameStart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStateMachineStateGameStart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateGameStart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateGameStart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateGameStart(USBZStateMachineStateGameStart&&); \
	NO_API USBZStateMachineStateGameStart(const USBZStateMachineStateGameStart&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStateMachineStateGameStart(USBZStateMachineStateGameStart&&); \
	NO_API USBZStateMachineStateGameStart(const USBZStateMachineStateGameStart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStateMachineStateGameStart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStateMachineStateGameStart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStateMachineStateGameStart)


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingScreen() { return STRUCT_OFFSET(USBZStateMachineStateGameStart, LoadingScreen); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStateMachineStateGameStart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStateMachineStateGameStart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
