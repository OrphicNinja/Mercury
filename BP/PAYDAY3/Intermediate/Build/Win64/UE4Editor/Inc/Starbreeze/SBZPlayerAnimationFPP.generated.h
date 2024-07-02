// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlayerAnimationFPP_generated_h
#error "SBZPlayerAnimationFPP.generated.h already included, missing '#pragma once' in SBZPlayerAnimationFPP.h"
#endif
#define STARBREEZE_SBZPlayerAnimationFPP_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerAnimationFPP(); \
	friend struct Z_Construct_UClass_USBZPlayerAnimationFPP_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerAnimationFPP, USBZCharacterAnimation, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerAnimationFPP)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerAnimationFPP(); \
	friend struct Z_Construct_UClass_USBZPlayerAnimationFPP_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerAnimationFPP, USBZCharacterAnimation, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerAnimationFPP)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerAnimationFPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerAnimationFPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerAnimationFPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerAnimationFPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerAnimationFPP(USBZPlayerAnimationFPP&&); \
	NO_API USBZPlayerAnimationFPP(const USBZPlayerAnimationFPP&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerAnimationFPP(USBZPlayerAnimationFPP&&); \
	NO_API USBZPlayerAnimationFPP(const USBZPlayerAnimationFPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerAnimationFPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerAnimationFPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPlayerAnimationFPP)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PoseType() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, PoseType); } \
	FORCEINLINE static uint32 __PPO__RightHandGripAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandGripAlpha); } \
	FORCEINLINE static uint32 __PPO__WeaponBoneLocationOffset() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponBoneLocationOffset); } \
	FORCEINLINE static uint32 __PPO__WeaponBoneRotationOffset() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponBoneRotationOffset); } \
	FORCEINLINE static uint32 __PPO__LeftHandGripAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandGripAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandIKAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandLocalIKAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandLocalIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandWorldIKAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandWorldIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightHandIKAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentLocation() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentLocation); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentLocation() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandAttachmentLocation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentRotation() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentRotation); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentRotation() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandAttachmentRotation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentWorldLocation() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentWorldLocation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentWorldRotation() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentWorldRotation); } \
	FORCEINLINE static uint32 __PPO__AdditiveLeftHandAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveLeftHandAlpha); } \
	FORCEINLINE static uint32 __PPO__AdditiveAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveAlpha); } \
	FORCEINLINE static uint32 __PPO__AdditiveMoveAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveAlpha); } \
	FORCEINLINE static uint32 __PPO__AdditiveCameraAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveCameraAlpha); } \
	FORCEINLINE static uint32 __PPO__AdditiveMovePlayRate() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMovePlayRate); } \
	FORCEINLINE static uint32 __PPO__AdditiveDetailAlpha() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveDetailAlpha); } \
	FORCEINLINE static uint32 __PPO__MoveGaitValue() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, MoveGaitValue); } \
	FORCEINLINE static uint32 __PPO__RightHandOnlyRecoilBlendWeight() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandOnlyRecoilBlendWeight); } \
	FORCEINLINE static uint32 __PPO__WeaponTankingData() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponTankingData); } \
	FORCEINLINE static uint32 __PPO__WeaponWallReactionData() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponWallReactionData); } \
	FORCEINLINE static uint32 __PPO__AdditiveMoveType() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveType); } \
	FORCEINLINE static uint32 __PPO__IdlePose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, IdlePose); } \
	FORCEINLINE static uint32 __PPO__IdleAdditivePose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleAdditivePose); } \
	FORCEINLINE static uint32 __PPO__IdleADSPose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleADSPose); } \
	FORCEINLINE static uint32 __PPO__IdleHSInstigatorPose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleHSInstigatorPose); } \
	FORCEINLINE static uint32 __PPO__IdleHSInstigatorADSPose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleHSInstigatorADSPose); } \
	FORCEINLINE static uint32 __PPO__RunPose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, RunPose); } \
	FORCEINLINE static uint32 __PPO__AdditiveMove() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMove); } \
	FORCEINLINE static uint32 __PPO__AdditiveMoveADS() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveADS); } \
	FORCEINLINE static uint32 __PPO__AdditiveMoveLeftHandEquipped() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveLeftHandEquipped); } \
	FORCEINLINE static uint32 __PPO__AdditiveMoveLeftHandEquippedADS() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveLeftHandEquippedADS); } \
	FORCEINLINE static uint32 __PPO__LeftHandEquippedIdle() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandEquippedIdle); } \
	FORCEINLINE static uint32 __PPO__LeftHandEquippedUsingIdle() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandEquippedUsingIdle); } \
	FORCEINLINE static uint32 __PPO__EquippableLeftGripPose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, EquippableLeftGripPose); } \
	FORCEINLINE static uint32 __PPO__EquippableRightGripPose() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, EquippableRightGripPose); } \
	FORCEINLINE static uint32 __PPO__AdditiveIdleLeftHand() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveIdleLeftHand); } \
	FORCEINLINE static uint32 __PPO__EnterRunMontage() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, EnterRunMontage); } \
	FORCEINLINE static uint32 __PPO__ExitRunMontage() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, ExitRunMontage); } \
	FORCEINLINE static uint32 __PPO__LeftHandIdleAssetPlayerData() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandIdleAssetPlayerData); } \
	FORCEINLINE static uint32 __PPO__PlayerCharacter() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, PlayerCharacter); } \
	FORCEINLINE static uint32 __PPO__AnimationCollectionFPP() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, AnimationCollectionFPP); } \
	FORCEINLINE static uint32 __PPO__CurrentTraverseMontage() { return STRUCT_OFFSET(USBZPlayerAnimationFPP, CurrentTraverseMontage); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerAnimationFPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerAnimationFPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
