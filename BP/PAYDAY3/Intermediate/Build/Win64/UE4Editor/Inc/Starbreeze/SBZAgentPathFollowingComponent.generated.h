// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAgentPathFollowingComponent_generated_h
#error "SBZAgentPathFollowingComponent.generated.h already included, missing '#pragma once' in SBZAgentPathFollowingComponent.h"
#endif
#define STARBREEZE_SBZAgentPathFollowingComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAgentPathFollowingComponent(); \
	friend struct Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAgentPathFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAgentPathFollowingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAgentPathFollowingComponent(); \
	friend struct Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAgentPathFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAgentPathFollowingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAgentPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAgentPathFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAgentPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAgentPathFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAgentPathFollowingComponent(USBZAgentPathFollowingComponent&&); \
	NO_API USBZAgentPathFollowingComponent(const USBZAgentPathFollowingComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAgentPathFollowingComponent(USBZAgentPathFollowingComponent&&); \
	NO_API USBZAgentPathFollowingComponent(const USBZAgentPathFollowingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAgentPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAgentPathFollowingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAgentPathFollowingComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseSplineSteering() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, bUseSplineSteering); } \
	FORCEINLINE static uint32 __PPO__bDebugDrawSpline() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, bDebugDrawSpline); } \
	FORCEINLINE static uint32 __PPO__AgentMovementComp() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, AgentMovementComp); } \
	FORCEINLINE static uint32 __PPO__AgentCharacter() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, AgentCharacter); } \
	FORCEINLINE static uint32 __PPO__PathAccessibilityCheckInterval() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, PathAccessibilityCheckInterval); } \
	FORCEINLINE static uint32 __PPO__MaxDistFromPathBeforeInvalidation() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, MaxDistFromPathBeforeInvalidation); } \
	FORCEINLINE static uint32 __PPO__DefaultSteeringDistanceOffset() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, DefaultSteeringDistanceOffset); } \
	FORCEINLINE static uint32 __PPO__TrafficCrossingSteeringDistanceOffset() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, TrafficCrossingSteeringDistanceOffset); } \
	FORCEINLINE static uint32 __PPO__MinDistFromTrafficSlotToAlign() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, MinDistFromTrafficSlotToAlign); } \
	FORCEINLINE static uint32 __PPO__MinDistFromLifeActionSlotToAlign() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, MinDistFromLifeActionSlotToAlign); } \
	FORCEINLINE static uint32 __PPO__TraversalSlowDownAngleRange() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, TraversalSlowDownAngleRange); } \
	FORCEINLINE static uint32 __PPO__CurTrafficNavLink() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, CurTrafficNavLink); } \
	FORCEINLINE static uint32 __PPO__CachedCurrentNavAreaClass() { return STRUCT_OFFSET(USBZAgentPathFollowingComponent, CachedCurrentNavAreaClass); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAgentPathFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAgentPathFollowingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
