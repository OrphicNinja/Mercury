// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZDynamicPhysicsAudioComponent_generated_h
#error "SBZDynamicPhysicsAudioComponent.generated.h already included, missing '#pragma once' in SBZDynamicPhysicsAudioComponent.h"
#endif
#define STARBREEZE_SBZDynamicPhysicsAudioComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDisable); \
	DECLARE_FUNCTION(execPlayImpactSound); \
	DECLARE_FUNCTION(execPlayRollingSound); \
	DECLARE_FUNCTION(execStopRollingSound); \
	DECLARE_FUNCTION(execUpdateImpactVelocity); \
	DECLARE_FUNCTION(execUpdateRollingVelocity);


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDisable); \
	DECLARE_FUNCTION(execPlayImpactSound); \
	DECLARE_FUNCTION(execPlayRollingSound); \
	DECLARE_FUNCTION(execStopRollingSound); \
	DECLARE_FUNCTION(execUpdateImpactVelocity); \
	DECLARE_FUNCTION(execUpdateRollingVelocity);


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDynamicPhysicsAudioComponent(); \
	friend struct Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZDynamicPhysicsAudioComponent, UAkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDynamicPhysicsAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDynamicPhysicsAudioComponent(); \
	friend struct Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics; \
public: \
	DECLARE_CLASS(USBZDynamicPhysicsAudioComponent, UAkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDynamicPhysicsAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDynamicPhysicsAudioComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDynamicPhysicsAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDynamicPhysicsAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDynamicPhysicsAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDynamicPhysicsAudioComponent(USBZDynamicPhysicsAudioComponent&&); \
	NO_API USBZDynamicPhysicsAudioComponent(const USBZDynamicPhysicsAudioComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDynamicPhysicsAudioComponent(USBZDynamicPhysicsAudioComponent&&); \
	NO_API USBZDynamicPhysicsAudioComponent(const USBZDynamicPhysicsAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDynamicPhysicsAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDynamicPhysicsAudioComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZDynamicPhysicsAudioComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootComponent() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RootComponent); } \
	FORCEINLINE static uint32 __PPO__RollingStartEvent() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingStartEvent); } \
	FORCEINLINE static uint32 __PPO__RollingStopEvent() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingStopEvent); } \
	FORCEINLINE static uint32 __PPO__ImpactEvent() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactEvent); } \
	FORCEINLINE static uint32 __PPO__RollingSpeedRtpc() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingSpeedRtpc); } \
	FORCEINLINE static uint32 __PPO__ImpactForceRtpc() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactForceRtpc); } \
	FORCEINLINE static uint32 __PPO__StartRollingInterpolationTimeInMs() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, StartRollingInterpolationTimeInMs); } \
	FORCEINLINE static uint32 __PPO__UpdateRollingInterpolationTimeInMs() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, UpdateRollingInterpolationTimeInMs); } \
	FORCEINLINE static uint32 __PPO__RollingSpeedThreshold() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingSpeedThreshold); } \
	FORCEINLINE static uint32 __PPO__ImpactForceThreshold() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactForceThreshold); } \
	FORCEINLINE static uint32 __PPO__ImpactForceMultiplicationValue() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactForceMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__RollingSpeedMultiplicationValue() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingSpeedMultiplicationValue); } \
	FORCEINLINE static uint32 __PPO__OwnedSurfaceType() { return STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, OwnedSurfaceType); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDynamicPhysicsAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDynamicPhysicsAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
