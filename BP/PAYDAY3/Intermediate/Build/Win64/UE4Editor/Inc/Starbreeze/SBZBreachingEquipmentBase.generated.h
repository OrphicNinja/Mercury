// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FGameplayTagContainer;
struct FGameplayTag;
enum class ESBZBreachingEquipmentState : uint8;
class USBZMarkerDataAsset;
struct FVector;
#ifdef STARBREEZE_SBZBreachingEquipmentBase_generated_h
#error "SBZBreachingEquipmentBase.generated.h already included, missing '#pragma once' in SBZBreachingEquipmentBase.h"
#endif
#define STARBREEZE_SBZBreachingEquipmentBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_RPC_WRAPPERS \
	virtual void Multicast_SetEstimatedDurationLeft_Implementation(float InDurationLeft); \
	virtual void Multicast_SetState_Implementation(ESBZBreachingEquipmentState NewState); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetProgressMade); \
	DECLARE_FUNCTION(execMulticast_SetEstimatedDurationLeft); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execUpdateMarker);


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetEstimatedDurationLeft_Implementation(float InDurationLeft); \
	virtual void Multicast_SetState_Implementation(ESBZBreachingEquipmentState NewState); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetProgressMade); \
	DECLARE_FUNCTION(execMulticast_SetEstimatedDurationLeft); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execUpdateMarker);


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_EVENT_PARMS \
	struct SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms \
	{ \
		ESBZBreachingEquipmentState OldState; \
		ESBZBreachingEquipmentState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZBreachingEquipmentBase_eventMulticast_SetEstimatedDurationLeft_Parms \
	{ \
		float InDurationLeft; \
	}; \
	struct SBZBreachingEquipmentBase_eventMulticast_SetState_Parms \
	{ \
		ESBZBreachingEquipmentState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBreachingEquipmentBase(); \
	friend struct Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics; \
public: \
	DECLARE_CLASS(ASBZBreachingEquipmentBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBreachingEquipmentBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZBreachingEquipmentBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentEquipmentState=NETFIELD_REP_START, \
		EstimatedDurationLeft, \
		NETFIELD_REP_END=EstimatedDurationLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_INCLASS \
private: \
	static void StaticRegisterNativesASBZBreachingEquipmentBase(); \
	friend struct Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics; \
public: \
	DECLARE_CLASS(ASBZBreachingEquipmentBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBreachingEquipmentBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZBreachingEquipmentBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentEquipmentState=NETFIELD_REP_START, \
		EstimatedDurationLeft, \
		NETFIELD_REP_END=EstimatedDurationLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZBreachingEquipmentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBreachingEquipmentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBreachingEquipmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBreachingEquipmentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBreachingEquipmentBase(ASBZBreachingEquipmentBase&&); \
	NO_API ASBZBreachingEquipmentBase(const ASBZBreachingEquipmentBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBreachingEquipmentBase(ASBZBreachingEquipmentBase&&); \
	NO_API ASBZBreachingEquipmentBase(const ASBZBreachingEquipmentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBreachingEquipmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBreachingEquipmentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBreachingEquipmentBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DurationTimeSeconds() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, DurationTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__bCanEverBeSabotaged() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, bCanEverBeSabotaged); } \
	FORCEINLINE static uint32 __PPO__OutlineAsset() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, OutlineAsset); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentEquipmentState() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, CurrentEquipmentState); } \
	FORCEINLINE static uint32 __PPO__EstimatedDurationLeft() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, EstimatedDurationLeft); } \
	FORCEINLINE static uint32 __PPO__UpdateEstimatedTimeInterval() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, UpdateEstimatedTimeInterval); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionComponent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, LifeActionComponent); } \
	FORCEINLINE static uint32 __PPO__LifeActionInstance() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, LifeActionInstance); } \
	FORCEINLINE static uint32 __PPO__LifeActionSlot() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, LifeActionSlot); } \
	FORCEINLINE static uint32 __PPO__InteractionMarkerAsset() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, InteractionMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__FixMarkerAsset() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, FixMarkerAsset); } \
	FORCEINLINE static uint32 __PPO__AkComponent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, AkComponent); } \
	FORCEINLINE static uint32 __PPO__DrillingEvent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, DrillingEvent); } \
	FORCEINLINE static uint32 __PPO__JammedEvent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, JammedEvent); } \
	FORCEINLINE static uint32 __PPO__HeatingUpEvent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, HeatingUpEvent); } \
	FORCEINLINE static uint32 __PPO__DoneEvent() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, DoneEvent); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZBreachingEquipmentBase, RoomVolumes); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_29_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBreachingEquipmentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBreachingEquipmentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
