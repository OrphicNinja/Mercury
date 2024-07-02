// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZHoldOutTimerObjective_generated_h
#error "SBZHoldOutTimerObjective.generated.h already included, missing '#pragma once' in SBZHoldOutTimerObjective.h"
#endif
#define STARBREEZE_SBZHoldOutTimerObjective_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTimerFinished); \
	DECLARE_FUNCTION(execOnTimerProgressionReached);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTimerFinished); \
	DECLARE_FUNCTION(execOnTimerProgressionReached);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHoldOutTimerObjective(); \
	friend struct Z_Construct_UClass_USBZHoldOutTimerObjective_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutTimerObjective, USBZHoldOutObjectiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutTimerObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHoldOutTimerObjective(); \
	friend struct Z_Construct_UClass_USBZHoldOutTimerObjective_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutTimerObjective, USBZHoldOutObjectiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutTimerObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHoldOutTimerObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutTimerObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutTimerObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutTimerObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutTimerObjective(USBZHoldOutTimerObjective&&); \
	NO_API USBZHoldOutTimerObjective(const USBZHoldOutTimerObjective&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutTimerObjective(USBZHoldOutTimerObjective&&); \
	NO_API USBZHoldOutTimerObjective(const USBZHoldOutTimerObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutTimerObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutTimerObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHoldOutTimerObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ModifiableTimerActor() { return STRUCT_OFFSET(USBZHoldOutTimerObjective, ModifiableTimerActor); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(USBZHoldOutTimerObjective, Duration); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHoldOutTimerObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTimerObjective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
