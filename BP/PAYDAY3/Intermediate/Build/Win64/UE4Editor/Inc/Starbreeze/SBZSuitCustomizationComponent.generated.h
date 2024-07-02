// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FSBZSuitConfig;
#ifdef STARBREEZE_SBZSuitCustomizationComponent_generated_h
#error "SBZSuitCustomizationComponent.generated.h already included, missing '#pragma once' in SBZSuitCustomizationComponent.h"
#endif
#define STARBREEZE_SBZSuitCustomizationComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnSkeletalMeshLoaded); \
	DECLARE_FUNCTION(execSetMeshComponent); \
	DECLARE_FUNCTION(execSetSuitConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnSkeletalMeshLoaded); \
	DECLARE_FUNCTION(execSetMeshComponent); \
	DECLARE_FUNCTION(execSetSuitConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSuitCustomizationComponent(); \
	friend struct Z_Construct_UClass_USBZSuitCustomizationComponent_Statics; \
public: \
	DECLARE_CLASS(USBZSuitCustomizationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSuitCustomizationComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSuitCustomizationComponent(); \
	friend struct Z_Construct_UClass_USBZSuitCustomizationComponent_Statics; \
public: \
	DECLARE_CLASS(USBZSuitCustomizationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSuitCustomizationComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSuitCustomizationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSuitCustomizationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSuitCustomizationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSuitCustomizationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSuitCustomizationComponent(USBZSuitCustomizationComponent&&); \
	NO_API USBZSuitCustomizationComponent(const USBZSuitCustomizationComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSuitCustomizationComponent(USBZSuitCustomizationComponent&&); \
	NO_API USBZSuitCustomizationComponent(const USBZSuitCustomizationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSuitCustomizationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSuitCustomizationComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSuitCustomizationComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(USBZSuitCustomizationComponent, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__SuitConfig() { return STRUCT_OFFSET(USBZSuitCustomizationComponent, SuitConfig); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSuitCustomizationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSuitCustomizationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
