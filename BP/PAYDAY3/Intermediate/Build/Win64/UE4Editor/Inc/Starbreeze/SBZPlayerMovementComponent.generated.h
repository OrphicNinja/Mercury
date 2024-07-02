// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlayerMovementComponent_generated_h
#error "SBZPlayerMovementComponent.generated.h already included, missing '#pragma once' in SBZPlayerMovementComponent.h"
#endif
#define STARBREEZE_SBZPlayerMovementComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_SetWantToSprint_Implementation(bool bInWantToSprint); \
	virtual bool Server_SetWantToSprint_Validate(bool ); \
	virtual void Server_SetWantToSprint_Implementation(bool bInWantToSprint); \
 \
	DECLARE_FUNCTION(execMulticast_SetWantToSprint); \
	DECLARE_FUNCTION(execServer_SetWantToSprint);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetWantToSprint_Implementation(bool bInWantToSprint); \
	virtual bool Server_SetWantToSprint_Validate(bool ); \
	virtual void Server_SetWantToSprint_Implementation(bool bInWantToSprint); \
 \
	DECLARE_FUNCTION(execMulticast_SetWantToSprint); \
	DECLARE_FUNCTION(execServer_SetWantToSprint);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_EVENT_PARMS \
	struct SBZPlayerMovementComponent_eventMulticast_SetWantToSprint_Parms \
	{ \
		bool bInWantToSprint; \
	}; \
	struct SBZPlayerMovementComponent_eventServer_SetWantToSprint_Parms \
	{ \
		bool bInWantToSprint; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerMovementComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerMovementComponent, USBZCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerMovementComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerMovementComponent, USBZCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerMovementComponent(USBZPlayerMovementComponent&&); \
	NO_API USBZPlayerMovementComponent(const USBZPlayerMovementComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerMovementComponent(USBZPlayerMovementComponent&&); \
	NO_API USBZPlayerMovementComponent(const USBZPlayerMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerMovementComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAutoComputeTrajectory() { return STRUCT_OFFSET(USBZPlayerMovementComponent, bAutoComputeTrajectory); } \
	FORCEINLINE static uint32 __PPO__AutoComputeTrajectoryInterval() { return STRUCT_OFFSET(USBZPlayerMovementComponent, AutoComputeTrajectoryInterval); } \
	FORCEINLINE static uint32 __PPO__MinSpeedToSprintAccelerating() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MinSpeedToSprintAccelerating); } \
	FORCEINLINE static uint32 __PPO__MinSpeedToSprintDecelerating() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MinSpeedToSprintDecelerating); } \
	FORCEINLINE static uint32 __PPO__MaxAngleToSprintAccelerating() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MaxAngleToSprintAccelerating); } \
	FORCEINLINE static uint32 __PPO__MaxAngleToSprintDecelerating() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MaxAngleToSprintDecelerating); } \
	FORCEINLINE static uint32 __PPO__MaxSimulationTimeStepForMovingObject() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MaxSimulationTimeStepForMovingObject); } \
	FORCEINLINE static uint32 __PPO__PushActorMassMultiplier() { return STRUCT_OFFSET(USBZPlayerMovementComponent, PushActorMassMultiplier); } \
	FORCEINLINE static uint32 __PPO__PushActorVelToImpulseModifier() { return STRUCT_OFFSET(USBZPlayerMovementComponent, PushActorVelToImpulseModifier); } \
	FORCEINLINE static uint32 __PPO__PushActorVelToAngularImpulseModifier() { return STRUCT_OFFSET(USBZPlayerMovementComponent, PushActorVelToAngularImpulseModifier); } \
	FORCEINLINE static uint32 __PPO__MovingObjectCollisionMinLaunchVelocity() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCollisionMinLaunchVelocity); } \
	FORCEINLINE static uint32 __PPO__MovingObjectCollisionMaxLaunchVelocity() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCollisionMaxLaunchVelocity); } \
	FORCEINLINE static uint32 __PPO__MovingObjectCollisionVelocityFactor() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCollisionVelocityFactor); } \
	FORCEINLINE static uint32 __PPO__MovingObjectCapsuleInflation() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCapsuleInflation); } \
	FORCEINLINE static uint32 __PPO__MinLoadoutTierIndex() { return STRUCT_OFFSET(USBZPlayerMovementComponent, MinLoadoutTierIndex); } \
	FORCEINLINE static uint32 __PPO__WeightAssetArray() { return STRUCT_OFFSET(USBZPlayerMovementComponent, WeightAssetArray); } \
	FORCEINLINE static uint32 __PPO__WeightAsset() { return STRUCT_OFFSET(USBZPlayerMovementComponent, WeightAsset); } \
	FORCEINLINE static uint32 __PPO__SkillSprintModifier() { return STRUCT_OFFSET(USBZPlayerMovementComponent, SkillSprintModifier); } \
	FORCEINLINE static uint32 __PPO__SkillWalkHumanShieldModifier() { return STRUCT_OFFSET(USBZPlayerMovementComponent, SkillWalkHumanShieldModifier); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
