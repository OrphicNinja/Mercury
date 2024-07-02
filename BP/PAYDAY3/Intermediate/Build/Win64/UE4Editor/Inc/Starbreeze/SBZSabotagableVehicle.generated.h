// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZVehicleDoorState : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZSabotagableVehicle_generated_h
#error "SBZSabotagableVehicle.generated.h already included, missing '#pragma once' in SBZSabotagableVehicle.h"
#endif
#define STARBREEZE_SBZSabotagableVehicle_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_RPC_WRAPPERS \
	virtual void Multicast_SetEscortModeEnabled_Implementation(bool bEnabled); \
	virtual void Multicast_SetRearDoorsState_Implementation(ESBZVehicleDoorState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetEscortModeEnabled); \
	DECLARE_FUNCTION(execMulticast_SetRearDoorsState); \
	DECLARE_FUNCTION(execOnEscortCapsuleBeginOverlap); \
	DECLARE_FUNCTION(execOnEscortCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnPathEnded); \
	DECLARE_FUNCTION(execOnPlayerInsideTruckBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_EscortModeEnabled); \
	DECLARE_FUNCTION(execOnSabotaged); \
	DECLARE_FUNCTION(execOnStartedFollowingSpline); \
	DECLARE_FUNCTION(execOnStopped); \
	DECLARE_FUNCTION(execSetEscortModeEnabled); \
	DECLARE_FUNCTION(execSetRearDoorsState); \
	DECLARE_FUNCTION(execSpawnSabotagePoint); \
	DECLARE_FUNCTION(execUpdateSabotageVehicle);


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetEscortModeEnabled_Implementation(bool bEnabled); \
	virtual void Multicast_SetRearDoorsState_Implementation(ESBZVehicleDoorState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_SetEscortModeEnabled); \
	DECLARE_FUNCTION(execMulticast_SetRearDoorsState); \
	DECLARE_FUNCTION(execOnEscortCapsuleBeginOverlap); \
	DECLARE_FUNCTION(execOnEscortCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnPathEnded); \
	DECLARE_FUNCTION(execOnPlayerInsideTruckBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_EscortModeEnabled); \
	DECLARE_FUNCTION(execOnSabotaged); \
	DECLARE_FUNCTION(execOnStartedFollowingSpline); \
	DECLARE_FUNCTION(execOnStopped); \
	DECLARE_FUNCTION(execSetEscortModeEnabled); \
	DECLARE_FUNCTION(execSetRearDoorsState); \
	DECLARE_FUNCTION(execSpawnSabotagePoint); \
	DECLARE_FUNCTION(execUpdateSabotageVehicle);


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_EVENT_PARMS \
	struct SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms \
	{ \
		bool bEnabled; \
		bool bDoCosmetics; \
	}; \
	struct SBZSabotagableVehicle_eventBP_OnPlayersInEscortChanged_Parms \
	{ \
		int32 PlayersEscorting; \
	}; \
	struct SBZSabotagableVehicle_eventMulticast_SetEscortModeEnabled_Parms \
	{ \
		bool bEnabled; \
	}; \
	struct SBZSabotagableVehicle_eventMulticast_SetRearDoorsState_Parms \
	{ \
		ESBZVehicleDoorState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSabotagableVehicle(); \
	friend struct Z_Construct_UClass_ASBZSabotagableVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZSabotagableVehicle, ASBZWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSabotagableVehicle) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEscortModeEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEscortModeEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASBZSabotagableVehicle(); \
	friend struct Z_Construct_UClass_ASBZSabotagableVehicle_Statics; \
public: \
	DECLARE_CLASS(ASBZSabotagableVehicle, ASBZWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSabotagableVehicle) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEscortModeEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEscortModeEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSabotagableVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSabotagableVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSabotagableVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSabotagableVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSabotagableVehicle(ASBZSabotagableVehicle&&); \
	NO_API ASBZSabotagableVehicle(const ASBZSabotagableVehicle&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSabotagableVehicle(ASBZSabotagableVehicle&&); \
	NO_API ASBZSabotagableVehicle(const ASBZSabotagableVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSabotagableVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSabotagableVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSabotagableVehicle)


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SabotagePointClass() { return STRUCT_OFFSET(ASBZSabotagableVehicle, SabotagePointClass); } \
	FORCEINLINE static uint32 __PPO__MovingNavModifier() { return STRUCT_OFFSET(ASBZSabotagableVehicle, MovingNavModifier); } \
	FORCEINLINE static uint32 __PPO__SabotageAreaOffset() { return STRUCT_OFFSET(ASBZSabotagableVehicle, SabotageAreaOffset); } \
	FORCEINLINE static uint32 __PPO__SabotagePointInstance() { return STRUCT_OFFSET(ASBZSabotagableVehicle, SabotagePointInstance); } \
	FORCEINLINE static uint32 __PPO__EscortCapsule() { return STRUCT_OFFSET(ASBZSabotagableVehicle, EscortCapsule); } \
	FORCEINLINE static uint32 __PPO__SpeedPerPlayer() { return STRUCT_OFFSET(ASBZSabotagableVehicle, SpeedPerPlayer); } \
	FORCEINLINE static uint32 __PPO__PlayersOverlapping() { return STRUCT_OFFSET(ASBZSabotagableVehicle, PlayersOverlapping); } \
	FORCEINLINE static uint32 __PPO__bEscortModeEnabled() { return STRUCT_OFFSET(ASBZSabotagableVehicle, bEscortModeEnabled); } \
	FORCEINLINE static uint32 __PPO__bStartWithEscortModeEnabled() { return STRUCT_OFFSET(ASBZSabotagableVehicle, bStartWithEscortModeEnabled); } \
	FORCEINLINE static uint32 __PPO__EscortSizePreplanningTag() { return STRUCT_OFFSET(ASBZSabotagableVehicle, EscortSizePreplanningTag); } \
	FORCEINLINE static uint32 __PPO__EscortCapsulePreplanningRadius() { return STRUCT_OFFSET(ASBZSabotagableVehicle, EscortCapsulePreplanningRadius); } \
	FORCEINLINE static uint32 __PPO__EscortCapsulePreplanningHalfHeight() { return STRUCT_OFFSET(ASBZSabotagableVehicle, EscortCapsulePreplanningHalfHeight); } \
	FORCEINLINE static uint32 __PPO__InsideTruckVolume() { return STRUCT_OFFSET(ASBZSabotagableVehicle, InsideTruckVolume); } \
	FORCEINLINE static uint32 __PPO__InsideTruckTeleportLocation() { return STRUCT_OFFSET(ASBZSabotagableVehicle, InsideTruckTeleportLocation); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_21_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSabotagableVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSabotagableVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
