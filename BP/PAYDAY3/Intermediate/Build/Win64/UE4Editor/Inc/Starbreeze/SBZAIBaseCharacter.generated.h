// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZEvadeType : uint8;
class UAnimMontage;
struct FTransform;
enum class ESBZAgilityType : uint8;
struct FSBZAgilityTrajectoryPoint;
class AActor;
#ifdef STARBREEZE_SBZAIBaseCharacter_generated_h
#error "SBZAIBaseCharacter.generated.h already included, missing '#pragma once' in SBZAIBaseCharacter.h"
#endif
#define STARBREEZE_SBZAIBaseCharacter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_RPC_WRAPPERS \
	virtual void Multicast_Evade_Implementation(ESBZEvadeType EvadeType, UAnimMontage* Montage); \
	virtual void Multicast_PlaceObjectCosmetics_Implementation(UAnimMontage* Montage); \
	virtual void Multicast_PlayAgilityMontage_Implementation(UAnimMontage* Montage, TArray<FTransform> const& WarpingTransforms, ESBZAgilityType AgilityType, TArray<FSBZAgilityTrajectoryPoint> const& TrajectoryPoints); \
	virtual void Multicast_PlayWarpedRootMotionMontage_Implementation(UAnimMontage* Montage, TArray<FTransform> const& WarpingTransforms); \
	virtual void Multicast_SetCurrentTarget_Implementation(AActor* NewTarget); \
	virtual void Multicast_StopAgilityMontage_Implementation(UAnimMontage* Montage); \
	virtual void Multicast_StopEvade_Implementation(); \
	virtual void Multicast_StopWarpedRootMotionMontage_Implementation(UAnimMontage* Montage, bool bCanPlayExit); \
	virtual void Multicast_Unmark_Implementation(float InMarkedDuration); \
 \
	DECLARE_FUNCTION(execGetTimeSinceLastAgility); \
	DECLARE_FUNCTION(execMulticast_Evade); \
	DECLARE_FUNCTION(execMulticast_PlaceObjectCosmetics); \
	DECLARE_FUNCTION(execMulticast_PlayAgilityMontage); \
	DECLARE_FUNCTION(execMulticast_PlayWarpedRootMotionMontage); \
	DECLARE_FUNCTION(execMulticast_SetCurrentTarget); \
	DECLARE_FUNCTION(execMulticast_StopAgilityMontage); \
	DECLARE_FUNCTION(execMulticast_StopEvade); \
	DECLARE_FUNCTION(execMulticast_StopWarpedRootMotionMontage); \
	DECLARE_FUNCTION(execMulticast_Unmark); \
	DECLARE_FUNCTION(execOnMontageStarted); \
	DECLARE_FUNCTION(execOnRep_AgentId);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_Evade_Implementation(ESBZEvadeType EvadeType, UAnimMontage* Montage); \
	virtual void Multicast_PlaceObjectCosmetics_Implementation(UAnimMontage* Montage); \
	virtual void Multicast_PlayAgilityMontage_Implementation(UAnimMontage* Montage, TArray<FTransform> const& WarpingTransforms, ESBZAgilityType AgilityType, TArray<FSBZAgilityTrajectoryPoint> const& TrajectoryPoints); \
	virtual void Multicast_PlayWarpedRootMotionMontage_Implementation(UAnimMontage* Montage, TArray<FTransform> const& WarpingTransforms); \
	virtual void Multicast_SetCurrentTarget_Implementation(AActor* NewTarget); \
	virtual void Multicast_StopAgilityMontage_Implementation(UAnimMontage* Montage); \
	virtual void Multicast_StopEvade_Implementation(); \
	virtual void Multicast_StopWarpedRootMotionMontage_Implementation(UAnimMontage* Montage, bool bCanPlayExit); \
	virtual void Multicast_Unmark_Implementation(float InMarkedDuration); \
 \
	DECLARE_FUNCTION(execGetTimeSinceLastAgility); \
	DECLARE_FUNCTION(execMulticast_Evade); \
	DECLARE_FUNCTION(execMulticast_PlaceObjectCosmetics); \
	DECLARE_FUNCTION(execMulticast_PlayAgilityMontage); \
	DECLARE_FUNCTION(execMulticast_PlayWarpedRootMotionMontage); \
	DECLARE_FUNCTION(execMulticast_SetCurrentTarget); \
	DECLARE_FUNCTION(execMulticast_StopAgilityMontage); \
	DECLARE_FUNCTION(execMulticast_StopEvade); \
	DECLARE_FUNCTION(execMulticast_StopWarpedRootMotionMontage); \
	DECLARE_FUNCTION(execMulticast_Unmark); \
	DECLARE_FUNCTION(execOnMontageStarted); \
	DECLARE_FUNCTION(execOnRep_AgentId);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_EVENT_PARMS \
	struct SBZAIBaseCharacter_eventMulticast_Evade_Parms \
	{ \
		ESBZEvadeType EvadeType; \
		UAnimMontage* Montage; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_PlaceObjectCosmetics_Parms \
	{ \
		UAnimMontage* Montage; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms \
	{ \
		UAnimMontage* Montage; \
		TArray<FTransform> WarpingTransforms; \
		ESBZAgilityType AgilityType; \
		TArray<FSBZAgilityTrajectoryPoint> TrajectoryPoints; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_PlayWarpedRootMotionMontage_Parms \
	{ \
		UAnimMontage* Montage; \
		TArray<FTransform> WarpingTransforms; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_SetCurrentTarget_Parms \
	{ \
		AActor* NewTarget; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_StopAgilityMontage_Parms \
	{ \
		UAnimMontage* Montage; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_StopWarpedRootMotionMontage_Parms \
	{ \
		UAnimMontage* Montage; \
		bool bCanPlayExit; \
	}; \
	struct SBZAIBaseCharacter_eventMulticast_Unmark_Parms \
	{ \
		float InMarkedDuration; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIBaseCharacter(); \
	friend struct Z_Construct_UClass_ASBZAIBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZAIBaseCharacter, ASBZCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIBaseCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteDesiredHeadYaw=NETFIELD_REP_START, \
		CurrentTarget, \
		AgentId, \
		NETFIELD_REP_END=AgentId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIBaseCharacter(); \
	friend struct Z_Construct_UClass_ASBZAIBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZAIBaseCharacter, ASBZCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIBaseCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteDesiredHeadYaw=NETFIELD_REP_START, \
		CurrentTarget, \
		AgentId, \
		NETFIELD_REP_END=AgentId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIBaseCharacter(ASBZAIBaseCharacter&&); \
	NO_API ASBZAIBaseCharacter(const ASBZAIBaseCharacter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIBaseCharacter(ASBZAIBaseCharacter&&); \
	NO_API ASBZAIBaseCharacter(const ASBZAIBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIBaseCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIBaseCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombatUtilityData() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CombatUtilityData); } \
	FORCEINLINE static uint32 __PPO__InvalidTargetTags() { return STRUCT_OFFSET(ASBZAIBaseCharacter, InvalidTargetTags); } \
	FORCEINLINE static uint32 __PPO__NavFilters() { return STRUCT_OFFSET(ASBZAIBaseCharacter, NavFilters); } \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSetClass() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AttributeSetClass); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__RemoteDesiredViewYaw() { return STRUCT_OFFSET(ASBZAIBaseCharacter, RemoteDesiredViewYaw); } \
	FORCEINLINE static uint32 __PPO__RemoteDesiredHeadYaw() { return STRUCT_OFFSET(ASBZAIBaseCharacter, RemoteDesiredHeadYaw); } \
	FORCEINLINE static uint32 __PPO__UtilityData() { return STRUCT_OFFSET(ASBZAIBaseCharacter, UtilityData); } \
	FORCEINLINE static uint32 __PPO__TypeTag() { return STRUCT_OFFSET(ASBZAIBaseCharacter, TypeTag); } \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__AgilityQueryParam() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AgilityQueryParam); } \
	FORCEINLINE static uint32 __PPO__CurrentNavLinkAgilityComponent() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CurrentNavLinkAgilityComponent); } \
	FORCEINLINE static uint32 __PPO__StimuliReactionComponent() { return STRUCT_OFFSET(ASBZAIBaseCharacter, StimuliReactionComponent); } \
	FORCEINLINE static uint32 __PPO__ComesticPropRef() { return STRUCT_OFFSET(ASBZAIBaseCharacter, ComesticPropRef); } \
	FORCEINLINE static uint32 __PPO__bCanEverDoIdleBreaker() { return STRUCT_OFFSET(ASBZAIBaseCharacter, bCanEverDoIdleBreaker); } \
	FORCEINLINE static uint32 __PPO__AIInteractorComponent() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AIInteractorComponent); } \
	FORCEINLINE static uint32 __PPO__PlacementComment() { return STRUCT_OFFSET(ASBZAIBaseCharacter, PlacementComment); } \
	FORCEINLINE static uint32 __PPO__CurrentRappellingRope() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CurrentRappellingRope); } \
	FORCEINLINE static uint32 __PPO__LastWarpedRootMotionMontage() { return STRUCT_OFFSET(ASBZAIBaseCharacter, LastWarpedRootMotionMontage); } \
	FORCEINLINE static uint32 __PPO__CurVehicleObstacle() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CurVehicleObstacle); } \
	FORCEINLINE static uint32 __PPO__CurVehicleHit() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CurVehicleHit); } \
	FORCEINLINE static uint32 __PPO__AllowedStanceTransitionData() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AllowedStanceTransitionData); } \
	FORCEINLINE static uint32 __PPO__AgentManager() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AgentManager); } \
	FORCEINLINE static uint32 __PPO__DeadlyFallHeight() { return STRUCT_OFFSET(ASBZAIBaseCharacter, DeadlyFallHeight); } \
	FORCEINLINE static uint32 __PPO__PathFocusSettings() { return STRUCT_OFFSET(ASBZAIBaseCharacter, PathFocusSettings); } \
	FORCEINLINE static uint32 __PPO__AgentId() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AgentId); } \
	FORCEINLINE static uint32 __PPO__AgentSettings() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AgentSettings); } \
	FORCEINLINE static uint32 __PPO__AgentCharacterMovement() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AgentCharacterMovement); } \
	FORCEINLINE static uint32 __PPO__NeighbourDetectionRange() { return STRUCT_OFFSET(ASBZAIBaseCharacter, NeighbourDetectionRange); } \
	FORCEINLINE static uint32 __PPO__Neighbours() { return STRUCT_OFFSET(ASBZAIBaseCharacter, Neighbours); } \
	FORCEINLINE static uint32 __PPO__AvoidanceRandomWeight() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AvoidanceRandomWeight); } \
	FORCEINLINE static uint32 __PPO__bIsAvoidanceEnabled() { return STRUCT_OFFSET(ASBZAIBaseCharacter, bIsAvoidanceEnabled); } \
	FORCEINLINE static uint32 __PPO__PlayingAgilityMontage() { return STRUCT_OFFSET(ASBZAIBaseCharacter, PlayingAgilityMontage); } \
	FORCEINLINE static uint32 __PPO__bCanDoEvadeDuringPathing() { return STRUCT_OFFSET(ASBZAIBaseCharacter, bCanDoEvadeDuringPathing); } \
	FORCEINLINE static uint32 __PPO__bCanDoEvades() { return STRUCT_OFFSET(ASBZAIBaseCharacter, bCanDoEvades); } \
	FORCEINLINE static uint32 __PPO__AdditiveBaseEyeHeightTickRate() { return STRUCT_OFFSET(ASBZAIBaseCharacter, AdditiveBaseEyeHeightTickRate); } \
	FORCEINLINE static uint32 __PPO__CivilianNearRange() { return STRUCT_OFFSET(ASBZAIBaseCharacter, CivilianNearRange); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_39_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
