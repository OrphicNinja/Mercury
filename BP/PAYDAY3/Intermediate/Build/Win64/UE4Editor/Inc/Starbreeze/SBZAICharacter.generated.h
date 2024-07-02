// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZRoomScanningType : uint8;
enum class ESBZAIBehaviorCategory : uint8;
enum class ESBZAICharacterVariationCategory : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
enum class ESBZNegotiationTradeType : uint8;
class ASBZCarriedStaticInteractionActor;
#ifdef STARBREEZE_SBZAICharacter_generated_h
#error "SBZAICharacter.generated.h already included, missing '#pragma once' in SBZAICharacter.h"
#endif
#define STARBREEZE_SBZAICharacter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_RPC_WRAPPERS \
	virtual void Multicast_DropAttachedLoot_Implementation(); \
	virtual void Multicast_HostageState_Implementation(uint8 InHostageState); \
	virtual void Multicast_RoomScanning_Implementation(ESBZRoomScanningType RoomScanningType, int32 AnimationIndex); \
	virtual void Multicast_SetAsObjectiveState_Implementation(uint8 NewAsObjectiveState); \
	virtual void Multicast_SetBehaviorCategory_Implementation(ESBZAIBehaviorCategory RepCategory); \
	virtual void Multicast_SetHacked_Implementation(float Duration); \
	virtual void Multicast_SetInCover_Implementation(bool bInIsInCover); \
	virtual void Multicast_SetVariationCategory_Implementation(ESBZAICharacterVariationCategory Category); \
	virtual void Multicast_StopRoomScanning_Implementation(ESBZRoomScanningType RoomScanningType); \
	virtual void Multicast_Surrender_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableAsObjective); \
	DECLARE_FUNCTION(execEnableAsObjective); \
	DECLARE_FUNCTION(execMulticast_DropAttachedLoot); \
	DECLARE_FUNCTION(execMulticast_HostageState); \
	DECLARE_FUNCTION(execMulticast_RoomScanning); \
	DECLARE_FUNCTION(execMulticast_SetAsObjectiveState); \
	DECLARE_FUNCTION(execMulticast_SetBehaviorCategory); \
	DECLARE_FUNCTION(execMulticast_SetHacked); \
	DECLARE_FUNCTION(execMulticast_SetInCover); \
	DECLARE_FUNCTION(execMulticast_SetVariationCategory); \
	DECLARE_FUNCTION(execMulticast_StopRoomScanning); \
	DECLARE_FUNCTION(execMulticast_Surrender); \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnAckRejectedPredictedInteraction); \
	DECLARE_FUNCTION(execOnAttachedLootTaken); \
	DECLARE_FUNCTION(execOnEndInteraction); \
	DECLARE_FUNCTION(execOnNegotiationTradeTypeChanged); \
	DECLARE_FUNCTION(execOnPredictedAbortInteraction); \
	DECLARE_FUNCTION(execOnPredictedEndInteraction); \
	DECLARE_FUNCTION(execOnRep_AsObjectiveState); \
	DECLARE_FUNCTION(execOnRep_BehaviorCategory); \
	DECLARE_FUNCTION(execOnRep_HostageState); \
	DECLARE_FUNCTION(execOnRep_IsSurrendered); \
	DECLARE_FUNCTION(execOnRep_TelegraphAttack); \
	DECLARE_FUNCTION(execOnRep_VariationCategory); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnServerECMCountChanged); \
	DECLARE_FUNCTION(execOnServerEndInteraction); \
	DECLARE_FUNCTION(execOnServerStartInteraction); \
	DECLARE_FUNCTION(execOnStartInteraction); \
	DECLARE_FUNCTION(execRemoveMarkerFromAsObjective); \
	DECLARE_FUNCTION(execSetStartRoomLabel); \
	DECLARE_FUNCTION(execSpawnLootOnCharacter);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DropAttachedLoot_Implementation(); \
	virtual void Multicast_HostageState_Implementation(uint8 InHostageState); \
	virtual void Multicast_RoomScanning_Implementation(ESBZRoomScanningType RoomScanningType, int32 AnimationIndex); \
	virtual void Multicast_SetAsObjectiveState_Implementation(uint8 NewAsObjectiveState); \
	virtual void Multicast_SetBehaviorCategory_Implementation(ESBZAIBehaviorCategory RepCategory); \
	virtual void Multicast_SetHacked_Implementation(float Duration); \
	virtual void Multicast_SetInCover_Implementation(bool bInIsInCover); \
	virtual void Multicast_SetVariationCategory_Implementation(ESBZAICharacterVariationCategory Category); \
	virtual void Multicast_StopRoomScanning_Implementation(ESBZRoomScanningType RoomScanningType); \
	virtual void Multicast_Surrender_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableAsObjective); \
	DECLARE_FUNCTION(execEnableAsObjective); \
	DECLARE_FUNCTION(execMulticast_DropAttachedLoot); \
	DECLARE_FUNCTION(execMulticast_HostageState); \
	DECLARE_FUNCTION(execMulticast_RoomScanning); \
	DECLARE_FUNCTION(execMulticast_SetAsObjectiveState); \
	DECLARE_FUNCTION(execMulticast_SetBehaviorCategory); \
	DECLARE_FUNCTION(execMulticast_SetHacked); \
	DECLARE_FUNCTION(execMulticast_SetInCover); \
	DECLARE_FUNCTION(execMulticast_SetVariationCategory); \
	DECLARE_FUNCTION(execMulticast_StopRoomScanning); \
	DECLARE_FUNCTION(execMulticast_Surrender); \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnAckRejectedPredictedInteraction); \
	DECLARE_FUNCTION(execOnAttachedLootTaken); \
	DECLARE_FUNCTION(execOnEndInteraction); \
	DECLARE_FUNCTION(execOnNegotiationTradeTypeChanged); \
	DECLARE_FUNCTION(execOnPredictedAbortInteraction); \
	DECLARE_FUNCTION(execOnPredictedEndInteraction); \
	DECLARE_FUNCTION(execOnRep_AsObjectiveState); \
	DECLARE_FUNCTION(execOnRep_BehaviorCategory); \
	DECLARE_FUNCTION(execOnRep_HostageState); \
	DECLARE_FUNCTION(execOnRep_IsSurrendered); \
	DECLARE_FUNCTION(execOnRep_TelegraphAttack); \
	DECLARE_FUNCTION(execOnRep_VariationCategory); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnServerECMCountChanged); \
	DECLARE_FUNCTION(execOnServerEndInteraction); \
	DECLARE_FUNCTION(execOnServerStartInteraction); \
	DECLARE_FUNCTION(execOnStartInteraction); \
	DECLARE_FUNCTION(execRemoveMarkerFromAsObjective); \
	DECLARE_FUNCTION(execSetStartRoomLabel); \
	DECLARE_FUNCTION(execSpawnLootOnCharacter);


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_EVENT_PARMS \
	struct SBZAICharacter_eventMulticast_HostageState_Parms \
	{ \
		uint8 InHostageState; \
	}; \
	struct SBZAICharacter_eventMulticast_RoomScanning_Parms \
	{ \
		ESBZRoomScanningType RoomScanningType; \
		int32 AnimationIndex; \
	}; \
	struct SBZAICharacter_eventMulticast_SetAsObjectiveState_Parms \
	{ \
		uint8 NewAsObjectiveState; \
	}; \
	struct SBZAICharacter_eventMulticast_SetBehaviorCategory_Parms \
	{ \
		ESBZAIBehaviorCategory RepCategory; \
	}; \
	struct SBZAICharacter_eventMulticast_SetHacked_Parms \
	{ \
		float Duration; \
	}; \
	struct SBZAICharacter_eventMulticast_SetInCover_Parms \
	{ \
		bool bInIsInCover; \
	}; \
	struct SBZAICharacter_eventMulticast_SetVariationCategory_Parms \
	{ \
		ESBZAICharacterVariationCategory Category; \
	}; \
	struct SBZAICharacter_eventMulticast_StopRoomScanning_Parms \
	{ \
		ESBZRoomScanningType RoomScanningType; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAICharacter(); \
	friend struct Z_Construct_UClass_ASBZAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZAICharacter, ASBZAIBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAICharacter*>(this); } \
	enum class EArrayDims_Private : uint16 \
	{ \
		VariationCategoryIndexIntervals=3, \
	}; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HostageState=NETFIELD_REP_START, \
		bIsSurrendered, \
		CurrentBehaviorCategory, \
		EquipmentData, \
		AsObjectiveState, \
		VariationData, \
		VariationCategoryIndexIntervals_STATIC_ARRAY, \
		VariationCategoryIndexIntervals_STATIC_ARRAY_END=((uint16)VariationCategoryIndexIntervals_STATIC_ARRAY + (uint16)EArrayDims_Private::VariationCategoryIndexIntervals - (uint16)1), \
		bTelegraphAttack, \
		VariationCategory, \
		NETFIELD_REP_END=VariationCategory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_INCLASS \
