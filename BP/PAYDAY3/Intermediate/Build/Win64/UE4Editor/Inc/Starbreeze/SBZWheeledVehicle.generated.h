// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZVehicleSpawnComponent;
class USBZVehicleSplineFollowingComponent;
class UBoxComponent;
enum class ESBZVehicleDoorType : uint8;
enum class ESBZVehicleDoorState : uint8;
class ACharacter;
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class ASBZSpline;
enum class ESBZVehicleLightCPD : uint8;
enum class ESBZVehicleLightType : uint8;
#ifdef STARBREEZE_SBZWheeledVehicle_generated_h
#error "SBZWheeledVehicle.generated.h already included, missing '#pragma once' in SBZWheeledVehicle.h"
#endif
#define STARBREEZE_SBZWheeledVehicle_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_RPC_WRAPPERS \
	virtual void Multicast_EjectOverlappingCharacters_Implementation(ACharacter* Character, FVector const& EjectionVelocity); \
	virtual void Multicast_SetDoorState_Implementation(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState); \
 \
	DECLARE_FUNCTION(execGetSpawnComponent); \
	DECLARE_FUNCTION(execGetSplineFollowingComponent); \
	DECLARE_FUNCTION(execAddEjectionVolume); \
	DECLARE_FUNCTION(execGetDoorState); \
	DECLARE_FUNCTION(execGetVehicleSplineFollowingComponent); \
	DECLARE_FUNCTION(execMulticast_EjectOverlappingCharacters); \
	DECLARE_FUNCTION(execMulticast_SetDoorState); \
	DECLARE_FUNCTION(execOnBeginStopCallback); \
	DECLARE_FUNCTION(execOnEjectionVolumeBeginOverlap); \
	DECLARE_FUNCTION(execOnPathEndReachedCallback); \
	DECLARE_FUNCTION(execOnRep_DoorStatesPerType); \
	DECLARE_FUNCTION(execOnRep_RepMove); \
	DECLARE_FUNCTION(execOnRep_Seed); \
	DECLARE_FUNCTION(execOnSplineEndReachedCallback); \
	DECLARE_FUNCTION(execOnSplineEnteredCallback); \
	DECLARE_FUNCTION(execOnSplineLeftCallback); \
	DECLARE_FUNCTION(execOnStoppedCallback); \
	DECLARE_FUNCTION(execOnSwitchSplineDirectionCallback); \
	DECLARE_FUNCTION(execSetDoorState); \
	DECLARE_FUNCTION(execSetLightCPDBroken); \
	DECLARE_FUNCTION(execSetLightType);


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_EjectOverlappingCharacters_Implementation(ACharacter* Character, FVector const& EjectionVelocity); \
	virtual void Multicast_SetDoorState_Implementation(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState); \
 \
	DECLARE_FUNCTION(execGetSpawnComponent); \
	DECLARE_FUNCTION(execGetSplineFollowingComponent); \
	DECLARE_FUNCTION(execAddEjectionVolume); \
	DECLARE_FUNCTION(execGetDoorState); \
	DECLARE_FUNCTION(execGetVehicleSplineFollowingComponent); \
	DECLARE_FUNCTION(execMulticast_EjectOverlappingCharacters); \
	DECLARE_FUNCTION(execMulticast_SetDoorState); \
	DECLARE_FUNCTION(execOnBeginStopCallback); \
	DECLARE_FUNCTION(execOnEjectionVolumeBeginOverlap); \
	DECLARE_FUNCTION(execOnPathEndReachedCallback); \
	DECLARE_FUNCTION(execOnRep_DoorStatesPerType); \
	DECLARE_FUNCTION(execOnRep_RepMove); \
	DECLARE_FUNCTION(execOnRep_Seed); \
	DECLARE_FUNCTION(execOnSplineEndReachedCallback); \
	DECLARE_FUNCTION(execOnSplineEnteredCallback); \
	DECLARE_FUNCTION(execOnSplineLeftCallback); \
	DECLARE_FUNCTION(execOnStoppedCallback); \
	DECLARE_FUNCTION(execOnSwitchSplineDirectionCallback); \
	DECLARE_FUNCTION(execSetDoorState); \
	DECLARE_FUNCTION(execSetLightCPDBroken); \
	DECLARE_FUNCTION(execSetLightType);


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_EVENT_PARMS \
	struct SBZWheeledVehicle_eventMulticast_EjectOverlappingCharacters_Parms \
	{ \
		ACharacter* Character; \
		FVector EjectionVelocity; \
	}; \
	struct SBZWheeledVehicle_eventMulticast_SetDoorState_Parms \
	{ \
		ESBZVehicleDoorType DoorType; \
		ESBZVehicleDoorState DoorState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZWheeledVehicle(); \
	friend struct Z_Construct_UClass_ASBZWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZWheeledVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWheeledVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZWheeledVehicle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DoorStatesPerType=NETFIELD_REP_START, \
		RepMove, \
		Seed, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_INCLASS \
private: \
	static void StaticRegisterNativesASBZWheeledVehicle(); \
	friend struct Z_Construct_UClass_ASBZWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZWheeledVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZWheeledVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZWheeledVehicle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DoorStatesPerType=NETFIELD_REP_START, \
		RepMove, \
		Seed, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWheeledVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWheeledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWheeledVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWheeledVehicle(ASBZWheeledVehicle&&); \
	NO_API ASBZWheeledVehicle(const ASBZWheeledVehicle&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZWheeledVehicle(ASBZWheeledVehicle&&); \
	NO_API ASBZWheeledVehicle(const ASBZWheeledVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZWheeledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZWheeledVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZWheeledVehicle)


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VariationSetData() { return STRUCT_OFFSET(ASBZWheeledVehicle, VariationSetData); } \
	FORCEINLINE static uint32 __PPO__NavModifierComponent() { return STRUCT_OFFSET(ASBZWheeledVehicle, NavModifierComponent); } \
	FORCEINLINE static uint32 __PPO__CollisionExtentShrinkFactor() { return STRUCT_OFFSET(ASBZWheeledVehicle, CollisionExtentShrinkFactor); } \
	FORCEINLINE static uint32 __PPO__DoorStatesPerType() { return STRUCT_OFFSET(ASBZWheeledVehicle, DoorStatesPerType); } \
	FORCEINLINE static uint32 __PPO__FXs() { return STRUCT_OFFSET(ASBZWheeledVehicle, FXs); } \
	FORCEINLINE static uint32 __PPO__SplineFollowingComponent() { return STRUCT_OFFSET(ASBZWheeledVehicle, SplineFollowingComponent); } \
	FORCEINLINE static uint32 __PPO__Obstacles() { return STRUCT_OFFSET(ASBZWheeledVehicle, Obstacles); } \
	FORCEINLINE static uint32 __PPO__CachedCoverPoints() { return STRUCT_OFFSET(ASBZWheeledVehicle, CachedCoverPoints); } \
	FORCEINLINE static uint32 __PPO__bEjectCharactersWhenDriving() { return STRUCT_OFFSET(ASBZWheeledVehicle, bEjectCharactersWhenDriving); } \
	FORCEINLINE static uint32 __PPO__EjectionCharacterVelocityFactor() { return STRUCT_OFFSET(ASBZWheeledVehicle, EjectionCharacterVelocityFactor); } \
	FORCEINLINE static uint32 __PPO__MaxEjectCharacterVelocity() { return STRUCT_OFFSET(ASBZWheeledVehicle, MaxEjectCharacterVelocity); } \
	FORCEINLINE static uint32 __PPO__OverlappingEjectionAreaCharacters() { return STRUCT_OFFSET(ASBZWheeledVehicle, OverlappingEjectionAreaCharacters); } \
	FORCEINLINE static uint32 __PPO__PendingCollisionResetCharacters() { return STRUCT_OFFSET(ASBZWheeledVehicle, PendingCollisionResetCharacters); } \
	FORCEINLINE static uint32 __PPO__EjectionVolumes() { return STRUCT_OFFSET(ASBZWheeledVehicle, EjectionVolumes); } \
	FORCEINLINE static uint32 __PPO__ObstacleCheckInterval() { return STRUCT_OFFSET(ASBZWheeledVehicle, ObstacleCheckInterval); } \
	FORCEINLINE static uint32 __PPO__RepMove() { return STRUCT_OFFSET(ASBZWheeledVehicle, RepMove); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZWheeledVehicle, Seed); } \
	FORCEINLINE static uint32 __PPO__DebugSnapshots() { return STRUCT_OFFSET(ASBZWheeledVehicle, DebugSnapshots); } \
	FORCEINLINE static uint32 __PPO__DebugLocation() { return STRUCT_OFFSET(ASBZWheeledVehicle, DebugLocation); } \
	FORCEINLINE static uint32 __PPO__DebugServerLocations() { return STRUCT_OFFSET(ASBZWheeledVehicle, DebugServerLocations); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_40_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZWheeledVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
