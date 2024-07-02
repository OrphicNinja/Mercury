// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FQuat;
struct FRotator;
enum class ESBZPlaceableChargeState : uint8;
class AActor;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZPlaceableCharges_generated_h
#error "SBZPlaceableCharges.generated.h already included, missing '#pragma once' in SBZPlaceableCharges.h"
#endif
#define STARBREEZE_SBZPlaceableCharges_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_RPC_WRAPPERS \
	virtual void Multicast_Fall_Implementation(FVector const& InStartLocation, FVector const& InTargetLocation, FQuat const& InTargetQuat); \
	virtual void Multicast_ReachedTargetLocation_Implementation(FVector const& InTargetLocation, FRotator const& InTargetRotation); \
	virtual void Multicast_SetCharges_Implementation(float NewCharges); \
	virtual void Multicast_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState); \
	virtual void Multicast_SpawnCloakerPlaceable_Implementation(); \
	virtual void Server_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState); \
 \
	DECLARE_FUNCTION(execMulticast_Fall); \
	DECLARE_FUNCTION(execMulticast_ReachedTargetLocation); \
	DECLARE_FUNCTION(execMulticast_SetCharges); \
	DECLARE_FUNCTION(execMulticast_SetPlaceableChargeState); \
	DECLARE_FUNCTION(execMulticast_SpawnCloakerPlaceable); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execOnRep_Charges); \
	DECLARE_FUNCTION(execOnRep_PlaceableChargeState); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execServer_SetPlaceableChargeState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_Fall_Implementation(FVector const& InStartLocation, FVector const& InTargetLocation, FQuat const& InTargetQuat); \
	virtual void Multicast_ReachedTargetLocation_Implementation(FVector const& InTargetLocation, FRotator const& InTargetRotation); \
	virtual void Multicast_SetCharges_Implementation(float NewCharges); \
	virtual void Multicast_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState); \
	virtual void Multicast_SpawnCloakerPlaceable_Implementation(); \
	virtual void Server_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState NewPlaceableChargeState); \
 \
	DECLARE_FUNCTION(execMulticast_Fall); \
	DECLARE_FUNCTION(execMulticast_ReachedTargetLocation); \
	DECLARE_FUNCTION(execMulticast_SetCharges); \
	DECLARE_FUNCTION(execMulticast_SetPlaceableChargeState); \
	DECLARE_FUNCTION(execMulticast_SpawnCloakerPlaceable); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execOnRep_Charges); \
	DECLARE_FUNCTION(execOnRep_PlaceableChargeState); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execServer_SetPlaceableChargeState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_EVENT_PARMS \
	struct SBZPlaceableCharges_eventMulticast_Fall_Parms \
	{ \
		FVector InStartLocation; \
		FVector InTargetLocation; \
		FQuat InTargetQuat; \
	}; \
	struct SBZPlaceableCharges_eventMulticast_ReachedTargetLocation_Parms \
	{ \
		FVector InTargetLocation; \
		FRotator InTargetRotation; \
	}; \
	struct SBZPlaceableCharges_eventMulticast_SetCharges_Parms \
	{ \
		float NewCharges; \
	}; \
	struct SBZPlaceableCharges_eventMulticast_SetPlaceableChargeState_Parms \
	{ \
		ESBZPlaceableChargeState NewPlaceableChargeState; \
	}; \
	struct SBZPlaceableCharges_eventOnChargesChanged_Parms \
	{ \
		float ChargesChangeTo; \
		bool bDoCosmetics; \
	}; \
	struct SBZPlaceableCharges_eventServer_SetPlaceableChargeState_Parms \
	{ \
		ESBZPlaceableChargeState NewPlaceableChargeState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableCharges(); \
	friend struct Z_Construct_UClass_ASBZPlaceableCharges_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableCharges, ASBZPlaceableBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableCharges) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Charges=NETFIELD_REP_START, \
		TargetLocation, \
		PlaceableChargeState, \
		NETFIELD_REP_END=PlaceableChargeState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableCharges(); \
	friend struct Z_Construct_UClass_ASBZPlaceableCharges_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableCharges, ASBZPlaceableBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableCharges) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Charges=NETFIELD_REP_START, \
		TargetLocation, \
		PlaceableChargeState, \
		NETFIELD_REP_END=PlaceableChargeState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableCharges(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableCharges) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableCharges); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableCharges); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableCharges(ASBZPlaceableCharges&&); \
	NO_API ASBZPlaceableCharges(const ASBZPlaceableCharges&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableCharges(ASBZPlaceableCharges&&); \
	NO_API ASBZPlaceableCharges(const ASBZPlaceableCharges&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableCharges); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableCharges); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableCharges)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InitialCharges() { return STRUCT_OFFSET(ASBZPlaceableCharges, InitialCharges); } \
	FORCEINLINE static uint32 __PPO__Charges() { return STRUCT_OFFSET(ASBZPlaceableCharges, Charges); } \
	FORCEINLINE static uint32 __PPO__bRequiresRelativeLocation() { return STRUCT_OFFSET(ASBZPlaceableCharges, bRequiresRelativeLocation); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(ASBZPlaceableCharges, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZPlaceableCharges, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__OutOfBoundsBoxComponent() { return STRUCT_OFFSET(ASBZPlaceableCharges, OutOfBoundsBoxComponent); } \
	FORCEINLINE static uint32 __PPO__CloakerBMMessage() { return STRUCT_OFFSET(ASBZPlaceableCharges, CloakerBMMessage); } \
	FORCEINLINE static uint32 __PPO__TargetLocation() { return STRUCT_OFFSET(ASBZPlaceableCharges, TargetLocation); } \
	FORCEINLINE static uint32 __PPO__PlaceableChargeState() { return STRUCT_OFFSET(ASBZPlaceableCharges, PlaceableChargeState); } \
	FORCEINLINE static uint32 __PPO__PlacedVoiceComment() { return STRUCT_OFFSET(ASBZPlaceableCharges, PlacedVoiceComment); } \
	FORCEINLINE static uint32 __PPO__CrewAIChatMessage() { return STRUCT_OFFSET(ASBZPlaceableCharges, CrewAIChatMessage); } \
	FORCEINLINE static uint32 __PPO__bIsAIPlaced() { return STRUCT_OFFSET(ASBZPlaceableCharges, bIsAIPlaced); } \
	FORCEINLINE static uint32 __PPO__MeshRelativeLocation() { return STRUCT_OFFSET(ASBZPlaceableCharges, MeshRelativeLocation); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_21_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableCharges>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableCharges_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
