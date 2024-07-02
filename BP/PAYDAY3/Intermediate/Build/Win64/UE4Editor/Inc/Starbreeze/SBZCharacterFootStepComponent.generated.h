// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCharacterFootStepComponent_generated_h
#error "SBZCharacterFootStepComponent.generated.h already included, missing '#pragma once' in SBZCharacterFootStepComponent.h"
#endif
#define STARBREEZE_SBZCharacterFootStepComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterFootStepComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterFootStepComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterFootStepComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterFootStepComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterFootStepComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterFootStepComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterFootStepComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterFootStepComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterFootStepComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterFootStepComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterFootStepComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterFootStepComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterFootStepComponent(USBZCharacterFootStepComponent&&); \
	NO_API USBZCharacterFootStepComponent(const USBZCharacterFootStepComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterFootStepComponent(USBZCharacterFootStepComponent&&); \
	NO_API USBZCharacterFootStepComponent(const USBZCharacterFootStepComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterFootStepComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterFootStepComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterFootStepComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverrideSoundEvent() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, OverrideSoundEvent); } \
	FORCEINLINE static uint32 __PPO__FootStepRtpc() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, FootStepRtpc); } \
	FORCEINLINE static uint32 __PPO__NormalStepDistance() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, NormalStepDistance); } \
	FORCEINLINE static uint32 __PPO__CrouchStepDistance() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, CrouchStepDistance); } \
	FORCEINLINE static uint32 __PPO__RunStepDistance() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, RunStepDistance); } \
	FORCEINLINE static uint32 __PPO__TargetingStepDistance() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, TargetingStepDistance); } \
	FORCEINLINE static uint32 __PPO__bUseFootContactNotifies() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, bUseFootContactNotifies); } \
	FORCEINLINE static uint32 __PPO__InterpolationTimeMSFootstep() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, InterpolationTimeMSFootstep); } \
	FORCEINLINE static uint32 __PPO__bCanMakeNoise() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, bCanMakeNoise); } \
	FORCEINLINE static uint32 __PPO__NormalNoiseRange() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, NormalNoiseRange); } \
	FORCEINLINE static uint32 __PPO__CrouchNoiseRange() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, CrouchNoiseRange); } \
	FORCEINLINE static uint32 __PPO__RunNoiseRange() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, RunNoiseRange); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacterMovementComponent() { return STRUCT_OFFSET(USBZCharacterFootStepComponent, OwnerCharacterMovementComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterFootStepComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterFootStepComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
