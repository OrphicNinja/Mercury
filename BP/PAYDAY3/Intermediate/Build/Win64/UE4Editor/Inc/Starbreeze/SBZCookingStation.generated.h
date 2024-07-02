// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
enum class ESBZCookingState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZCookingStation_generated_h
#error "SBZCookingStation.generated.h already included, missing '#pragma once' in SBZCookingStation.h"
#endif
#define STARBREEZE_SBZCookingStation_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetState_Implementation(ESBZCookingState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnAckIngredientAdded); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnSabotageChanged); \
	DECLARE_FUNCTION(execSetCookingEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetState_Implementation(ESBZCookingState NewState); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnAckIngredientAdded); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnSabotageChanged); \
	DECLARE_FUNCTION(execSetCookingEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_EVENT_PARMS \
	struct SBZCookingStation_eventBP_OnIngredientAdded_Parms \
	{ \
		int32 IngredientIndex; \
	}; \
	struct SBZCookingStation_eventBP_OnStateChanged_Parms \
	{ \
		ESBZCookingState OldState; \
		ESBZCookingState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZCookingStation_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZCookingStation_eventMulticast_SetState_Parms \
	{ \
		ESBZCookingState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCookingStation(); \
	friend struct Z_Construct_UClass_ASBZCookingStation_Statics; \
public: \
	DECLARE_CLASS(ASBZCookingStation, ASBZMultiBagGenerator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCookingStation) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCookingStation*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_INCLASS \
private: \
	static void StaticRegisterNativesASBZCookingStation(); \
	friend struct Z_Construct_UClass_ASBZCookingStation_Statics; \
public: \
	DECLARE_CLASS(ASBZCookingStation, ASBZMultiBagGenerator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCookingStation) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCookingStation*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCookingStation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCookingStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCookingStation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCookingStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCookingStation(ASBZCookingStation&&); \
	NO_API ASBZCookingStation(const ASBZCookingStation&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCookingStation(ASBZCookingStation&&); \
	NO_API ASBZCookingStation(const ASBZCookingStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCookingStation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCookingStation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCookingStation)


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IngredientInteractableArray() { return STRUCT_OFFSET(ASBZCookingStation, IngredientInteractableArray); } \
	FORCEINLINE static uint32 __PPO__SabotagePointArray() { return STRUCT_OFFSET(ASBZCookingStation, SabotagePointArray); } \
	FORCEINLINE static uint32 __PPO__SecondaryBagType() { return STRUCT_OFFSET(ASBZCookingStation, SecondaryBagType); } \
	FORCEINLINE static uint32 __PPO__TertiaryBagType() { return STRUCT_OFFSET(ASBZCookingStation, TertiaryBagType); } \
	FORCEINLINE static uint32 __PPO__IngredientWaitInterval() { return STRUCT_OFFSET(ASBZCookingStation, IngredientWaitInterval); } \
	FORCEINLINE static uint32 __PPO__CookingDurationArray() { return STRUCT_OFFSET(ASBZCookingStation, CookingDurationArray); } \
	FORCEINLINE static uint32 __PPO__SabotagableStateBitmask() { return STRUCT_OFFSET(ASBZCookingStation, SabotagableStateBitmask); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZCookingStation, Seed); } \
	FORCEINLINE static uint32 __PPO__IncreasedCookedDurationTag() { return STRUCT_OFFSET(ASBZCookingStation, IncreasedCookedDurationTag); } \
	FORCEINLINE static uint32 __PPO__IncreasedCookedDuration() { return STRUCT_OFFSET(ASBZCookingStation, IncreasedCookedDuration); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ASBZCookingStation, CurrentState); } \
	FORCEINLINE static uint32 __PPO__ExplosionSoundEvent() { return STRUCT_OFFSET(ASBZCookingStation, ExplosionSoundEvent); } \
	FORCEINLINE static uint32 __PPO__ExplosionDelay() { return STRUCT_OFFSET(ASBZCookingStation, ExplosionDelay); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRadius() { return STRUCT_OFFSET(ASBZCookingStation, AIExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRadius() { return STRUCT_OFFSET(ASBZCookingStation, PlayerExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__DamageDistanceArray() { return STRUCT_OFFSET(ASBZCookingStation, DamageDistanceArray); } \
	FORCEINLINE static uint32 __PPO__ArmorPenetration() { return STRUCT_OFFSET(ASBZCookingStation, ArmorPenetration); } \
	FORCEINLINE static uint32 __PPO__FriendlyFireDamageScale() { return STRUCT_OFFSET(ASBZCookingStation, FriendlyFireDamageScale); } \
	FORCEINLINE static uint32 __PPO__FriendlyFireArmorPenetrationScale() { return STRUCT_OFFSET(ASBZCookingStation, FriendlyFireArmorPenetrationScale); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamageType() { return STRUCT_OFFSET(ASBZCookingStation, ExplosionDamageType); } \
	FORCEINLINE static uint32 __PPO__GameplayEffectClass() { return STRUCT_OFFSET(ASBZCookingStation, GameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASBZCookingStation, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__bDoDecal() { return STRUCT_OFFSET(ASBZCookingStation, bDoDecal); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerFeedback() { return STRUCT_OFFSET(ASBZCookingStation, LocalPlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__PostDamagePhysicsEffectData() { return STRUCT_OFFSET(ASBZCookingStation, PostDamagePhysicsEffectData); } \
	FORCEINLINE static uint32 __PPO__PlayerFeedbackCurve() { return STRUCT_OFFSET(ASBZCookingStation, PlayerFeedbackCurve); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZCookingStation, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__LastInteractor() { return STRUCT_OFFSET(ASBZCookingStation, LastInteractor); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_34_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCookingStation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCookingStation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
