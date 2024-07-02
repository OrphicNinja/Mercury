// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZNavLinkAgilityComponent_generated_h
#error "SBZNavLinkAgilityComponent.generated.h already included, missing '#pragma once' in SBZNavLinkAgilityComponent.h"
#endif
#define STARBREEZE_SBZNavLinkAgilityComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeTrajectories);


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeTrajectories);


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZNavLinkAgilityComponent(); \
	friend struct Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics; \
public: \
	DECLARE_CLASS(USBZNavLinkAgilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNavLinkAgilityComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZNavLinkAgilityComponent(); \
	friend struct Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics; \
public: \
	DECLARE_CLASS(USBZNavLinkAgilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZNavLinkAgilityComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZNavLinkAgilityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNavLinkAgilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNavLinkAgilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNavLinkAgilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNavLinkAgilityComponent(USBZNavLinkAgilityComponent&&); \
	NO_API USBZNavLinkAgilityComponent(const USBZNavLinkAgilityComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZNavLinkAgilityComponent(USBZNavLinkAgilityComponent&&); \
	NO_API USBZNavLinkAgilityComponent(const USBZNavLinkAgilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZNavLinkAgilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZNavLinkAgilityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZNavLinkAgilityComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeftTrajectory() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, LeftTrajectory); } \
	FORCEINLINE static uint32 __PPO__RightTrajectory() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, RightTrajectory); } \
	FORCEINLINE static uint32 __PPO__QueryParams() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, QueryParams); } \
	FORCEINLINE static uint32 __PPO__LeftToRightType() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, LeftToRightType); } \
	FORCEINLINE static uint32 __PPO__RightToLeftType() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, RightToLeftType); } \
	FORCEINLINE static uint32 __PPO__IgnoredActorsByLeftTrajectory() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, IgnoredActorsByLeftTrajectory); } \
	FORCEINLINE static uint32 __PPO__IgnoredActorsByRightTrajectory() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, IgnoredActorsByRightTrajectory); } \
	FORCEINLINE static uint32 __PPO__LeftToRightObstacle() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, LeftToRightObstacle); } \
	FORCEINLINE static uint32 __PPO__RightToLeftObstacle() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, RightToLeftObstacle); } \
	FORCEINLINE static uint32 __PPO__bUseNavMesh() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, bUseNavMesh); } \
	FORCEINLINE static uint32 __PPO__ForcedLeftTrajectoryMontage() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, ForcedLeftTrajectoryMontage); } \
	FORCEINLINE static uint32 __PPO__bLeftUseAnimationToComputeEnd() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, bLeftUseAnimationToComputeEnd); } \
	FORCEINLINE static uint32 __PPO__ForcedRightTrajectoryMontage() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, ForcedRightTrajectoryMontage); } \
	FORCEINLINE static uint32 __PPO__bRightUseAnimationToComputeEnd() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, bRightUseAnimationToComputeEnd); } \
	FORCEINLINE static uint32 __PPO__bComputeOnBeginPlay() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, bComputeOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__InterfaceObject() { return STRUCT_OFFSET(USBZNavLinkAgilityComponent, InterfaceObject); }


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZNavLinkAgilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZNavLinkAgilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
