// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
struct FSBZCoverShootingPoints;
enum class ESBZShootingPointType : uint8;
class APawn;
#ifdef STARBREEZE_SBZCoverPoint_generated_h
#error "SBZCoverPoint.generated.h already included, missing '#pragma once' in SBZCoverPoint.h"
#endif
#define STARBREEZE_SBZCoverPoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbandon); \
	DECLARE_FUNCTION(execBlockingActorEntered); \
	DECLARE_FUNCTION(execBlockingActorLeft); \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execComputeValidShootingPoints); \
	DECLARE_FUNCTION(execGetOccupant); \
	DECLARE_FUNCTION(execGetReservedForActor); \
	DECLARE_FUNCTION(execGetValidShootingPoints); \
	DECLARE_FUNCTION(execHasAnyShootingPointLOS_Synchronously); \
	DECLARE_FUNCTION(execHasShootingPointLOS_Synchronously); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsBlockedBy); \
	DECLARE_FUNCTION(execIsComputed); \
	DECLARE_FUNCTION(execIsCrouchingCover); \
	DECLARE_FUNCTION(execIsFree); \
	DECLARE_FUNCTION(execIsLowCover); \
	DECLARE_FUNCTION(execIsOccupied); \
	DECLARE_FUNCTION(execIsRegistered); \
	DECLARE_FUNCTION(execIsReserved); \
	DECLARE_FUNCTION(execIsStandingCover); \
	DECLARE_FUNCTION(execOccupy); \
	DECLARE_FUNCTION(execOnBlockerKilled); \
	DECLARE_FUNCTION(execOnOccupantKilled); \
	DECLARE_FUNCTION(execReserve);


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbandon); \
	DECLARE_FUNCTION(execBlockingActorEntered); \
	DECLARE_FUNCTION(execBlockingActorLeft); \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execComputeValidShootingPoints); \
	DECLARE_FUNCTION(execGetOccupant); \
	DECLARE_FUNCTION(execGetReservedForActor); \
	DECLARE_FUNCTION(execGetValidShootingPoints); \
	DECLARE_FUNCTION(execHasAnyShootingPointLOS_Synchronously); \
	DECLARE_FUNCTION(execHasShootingPointLOS_Synchronously); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsBlockedBy); \
	DECLARE_FUNCTION(execIsComputed); \
	DECLARE_FUNCTION(execIsCrouchingCover); \
	DECLARE_FUNCTION(execIsFree); \
	DECLARE_FUNCTION(execIsLowCover); \
	DECLARE_FUNCTION(execIsOccupied); \
	DECLARE_FUNCTION(execIsRegistered); \
	DECLARE_FUNCTION(execIsReserved); \
	DECLARE_FUNCTION(execIsStandingCover); \
	DECLARE_FUNCTION(execOccupy); \
	DECLARE_FUNCTION(execOnBlockerKilled); \
	DECLARE_FUNCTION(execOnOccupantKilled); \
	DECLARE_FUNCTION(execReserve);


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCoverPoint(); \
	friend struct Z_Construct_UClass_ASBZCoverPoint_Statics; \
public: \
	DECLARE_CLASS(ASBZCoverPoint, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCoverPoint) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCoverPoint*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASBZCoverPoint(); \
	friend struct Z_Construct_UClass_ASBZCoverPoint_Statics; \
public: \
	DECLARE_CLASS(ASBZCoverPoint, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCoverPoint) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCoverPoint*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCoverPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCoverPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCoverPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCoverPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCoverPoint(ASBZCoverPoint&&); \
	NO_API ASBZCoverPoint(const ASBZCoverPoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCoverPoint(ASBZCoverPoint&&); \
	NO_API ASBZCoverPoint(const ASBZCoverPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCoverPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCoverPoint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCoverPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIVisibilityPayload() { return STRUCT_OFFSET(ASBZCoverPoint, AIVisibilityPayload); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNode() { return STRUCT_OFFSET(ASBZCoverPoint, AIVisibilityNode); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNodeComputationFrequency() { return STRUCT_OFFSET(ASBZCoverPoint, AIVisibilityNodeComputationFrequency); } \
	FORCEINLINE static uint32 __PPO__LinkRadius() { return STRUCT_OFFSET(ASBZCoverPoint, LinkRadius); } \
	FORCEINLINE static uint32 __PPO__BlockingActors() { return STRUCT_OFFSET(ASBZCoverPoint, BlockingActors); } \
	FORCEINLINE static uint32 __PPO__OverlappingActors() { return STRUCT_OFFSET(ASBZCoverPoint, OverlappingActors); } \
	FORCEINLINE static uint32 __PPO__ShootingPointsVisibilityInfo() { return STRUCT_OFFSET(ASBZCoverPoint, ShootingPointsVisibilityInfo); } \
	FORCEINLINE static uint32 __PPO__CurrentRoom() { return STRUCT_OFFSET(ASBZCoverPoint, CurrentRoom); } \
	FORCEINLINE static uint32 __PPO__ValidShootingPoints() { return STRUCT_OFFSET(ASBZCoverPoint, ValidShootingPoints); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_21_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCoverPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCoverPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
