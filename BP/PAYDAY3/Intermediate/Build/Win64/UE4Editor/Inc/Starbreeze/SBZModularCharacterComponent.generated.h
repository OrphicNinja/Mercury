// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZOutlineComponent;
class USkeletalMeshComponent;
class USBZCustomizableSuitMeshComponent;
class USkeletalMesh;
#ifdef STARBREEZE_SBZModularCharacterComponent_generated_h
#error "SBZModularCharacterComponent.generated.h already included, missing '#pragma once' in SBZModularCharacterComponent.h"
#endif
#define STARBREEZE_SBZModularCharacterComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToOutline); \
	DECLARE_FUNCTION(execGetBodyMeshComponent); \
	DECLARE_FUNCTION(execGetGlovesMeshComponent); \
	DECLARE_FUNCTION(execGetSuitMeshComponent); \
	DECLARE_FUNCTION(execSetBodyMesh); \
	DECLARE_FUNCTION(execSetGlovesMesh); \
	DECLARE_FUNCTION(execSetSuitMesh);


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToOutline); \
	DECLARE_FUNCTION(execGetBodyMeshComponent); \
	DECLARE_FUNCTION(execGetGlovesMeshComponent); \
	DECLARE_FUNCTION(execGetSuitMeshComponent); \
	DECLARE_FUNCTION(execSetBodyMesh); \
	DECLARE_FUNCTION(execSetGlovesMesh); \
	DECLARE_FUNCTION(execSetSuitMesh);


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZModularCharacterComponent(); \
	friend struct Z_Construct_UClass_USBZModularCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(USBZModularCharacterComponent, USBZSkeletalMeshComponentBudgeted, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZModularCharacterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZModularCharacterComponent(); \
	friend struct Z_Construct_UClass_USBZModularCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(USBZModularCharacterComponent, USBZSkeletalMeshComponentBudgeted, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZModularCharacterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZModularCharacterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZModularCharacterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZModularCharacterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZModularCharacterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZModularCharacterComponent(USBZModularCharacterComponent&&); \
	NO_API USBZModularCharacterComponent(const USBZModularCharacterComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZModularCharacterComponent(USBZModularCharacterComponent&&); \
	NO_API USBZModularCharacterComponent(const USBZModularCharacterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZModularCharacterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZModularCharacterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZModularCharacterComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuitCapsuleShadowingData() { return STRUCT_OFFSET(USBZModularCharacterComponent, SuitCapsuleShadowingData); } \
	FORCEINLINE static uint32 __PPO__SuitMeshComponent() { return STRUCT_OFFSET(USBZModularCharacterComponent, SuitMeshComponent); } \
	FORCEINLINE static uint32 __PPO__GlovesMeshComponent() { return STRUCT_OFFSET(USBZModularCharacterComponent, GlovesMeshComponent); } \
	FORCEINLINE static uint32 __PPO__BodyMeshComponent() { return STRUCT_OFFSET(USBZModularCharacterComponent, BodyMeshComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZModularCharacterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModularCharacterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
