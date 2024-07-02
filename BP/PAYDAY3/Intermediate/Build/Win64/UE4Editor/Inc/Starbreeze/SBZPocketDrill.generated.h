// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZPocketDrill_generated_h
#error "SBZPocketDrill.generated.h already included, missing '#pragma once' in SBZPocketDrill.h"
#endif
#define STARBREEZE_SBZPocketDrill_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_RPC_WRAPPERS \
	virtual void Multicast_ReduceDuration_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ReduceDuration); \
	DECLARE_FUNCTION(execOnActivationComplete); \
	DECLARE_FUNCTION(execOnAdjustInteraction); \
	DECLARE_FUNCTION(execOnAdjustInteractionAborted); \
	DECLARE_FUNCTION(execOnAdjustInteractionStarted); \
	DECLARE_FUNCTION(execOnRep_IsEnabled); \
	DECLARE_FUNCTION(execOnUnjamInteraction); \
	DECLARE_FUNCTION(execSetActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReduceDuration_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ReduceDuration); \
	DECLARE_FUNCTION(execOnActivationComplete); \
	DECLARE_FUNCTION(execOnAdjustInteraction); \
	DECLARE_FUNCTION(execOnAdjustInteractionAborted); \
	DECLARE_FUNCTION(execOnAdjustInteractionStarted); \
	DECLARE_FUNCTION(execOnRep_IsEnabled); \
	DECLARE_FUNCTION(execOnUnjamInteraction); \
	DECLARE_FUNCTION(execSetActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPocketDrill(); \
	friend struct Z_Construct_UClass_ASBZPocketDrill_Statics; \
public: \
	DECLARE_CLASS(ASBZPocketDrill, ASBZBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPocketDrill) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZPocketDrill(); \
	friend struct Z_Construct_UClass_ASBZPocketDrill_Statics; \
public: \
	DECLARE_CLASS(ASBZPocketDrill, ASBZBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPocketDrill) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPocketDrill(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPocketDrill) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPocketDrill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPocketDrill); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPocketDrill(ASBZPocketDrill&&); \
	NO_API ASBZPocketDrill(const ASBZPocketDrill&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPocketDrill(ASBZPocketDrill&&); \
	NO_API ASBZPocketDrill(const ASBZPocketDrill&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPocketDrill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPocketDrill); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPocketDrill)


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetComponent() { return STRUCT_OFFSET(ASBZPocketDrill, WidgetComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ASBZPocketDrill, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__ActivationAreaComponent() { return STRUCT_OFFSET(ASBZPocketDrill, ActivationAreaComponent); } \
	FORCEINLINE static uint32 __PPO__MotorMeshComponent() { return STRUCT_OFFSET(ASBZPocketDrill, MotorMeshComponent); } \
	FORCEINLINE static uint32 __PPO__DisassembleMarkerAsset() { return STRUCT_OFFSET(ASBZPocketDrill, DisassembleMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__NumberOfNeededAdjusts() { return STRUCT_OFFSET(ASBZPocketDrill, NumberOfNeededAdjusts); } \
	FORCEINLINE static uint32 __PPO__SliceOffset() { return STRUCT_OFFSET(ASBZPocketDrill, SliceOffset); } \
	FORCEINLINE static uint32 __PPO__AdjustTimeSeconds() { return STRUCT_OFFSET(ASBZPocketDrill, AdjustTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__bStartActive() { return STRUCT_OFFSET(ASBZPocketDrill, bStartActive); } \
	FORCEINLINE static uint32 __PPO__UnjamInteraction() { return STRUCT_OFFSET(ASBZPocketDrill, UnjamInteraction); } \
	FORCEINLINE static uint32 __PPO__AdjustInteraction() { return STRUCT_OFFSET(ASBZPocketDrill, AdjustInteraction); } \
	FORCEINLINE static uint32 __PPO__ActivationInteraction() { return STRUCT_OFFSET(ASBZPocketDrill, ActivationInteraction); } \
	FORCEINLINE static uint32 __PPO__AlarmNotificationAsset() { return STRUCT_OFFSET(ASBZPocketDrill, AlarmNotificationAsset); } \
	FORCEINLINE static uint32 __PPO__MotorEndingXPosition() { return STRUCT_OFFSET(ASBZPocketDrill, MotorEndingXPosition); } \
	FORCEINLINE static uint32 __PPO__MotorStartingXPosition() { return STRUCT_OFFSET(ASBZPocketDrill, MotorStartingXPosition); } \
	FORCEINLINE static uint32 __PPO__AdjustsReached() { return STRUCT_OFFSET(ASBZPocketDrill, AdjustsReached); } \
	FORCEINLINE static uint32 __PPO__DrillMesh() { return STRUCT_OFFSET(ASBZPocketDrill, DrillMesh); } \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(ASBZPocketDrill, bIsEnabled); } \
	FORCEINLINE static uint32 __PPO__ProgressPerSecond() { return STRUCT_OFFSET(ASBZPocketDrill, ProgressPerSecond); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPocketDrill>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPocketDrill_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
