// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWeaponAnimation_generated_h
#error "SBZWeaponAnimation.generated.h already included, missing '#pragma once' in SBZWeaponAnimation.h"
#endif
#define STARBREEZE_SBZWeaponAnimation_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWeaponAnimation(); \
	friend struct Z_Construct_UClass_USBZWeaponAnimation_Statics; \
public: \
	DECLARE_CLASS(USBZWeaponAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWeaponAnimation)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWeaponAnimation(); \
	friend struct Z_Construct_UClass_USBZWeaponAnimation_Statics; \
public: \
	DECLARE_CLASS(USBZWeaponAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWeaponAnimation)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWeaponAnimation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWeaponAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWeaponAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWeaponAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWeaponAnimation(USBZWeaponAnimation&&); \
	NO_API USBZWeaponAnimation(const USBZWeaponAnimation&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWeaponAnimation(USBZWeaponAnimation&&); \
	NO_API USBZWeaponAnimation(const USBZWeaponAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWeaponAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWeaponAnimation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZWeaponAnimation)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RBExternalForce() { return STRUCT_OFFSET(USBZWeaponAnimation, RBExternalForce); } \
	FORCEINLINE static uint32 __PPO__RBMinVelocity() { return STRUCT_OFFSET(USBZWeaponAnimation, RBMinVelocity); } \
	FORCEINLINE static uint32 __PPO__RBMaxVelocity() { return STRUCT_OFFSET(USBZWeaponAnimation, RBMaxVelocity); } \
	FORCEINLINE static uint32 __PPO__RBCoefHVelDampening() { return STRUCT_OFFSET(USBZWeaponAnimation, RBCoefHVelDampening); } \
	FORCEINLINE static uint32 __PPO__AlphaNotAnimatedBones() { return STRUCT_OFFSET(USBZWeaponAnimation, AlphaNotAnimatedBones); } \
	FORCEINLINE static uint32 __PPO__AlphaCopyBoneDeltaFirst() { return STRUCT_OFFSET(USBZWeaponAnimation, AlphaCopyBoneDeltaFirst); } \
	FORCEINLINE static uint32 __PPO__AlphaCopyBoneDeltaSecond() { return STRUCT_OFFSET(USBZWeaponAnimation, AlphaCopyBoneDeltaSecond); } \
	FORCEINLINE static uint32 __PPO__IdleStatePose() { return STRUCT_OFFSET(USBZWeaponAnimation, IdleStatePose); } \
	FORCEINLINE static uint32 __PPO__EmptyStatePose() { return STRUCT_OFFSET(USBZWeaponAnimation, EmptyStatePose); } \
	FORCEINLINE static uint32 __PPO__CycleStatePose() { return STRUCT_OFFSET(USBZWeaponAnimation, CycleStatePose); } \
	FORCEINLINE static uint32 __PPO__StatePose() { return STRUCT_OFFSET(USBZWeaponAnimation, StatePose); } \
	FORCEINLINE static uint32 __PPO__AdditiveStatePose() { return STRUCT_OFFSET(USBZWeaponAnimation, AdditiveStatePose); } \
	FORCEINLINE static uint32 __PPO__NotAnimatedBones() { return STRUCT_OFFSET(USBZWeaponAnimation, NotAnimatedBones); } \
	FORCEINLINE static uint32 __PPO__CopyBoneDeltaSourceFirst() { return STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaSourceFirst); } \
	FORCEINLINE static uint32 __PPO__CopyBoneDeltaTargetsFirst() { return STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaTargetsFirst); } \
	FORCEINLINE static uint32 __PPO__CopyBoneDeltaSourceSecond() { return STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaSourceSecond); } \
	FORCEINLINE static uint32 __PPO__CopyBoneDeltaTargetsSecond() { return STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaTargetsSecond); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(USBZWeaponAnimation, Weapon); } \
	FORCEINLINE static uint32 __PPO__AnimationCollection() { return STRUCT_OFFSET(USBZWeaponAnimation, AnimationCollection); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(USBZWeaponAnimation, Character); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWeaponAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWeaponAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