private: \
	static void StaticRegisterNativesASBZAICharacter(); \
	friend struct Z_Construct_UClass_ASBZAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZAICharacter, ASBZAIBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAICharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAICharacter*>(this); } \
	enum class EArrayDims_Private : uint16 \
	{ \
		VariationCategoryIndexIntervals=3, \
	}; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HostageState=NETFIELD_REP_START, \
		bIsSurrendered, \
		CurrentBehaviorCategory, \
		EquipmentData, \
		AsObjectiveState, \
		VariationData, \
		VariationCategoryIndexIntervals_STATIC_ARRAY, \
		VariationCategoryIndexIntervals_STATIC_ARRAY_END=((uint16)VariationCategoryIndexIntervals_STATIC_ARRAY + (uint16)EArrayDims_Private::VariationCategoryIndexIntervals - (uint16)1), \
		bTelegraphAttack, \
		VariationCategory, \
		NETFIELD_REP_END=VariationCategory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICharacter(ASBZAICharacter&&); \
	NO_API ASBZAICharacter(const ASBZAICharacter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAICharacter(ASBZAICharacter&&); \
	NO_API ASBZAICharacter(const ASBZAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAICharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostageState() { return STRUCT_OFFSET(ASBZAICharacter, HostageState); } \
	FORCEINLINE static uint32 __PPO__bIsSurrendered() { return STRUCT_OFFSET(ASBZAICharacter, bIsSurrendered); } \
	FORCEINLINE static uint32 __PPO__CurrentBehaviorCategory() { return STRUCT_OFFSET(ASBZAICharacter, CurrentBehaviorCategory); } \
	FORCEINLINE static uint32 __PPO__SensorComponent() { return STRUCT_OFFSET(ASBZAICharacter, SensorComponent); } \
	FORCEINLINE static uint32 __PPO__ShoutTargetComponent() { return STRUCT_OFFSET(ASBZAICharacter, ShoutTargetComponent); } \
	FORCEINLINE static uint32 __PPO__EquipmentData() { return STRUCT_OFFSET(ASBZAICharacter, EquipmentData); } \
	FORCEINLINE static uint32 __PPO__HumanShieldData() { return STRUCT_OFFSET(ASBZAICharacter, HumanShieldData); } \
	FORCEINLINE static uint32 __PPO__SurrenderedHumanShieldData() { return STRUCT_OFFSET(ASBZAICharacter, SurrenderedHumanShieldData); } \
	FORCEINLINE static uint32 __PPO__SurrenderedUtilityData() { return STRUCT_OFFSET(ASBZAICharacter, SurrenderedUtilityData); } \
	FORCEINLINE static uint32 __PPO__AmmoPickupAsset() { return STRUCT_OFFSET(ASBZAICharacter, AmmoPickupAsset); } \
	FORCEINLINE static uint32 __PPO__PlaceablePickupAssetArray() { return STRUCT_OFFSET(ASBZAICharacter, PlaceablePickupAssetArray); } \
	FORCEINLINE static uint32 __PPO__PlaceableSpawnForwardOffset() { return STRUCT_OFFSET(ASBZAICharacter, PlaceableSpawnForwardOffset); } \
	FORCEINLINE static uint32 __PPO__TradeHostagePickupAssetArray() { return STRUCT_OFFSET(ASBZAICharacter, TradeHostagePickupAssetArray); } \
	FORCEINLINE static uint32 __PPO__AlertnessDataComponent() { return STRUCT_OFFSET(ASBZAICharacter, AlertnessDataComponent); } \
	FORCEINLINE static uint32 __PPO__MarkerComponent() { return STRUCT_OFFSET(ASBZAICharacter, MarkerComponent); } \
	FORCEINLINE static uint32 __PPO__HelmetPopper() { return STRUCT_OFFSET(ASBZAICharacter, HelmetPopper); } \
	FORCEINLINE static uint32 __PPO__SpecialType() { return STRUCT_OFFSET(ASBZAICharacter, SpecialType); } \
	FORCEINLINE static uint32 __PPO__PhysicalAnimationComponent() { return STRUCT_OFFSET(ASBZAICharacter, PhysicalAnimationComponent); } \
	FORCEINLINE static uint32 __PPO__bCanRunWhileFocusing() { return STRUCT_OFFSET(ASBZAICharacter, bCanRunWhileFocusing); } \
	FORCEINLINE static uint32 __PPO__bShouldTelegraphAttack() { return STRUCT_OFFSET(ASBZAICharacter, bShouldTelegraphAttack); } \
	FORCEINLINE static uint32 __PPO__PreferredCoverDist() { return STRUCT_OFFSET(ASBZAICharacter, PreferredCoverDist); } \
	FORCEINLINE static uint32 __PPO__InteractionActions() { return STRUCT_OFFSET(ASBZAICharacter, InteractionActions); } \
	FORCEINLINE static uint32 __PPO__TradeOutline() { return STRUCT_OFFSET(ASBZAICharacter, TradeOutline); } \
	FORCEINLINE static uint32 __PPO__ReleasedOutline() { return STRUCT_OFFSET(ASBZAICharacter, ReleasedOutline); } \
	FORCEINLINE static uint32 __PPO__ObjectiveOutline() { return STRUCT_OFFSET(ASBZAICharacter, ObjectiveOutline); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMarker() { return STRUCT_OFFSET(ASBZAICharacter, ObjectiveMarker); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMarkerOffset() { return STRUCT_OFFSET(ASBZAICharacter, ObjectiveMarkerOffset); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMarkerSocketName() { return STRUCT_OFFSET(ASBZAICharacter, ObjectiveMarkerSocketName); } \
	FORCEINLINE static uint32 __PPO__StartRoomLabel() { return STRUCT_OFFSET(ASBZAICharacter, StartRoomLabel); } \
	FORCEINLINE static uint32 __PPO__AsObjectiveState() { return STRUCT_OFFSET(ASBZAICharacter, AsObjectiveState); } \
	FORCEINLINE static uint32 __PPO__VariationData() { return STRUCT_OFFSET(ASBZAICharacter, VariationData); } \
	FORCEINLINE static uint32 __PPO__VariationCategoryIndexIntervals() { return STRUCT_OFFSET(ASBZAICharacter, VariationCategoryIndexIntervals); } \
	FORCEINLINE static uint32 __PPO__LastInteractorCharacter() { return STRUCT_OFFSET(ASBZAICharacter, LastInteractorCharacter); } \
	FORCEINLINE static uint32 __PPO__ShotBlockedDownTime() { return STRUCT_OFFSET(ASBZAICharacter, ShotBlockedDownTime); } \
	FORCEINLINE static uint32 __PPO__SurrenderedNavFilter() { return STRUCT_OFFSET(ASBZAICharacter, SurrenderedNavFilter); } \
	FORCEINLINE static uint32 __PPO__TagToStanceMappingTable() { return STRUCT_OFFSET(ASBZAICharacter, TagToStanceMappingTable); } \
	FORCEINLINE static uint32 __PPO__bTelegraphAttack() { return STRUCT_OFFSET(ASBZAICharacter, bTelegraphAttack); } \
	FORCEINLINE static uint32 __PPO__FireWeaponComment() { return STRUCT_OFFSET(ASBZAICharacter, FireWeaponComment); } \
	FORCEINLINE static uint32 __PPO__OnKilledComment() { return STRUCT_OFFSET(ASBZAICharacter, OnKilledComment); } \
	FORCEINLINE static uint32 __PPO__TauntComment() { return STRUCT_OFFSET(ASBZAICharacter, TauntComment); } \
	FORCEINLINE static uint32 __PPO__HumanShieldTaken() { return STRUCT_OFFSET(ASBZAICharacter, HumanShieldTaken); } \
	FORCEINLINE static uint32 __PPO__HumanShieldReleased() { return STRUCT_OFFSET(ASBZAICharacter, HumanShieldReleased); } \
	FORCEINLINE static uint32 __PPO__DeadBodyPOIClass() { return STRUCT_OFFSET(ASBZAICharacter, DeadBodyPOIClass); } \
	FORCEINLINE static uint32 __PPO__HostagePOIClass() { return STRUCT_OFFSET(ASBZAICharacter, HostagePOIClass); } \
	FORCEINLINE static uint32 __PPO__HumanShieldPOIClass() { return STRUCT_OFFSET(ASBZAICharacter, HumanShieldPOIClass); } \
	FORCEINLINE static uint32 __PPO__DeadBodyPOIInstance() { return STRUCT_OFFSET(ASBZAICharacter, DeadBodyPOIInstance); } \
	FORCEINLINE static uint32 __PPO__HostagePOIInstance() { return STRUCT_OFFSET(ASBZAICharacter, HostagePOIInstance); } \
	FORCEINLINE static uint32 __PPO__HumanShieldPOIInstance() { return STRUCT_OFFSET(ASBZAICharacter, HumanShieldPOIInstance); } \
	FORCEINLINE static uint32 __PPO__LastTieHandsInstigatorPlayerState() { return STRUCT_OFFSET(ASBZAICharacter, LastTieHandsInstigatorPlayerState); } \
	FORCEINLINE static uint32 __PPO__PagerData() { return STRUCT_OFFSET(ASBZAICharacter, PagerData); } \
	FORCEINLINE static uint32 __PPO__PagerTriggeredCount() { return STRUCT_OFFSET(ASBZAICharacter, PagerTriggeredCount); } \
	FORCEINLINE static uint32 __PPO__PagerSnatchedInteractor() { return STRUCT_OFFSET(ASBZAICharacter, PagerSnatchedInteractor); } \
	FORCEINLINE static uint32 __PPO__NavQueryFilterOverride() { return STRUCT_OFFSET(ASBZAICharacter, NavQueryFilterOverride); } \
	FORCEINLINE static uint32 __PPO__ValidTargetDefeatStates() { return STRUCT_OFFSET(ASBZAICharacter, ValidTargetDefeatStates); } \
	FORCEINLINE static uint32 __PPO__bCanShootDownedIfFired() { return STRUCT_OFFSET(ASBZAICharacter, bCanShootDownedIfFired); } \
	FORCEINLINE static uint32 __PPO__HackedGameplayEffectClass() { return STRUCT_OFFSET(ASBZAICharacter, HackedGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__AttachedLoot() { return STRUCT_OFFSET(ASBZAICharacter, AttachedLoot); } \
	FORCEINLINE static uint32 __PPO__CurrentLifeActionTriggerVolume() { return STRUCT_OFFSET(ASBZAICharacter, CurrentLifeActionTriggerVolume); } \
	FORCEINLINE static uint32 __PPO__LocallyDamagedByPlayer() { return STRUCT_OFFSET(ASBZAICharacter, LocallyDamagedByPlayer); } \
	FORCEINLINE static uint32 __PPO__PendingMeleeDownOnGoundInstigator() { return STRUCT_OFFSET(ASBZAICharacter, PendingMeleeDownOnGoundInstigator); } \
	FORCEINLINE static uint32 __PPO__SurrenderInstigatorPlayerState() { return STRUCT_OFFSET(ASBZAICharacter, SurrenderInstigatorPlayerState); } \
	FORCEINLINE static uint32 __PPO__VariationCategory() { return STRUCT_OFFSET(ASBZAICharacter, VariationCategory); } \
	FORCEINLINE static uint32 __PPO__MarkGuard() { return STRUCT_OFFSET(ASBZAICharacter, MarkGuard); } \
	FORCEINLINE static uint32 __PPO__MarkSpecials() { return STRUCT_OFFSET(ASBZAICharacter, MarkSpecials); } \
	FORCEINLINE static uint32 __PPO__MarkEnemy() { return STRUCT_OFFSET(ASBZAICharacter, MarkEnemy); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkEnemyCamera() { return STRUCT_OFFSET(ASBZAICharacter, StatisticsMarkEnemyCamera); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkEnemyMicroCamera() { return STRUCT_OFFSET(ASBZAICharacter, StatisticsMarkEnemyMicroCamera); } \
	FORCEINLINE static uint32 __PPO__bCanBeSeenByThermalScope() { return STRUCT_OFFSET(ASBZAICharacter, bCanBeSeenByThermalScope); } \
	FORCEINLINE static uint32 __PPO__CQCSpecialistPinPullerDoneSet() { return STRUCT_OFFSET(ASBZAICharacter, CQCSpecialistPinPullerDoneSet); } \
	FORCEINLINE static uint32 __PPO__CQCSpecialistSoftAssetsDoneSet() { return STRUCT_OFFSET(ASBZAICharacter, CQCSpecialistSoftAssetsDoneSet); } \
	FORCEINLINE static uint32 __PPO__TripperMarkedInfoArray() { return STRUCT_OFFSET(ASBZAICharacter, TripperMarkedInfoArray); } \
	FORCEINLINE static uint32 __PPO__KillInstigatorController() { return STRUCT_OFFSET(ASBZAICharacter, KillInstigatorController); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_57_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
