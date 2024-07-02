// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class EPD3HeistState : uint8;
class AActor;
struct FAIStimulus;
#ifdef STARBREEZE_SBZAIVisualDetectionComponent_generated_h
#error "SBZAIVisualDetectionComponent.generated.h already included, missing '#pragma once' in SBZAIVisualDetectionComponent.h"
#endif
#define STARBREEZE_SBZAIVisualDetectionComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnNewPawn); \
	DECLARE_FUNCTION(execOnGameStateChanged); \
	DECLARE_FUNCTION(execOnHostageStateChanged); \
	DECLARE_FUNCTION(execOnLifetimeChanged); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnTargetIllegalAction);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnNewPawn); \
	DECLARE_FUNCTION(execOnGameStateChanged); \
	DECLARE_FUNCTION(execOnHostageStateChanged); \
	DECLARE_FUNCTION(execOnLifetimeChanged); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnTargetIllegalAction);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIVisualDetectionComponent(); \
	friend struct Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIVisualDetectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIVisualDetectionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIVisualDetectionComponent(); \
	friend struct Z_Construct_UClass_USBZAIVisualDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIVisualDetectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIVisualDetectionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIVisualDetectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIVisualDetectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIVisualDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIVisualDetectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIVisualDetectionComponent(USBZAIVisualDetectionComponent&&); \
	NO_API USBZAIVisualDetectionComponent(const USBZAIVisualDetectionComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIVisualDetectionComponent(USBZAIVisualDetectionComponent&&); \
	NO_API USBZAIVisualDetectionComponent(const USBZAIVisualDetectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIVisualDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIVisualDetectionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIVisualDetectionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisionDegradeSpeed() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, VisionDegradeSpeed); } \
	FORCEINLINE static uint32 __PPO__VisionDegradeDelay() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, VisionDegradeDelay); } \
	FORCEINLINE static uint32 __PPO__SightDetectionCurve() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, SightDetectionCurve); } \
	FORCEINLINE static uint32 __PPO__bUsePeripheralMultiplierCurve() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, bUsePeripheralMultiplierCurve); } \
	FORCEINLINE static uint32 __PPO__PeripheralVisionDetectionMultiplier() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, PeripheralVisionDetectionMultiplier); } \
	FORCEINLINE static uint32 __PPO__bUseMovementAdditiveCurve() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, bUseMovementAdditiveCurve); } \
	FORCEINLINE static uint32 __PPO__MovementAdditiveSightCurve() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, MovementAdditiveSightCurve); } \
	FORCEINLINE static uint32 __PPO__bMarkAsCriminalOnSearch() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, bMarkAsCriminalOnSearch); } \
	FORCEINLINE static uint32 __PPO__bShouldDisplayDetectionBuildup() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, bShouldDisplayDetectionBuildup); } \
	FORCEINLINE static uint32 __PPO__IllegalActionGracePeriod() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, IllegalActionGracePeriod); } \
	FORCEINLINE static uint32 __PPO__MaxLagCompensation() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, MaxLagCompensation); } \
	FORCEINLINE static uint32 __PPO__IgnoreDisplayTagContainer() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, IgnoreDisplayTagContainer); } \
	FORCEINLINE static uint32 __PPO__bOnlyDetectMovement() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, bOnlyDetectMovement); } \
	FORCEINLINE static uint32 __PPO__bShouldPauseDetectionOnCriminal() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, bShouldPauseDetectionOnCriminal); } \
	FORCEINLINE static uint32 __PPO__EnemyDetectionValue() { return STRUCT_OFFSET(USBZAIVisualDetectionComponent, EnemyDetectionValue); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIVisualDetectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIVisualDetectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
