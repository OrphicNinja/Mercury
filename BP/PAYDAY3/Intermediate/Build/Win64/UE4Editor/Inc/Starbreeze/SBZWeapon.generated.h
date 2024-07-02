// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWeapon_generated_h
#error "SBZWeapon.generated.h already included, missing '#pragma once' in SBZWeapon.h"
#endif
#define STARBREEZE_SBZWeapon_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZWeapon(); \
	friend struct Z_Construct_UClass_ASBZWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZWeapon, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZWeapon(); \
	friend struct Z_Construct_UClass_ASBZWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZWeapon, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWeapon(ASBZWeapon&&); \
	NO_API ASBZWeapon(const ASBZWeapon&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWeapon(ASBZWeapon&&); \
	NO_API ASBZWeapon(const ASBZWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bMergeMeshes() { return STRUCT_OFFSET(ASBZWeapon, bMergeMeshes); } \
	FORCEINLINE static uint32 __PPO__ModularMeshComponent() { return STRUCT_OFFSET(ASBZWeapon, ModularMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bIsReloading() { return STRUCT_OFFSET(ASBZWeapon, bIsReloading); } \
	FORCEINLINE static uint32 __PPO__bIsEmpty() { return STRUCT_OFFSET(ASBZWeapon, bIsEmpty); } \
	FORCEINLINE static uint32 __PPO__bIsCycle() { return STRUCT_OFFSET(ASBZWeapon, bIsCycle); } \
	FORCEINLINE static uint32 __PPO__WeaponTags() { return STRUCT_OFFSET(ASBZWeapon, WeaponTags); } \
	FORCEINLINE static uint32 __PPO__ShaderSightOffset() { return STRUCT_OFFSET(ASBZWeapon, ShaderSightOffset); } \
	FORCEINLINE static uint32 __PPO__VelocityTrackedComponentMap() { return STRUCT_OFFSET(ASBZWeapon, VelocityTrackedComponentMap); } \
	FORCEINLINE static uint32 __PPO__PrespawnedActorMap() { return STRUCT_OFFSET(ASBZWeapon, PrespawnedActorMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
