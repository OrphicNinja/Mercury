// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_SBZObjectContainer_generated_h
#error "SBZObjectContainer.generated.h already included, missing '#pragma once' in SBZObjectContainer.h"
#endif
#define STARBREEZE_SBZObjectContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execCleanUp); \
	DECLARE_FUNCTION(execK2_GetArray); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveAt); \
	DECLARE_FUNCTION(execReset);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execCleanUp); \
	DECLARE_FUNCTION(execK2_GetArray); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveAt); \
	DECLARE_FUNCTION(execReset);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZObjectContainer(); \
	friend struct Z_Construct_UClass_USBZObjectContainer_Statics; \
public: \
	DECLARE_CLASS(USBZObjectContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZObjectContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZObjectContainer(); \
	friend struct Z_Construct_UClass_USBZObjectContainer_Statics; \
public: \
	DECLARE_CLASS(USBZObjectContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZObjectContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZObjectContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZObjectContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZObjectContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZObjectContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZObjectContainer(USBZObjectContainer&&); \
	NO_API USBZObjectContainer(const USBZObjectContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZObjectContainer(USBZObjectContainer&&); \
	NO_API USBZObjectContainer(const USBZObjectContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZObjectContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZObjectContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZObjectContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Objects() { return STRUCT_OFFSET(USBZObjectContainer, Objects); } \
	FORCEINLINE static uint32 __PPO__RestrictedObjectClass() { return STRUCT_OFFSET(USBZObjectContainer, RestrictedObjectClass); } \
	FORCEINLINE static uint32 __PPO__RestrictedInterfaceType() { return STRUCT_OFFSET(USBZObjectContainer, RestrictedInterfaceType); } \
	FORCEINLINE static uint32 __PPO__bAllowDuplicates() { return STRUCT_OFFSET(USBZObjectContainer, bAllowDuplicates); } \
	FORCEINLINE static uint32 __PPO__bKeepSorted() { return STRUCT_OFFSET(USBZObjectContainer, bKeepSorted); }


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZObjectContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZObjectContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
