// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZHoldOutObjectiveBase_generated_h
#error "SBZHoldOutObjectiveBase.generated.h already included, missing '#pragma once' in SBZHoldOutObjectiveBase.h"
#endif
#define STARBREEZE_SBZHoldOutObjectiveBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxProgressCount); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetProgressCount); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsOptional);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxProgressCount); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetProgressCount); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsOptional);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHoldOutObjectiveBase(); \
	friend struct Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutObjectiveBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutObjectiveBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHoldOutObjectiveBase(); \
	friend struct Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutObjectiveBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutObjectiveBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHoldOutObjectiveBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutObjectiveBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutObjectiveBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutObjectiveBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutObjectiveBase(USBZHoldOutObjectiveBase&&); \
	NO_API USBZHoldOutObjectiveBase(const USBZHoldOutObjectiveBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutObjectiveBase(USBZHoldOutObjectiveBase&&); \
	NO_API USBZHoldOutObjectiveBase(const USBZHoldOutObjectiveBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutObjectiveBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutObjectiveBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZHoldOutObjectiveBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bReverseCondition() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, bReverseCondition); } \
	FORCEINLINE static uint32 __PPO__bIsOptional() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, bIsOptional); } \
	FORCEINLINE static uint32 __PPO__bBroadcastProgressChanged() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, bBroadcastProgressChanged); } \
	FORCEINLINE static uint32 __PPO__UIObjective() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, UIObjective); } \
	FORCEINLINE static uint32 __PPO__GrantedTagsOnStart() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnStart); } \
	FORCEINLINE static uint32 __PPO__GrantedTagsOnProgressIncreased() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnProgressIncreased); } \
	FORCEINLINE static uint32 __PPO__GrantedTagsOnProgressDecreased() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnProgressDecreased); } \
	FORCEINLINE static uint32 __PPO__GrantedTagsOnSuccess() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnSuccess); } \
	FORCEINLINE static uint32 __PPO__GrantedTagsOnFail() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnFail); } \
	FORCEINLINE static uint32 __PPO__RemovedTagsOnStart() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnStart); } \
	FORCEINLINE static uint32 __PPO__RemovedTagsOnProgressIncreased() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnProgressIncreased); } \
	FORCEINLINE static uint32 __PPO__RemovedTagsOnProgressDecreased() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnProgressDecreased); } \
	FORCEINLINE static uint32 __PPO__RemovedTagsOnSuccess() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnSuccess); } \
	FORCEINLINE static uint32 __PPO__RemovedTagsOnFail() { return STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnFail); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHoldOutObjectiveBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutObjectiveBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
