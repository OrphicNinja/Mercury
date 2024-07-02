// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZSuitConfig;
#ifdef STARBREEZE_SBZCustomizableSuitMeshComponent_generated_h
#error "SBZCustomizableSuitMeshComponent.generated.h already included, missing '#pragma once' in SBZCustomizableSuitMeshComponent.h"
#endif
#define STARBREEZE_SBZCustomizableSuitMeshComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnSkeletalMeshLoaded); \
	DECLARE_FUNCTION(execSetSuitConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnSkeletalMeshLoaded); \
	DECLARE_FUNCTION(execSetSuitConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCustomizableSuitMeshComponent(); \
	friend struct Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCustomizableSuitMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCustomizableSuitMeshComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCustomizableSuitMeshComponent(); \
	friend struct Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCustomizableSuitMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCustomizableSuitMeshComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCustomizableSuitMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCustomizableSuitMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCustomizableSuitMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCustomizableSuitMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCustomizableSuitMeshComponent(USBZCustomizableSuitMeshComponent&&); \
	NO_API USBZCustomizableSuitMeshComponent(const USBZCustomizableSuitMeshComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCustomizableSuitMeshComponent(USBZCustomizableSuitMeshComponent&&); \
	NO_API USBZCustomizableSuitMeshComponent(const USBZCustomizableSuitMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCustomizableSuitMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCustomizableSuitMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCustomizableSuitMeshComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuitConfig() { return STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, SuitConfig); } \
	FORCEINLINE static uint32 __PPO__BodyMeshComponent() { return STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, BodyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CapsuleShadowingData() { return STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, CapsuleShadowingData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCustomizableSuitMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCustomizableSuitMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
