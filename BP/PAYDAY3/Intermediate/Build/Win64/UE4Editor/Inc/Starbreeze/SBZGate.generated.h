// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAkAcousticPortal;
struct FVector;
struct FGameplayTag;
class ASBZAIBaseCharacter;
class APawn;
struct FSBZExplosionResult;
enum class ESBZGateState : uint8;
class USceneComponent;
#ifdef STARBREEZE_SBZGate_generated_h
#error "SBZGate.generated.h already included, missing '#pragma once' in SBZGate.h"
#endif
#define STARBREEZE_SBZGate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_RPC_WRAPPERS \
	virtual void Multicast_HandleAgilityTagEvent_Implementation(FGameplayTag const& TagEvent, ASBZAIBaseCharacter* AICharacterInstigator, FVector const& InstigatorLocation); \
	virtual void Multicast_OnAddIgnoreMoveActor_Implementation(APawn* InPawn); \
	virtual void Multicast_OnUnlockingLinkMoveEnded_Implementation(); \
	virtual void Multicast_OnUnlockingLinkMoveStarted_Implementation(); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetState_Implementation(ESBZGateState InState); \
 \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetAllowPortalStateChange); \
	DECLARE_FUNCTION(execGetPortalObject); \
	DECLARE_FUNCTION(execIsOpenForwardFromDirection); \
	DECLARE_FUNCTION(execIsOpenForwardFromLocation); \
	DECLARE_FUNCTION(execMulticast_HandleAgilityTagEvent); \
	DECLARE_FUNCTION(execMulticast_OnAddIgnoreMoveActor); \
	DECLARE_FUNCTION(execMulticast_OnUnlockingLinkMoveEnded); \
	DECLARE_FUNCTION(execMulticast_OnUnlockingLinkMoveStarted); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnStateDone); \
	DECLARE_FUNCTION(execSetAllowPortalStateChange); \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetYaw);


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_HandleAgilityTagEvent_Implementation(FGameplayTag const& TagEvent, ASBZAIBaseCharacter* AICharacterInstigator, FVector const& InstigatorLocation); \
	virtual void Multicast_OnAddIgnoreMoveActor_Implementation(APawn* InPawn); \
	virtual void Multicast_OnUnlockingLinkMoveEnded_Implementation(); \
	virtual void Multicast_OnUnlockingLinkMoveStarted_Implementation(); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetState_Implementation(ESBZGateState InState); \
 \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetAllowPortalStateChange); \
	DECLARE_FUNCTION(execGetPortalObject); \
	DECLARE_FUNCTION(execIsOpenForwardFromDirection); \
	DECLARE_FUNCTION(execIsOpenForwardFromLocation); \
	DECLARE_FUNCTION(execMulticast_HandleAgilityTagEvent); \
	DECLARE_FUNCTION(execMulticast_OnAddIgnoreMoveActor); \
	DECLARE_FUNCTION(execMulticast_OnUnlockingLinkMoveEnded); \
	DECLARE_FUNCTION(execMulticast_OnUnlockingLinkMoveStarted); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnStateDone); \
	DECLARE_FUNCTION(execSetAllowPortalStateChange); \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetYaw);


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_EVENT_PARMS \
	struct SBZGate_eventMulticast_HandleAgilityTagEvent_Parms \
	{ \
		FGameplayTag TagEvent; \
		ASBZAIBaseCharacter* AICharacterInstigator; \
		FVector InstigatorLocation; \
	}; \
	struct SBZGate_eventMulticast_OnAddIgnoreMoveActor_Parms \
	{ \
		APawn* InPawn; \
	}; \
	struct SBZGate_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZGate_eventMulticast_SetState_Parms \
	{ \
		ESBZGateState InState; \
	}; \
	struct SBZGate_eventOnStateChanged_Parms \
	{ \
		ESBZGateState OldState; \
		ESBZGateState NewState; \
		bool bIsInitialStateChange; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZGate(); \
	friend struct Z_Construct_UClass_ASBZGate_Statics; \
public: \
	DECLARE_CLASS(ASBZGate, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGate) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGate*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_INCLASS \
private: \
	static void StaticRegisterNativesASBZGate(); \
	friend struct Z_Construct_UClass_ASBZGate_Statics; \
public: \
	DECLARE_CLASS(ASBZGate, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGate) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGate*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		NETFIELD_REP_END=State	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZGate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGate(ASBZGate&&); \
	NO_API ASBZGate(const ASBZGate&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGate(ASBZGate&&); \
	NO_API ASBZGate(const ASBZGate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGate); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGate)


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InitialState() { return STRUCT_OFFSET(ASBZGate, InitialState); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ASBZGate, State); } \
	FORCEINLINE static uint32 __PPO__LinkMoveFinishedState() { return STRUCT_OFFSET(ASBZGate, LinkMoveFinishedState); } \
	FORCEINLINE static uint32 __PPO__ServerState() { return STRUCT_OFFSET(ASBZGate, ServerState); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZGate, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__OpenForwardExplosionData() { return STRUCT_OFFSET(ASBZGate, OpenForwardExplosionData); } \
	FORCEINLINE static uint32 __PPO__OpenBackwardExplosionData() { return STRUCT_OFFSET(ASBZGate, OpenBackwardExplosionData); } \
	FORCEINLINE static uint32 __PPO__CloseForwardExplosionData() { return STRUCT_OFFSET(ASBZGate, CloseForwardExplosionData); } \
	FORCEINLINE static uint32 __PPO__CloseBackwardExplosionData() { return STRUCT_OFFSET(ASBZGate, CloseBackwardExplosionData); } \
	FORCEINLINE static uint32 __PPO__MeshDataArray() { return STRUCT_OFFSET(ASBZGate, MeshDataArray); } \
	FORCEINLINE static uint32 __PPO__NavigationBoundBox() { return STRUCT_OFFSET(ASBZGate, NavigationBoundBox); } \
	FORCEINLINE static uint32 __PPO__bIsNavigationLinkCalculated() { return STRUCT_OFFSET(ASBZGate, bIsNavigationLinkCalculated); } \
	FORCEINLINE static uint32 __PPO__NavLinkCount() { return STRUCT_OFFSET(ASBZGate, NavLinkCount); } \
	FORCEINLINE static uint32 __PPO__NavlinkEnabledMask() { return STRUCT_OFFSET(ASBZGate, NavlinkEnabledMask); } \
	FORCEINLINE static uint32 __PPO__NavLinkComponentArray() { return STRUCT_OFFSET(ASBZGate, NavLinkComponentArray); } \
	FORCEINLINE static uint32 __PPO__NavLinkAgilityComponentArray() { return STRUCT_OFFSET(ASBZGate, NavLinkAgilityComponentArray); } \
	FORCEINLINE static uint32 __PPO__UnlockingLinkMoveCooldownDuration() { return STRUCT_OFFSET(ASBZGate, UnlockingLinkMoveCooldownDuration); } \
	FORCEINLINE static uint32 __PPO__UnlockingLinkMoveCooldownTime() { return STRUCT_OFFSET(ASBZGate, UnlockingLinkMoveCooldownTime); } \
	FORCEINLINE static uint32 __PPO__SlammedClosedSound() { return STRUCT_OFFSET(ASBZGate, SlammedClosedSound); } \
	FORCEINLINE static uint32 __PPO__SlammedOpenSound() { return STRUCT_OFFSET(ASBZGate, SlammedOpenSound); } \
	FORCEINLINE static uint32 __PPO__OpenSound() { return STRUCT_OFFSET(ASBZGate, OpenSound); } \
	FORCEINLINE static uint32 __PPO__CloseSound() { return STRUCT_OFFSET(ASBZGate, CloseSound); } \
	FORCEINLINE static uint32 __PPO__BreachSound() { return STRUCT_OFFSET(ASBZGate, BreachSound); } \
	FORCEINLINE static uint32 __PPO__UnlockSound() { return STRUCT_OFFSET(ASBZGate, UnlockSound); } \
	FORCEINLINE static uint32 __PPO__PortalObject() { return STRUCT_OFFSET(ASBZGate, PortalObject); } \
	FORCEINLINE static uint32 __PPO__bUseBreachPOIandSound() { return STRUCT_OFFSET(ASBZGate, bUseBreachPOIandSound); } \
	FORCEINLINE static uint32 __PPO__BreachSoundTag() { return STRUCT_OFFSET(ASBZGate, BreachSoundTag); } \
	FORCEINLINE static uint32 __PPO__NavAreaClass() { return STRUCT_OFFSET(ASBZGate, NavAreaClass); } \
	FORCEINLINE static uint32 __PPO__ToolSnapData() { return STRUCT_OFFSET(ASBZGate, ToolSnapData); } \
	FORCEINLINE static uint32 __PPO__SoundRange() { return STRUCT_OFFSET(ASBZGate, SoundRange); } \
	FORCEINLINE static uint32 __PPO__SoundRangeSlammedOpen() { return STRUCT_OFFSET(ASBZGate, SoundRangeSlammedOpen); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZGate, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__LeftNavlinkOffset() { return STRUCT_OFFSET(ASBZGate, LeftNavlinkOffset); } \
	FORCEINLINE static uint32 __PPO__RightNavlinkOffset() { return STRUCT_OFFSET(ASBZGate, RightNavlinkOffset); } \
	FORCEINLINE static uint32 __PPO__TraversableBehaviorCategoryBitmask() { return STRUCT_OFFSET(ASBZGate, TraversableBehaviorCategoryBitmask); } \
	FORCEINLINE static uint32 __PPO__ClosedGateSoundReduction() { return STRUCT_OFFSET(ASBZGate, ClosedGateSoundReduction); } \
	FORCEINLINE static uint32 __PPO__bIsServerRestoringState() { return STRUCT_OFFSET(ASBZGate, bIsServerRestoringState); } \
	FORCEINLINE static uint32 __PPO__PendingMoveIgnorePawn() { return STRUCT_OFFSET(ASBZGate, PendingMoveIgnorePawn); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_36_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGate_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZGate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
