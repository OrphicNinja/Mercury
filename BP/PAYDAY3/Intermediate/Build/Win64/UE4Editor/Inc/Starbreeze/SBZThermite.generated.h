// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZThermiteBurnState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZThermite_generated_h
#error "SBZThermite.generated.h already included, missing '#pragma once' in SBZThermite.h"
#endif
#define STARBREEZE_SBZThermite_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_RPC_WRAPPERS \
	virtual void Multicast_SetOutsideInterference_Implementation(bool bInIsActive); \
	virtual void Multicast_SetState_Implementation(ESBZThermiteBurnState NewState); \
	virtual void Multicast_ThermiteBagOverlapped_Implementation(bool bIsInitialBag); \
 \
	DECLARE_FUNCTION(execMulticast_SetOutsideInterference); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execMulticast_ThermiteBagOverlapped); \
	DECLARE_FUNCTION(execOnAckCompleteIgnition); \
	DECLARE_FUNCTION(execOnBoxComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnRep_IsInterfered); \
	DECLARE_FUNCTION(execOnRep_Seed); \
	DECLARE_FUNCTION(execSetBagOverlapBoxEnabled); \
	DECLARE_FUNCTION(execSetOutsideInterferenceActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetOutsideInterference_Implementation(bool bInIsActive); \
	virtual void Multicast_SetState_Implementation(ESBZThermiteBurnState NewState); \
	virtual void Multicast_ThermiteBagOverlapped_Implementation(bool bIsInitialBag); \
 \
	DECLARE_FUNCTION(execMulticast_SetOutsideInterference); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execMulticast_ThermiteBagOverlapped); \
	DECLARE_FUNCTION(execOnAckCompleteIgnition); \
	DECLARE_FUNCTION(execOnBoxComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execOnRep_IsInterfered); \
	DECLARE_FUNCTION(execOnRep_Seed); \
	DECLARE_FUNCTION(execSetBagOverlapBoxEnabled); \
	DECLARE_FUNCTION(execSetOutsideInterferenceActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_EVENT_PARMS \
	struct SBZThermite_eventBP_OnInterferenceChanged_Parms \
	{ \
		bool bInterfered; \
	}; \
	struct SBZThermite_eventBP_OnStateChanged_Parms \
	{ \
		ESBZThermiteBurnState OldState; \
		ESBZThermiteBurnState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZThermite_eventBP_OnThermiteBagOverlapped_Parms \
	{ \
		bool bIsInitialBag; \
	}; \
	struct SBZThermite_eventMulticast_SetOutsideInterference_Parms \
	{ \
		bool bInIsActive; \
	}; \
	struct SBZThermite_eventMulticast_SetState_Parms \
	{ \
		ESBZThermiteBurnState NewState; \
	}; \
	struct SBZThermite_eventMulticast_ThermiteBagOverlapped_Parms \
	{ \
		bool bIsInitialBag; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZThermite(); \
	friend struct Z_Construct_UClass_ASBZThermite_Statics; \
public: \
	DECLARE_CLASS(ASBZThermite, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThermite) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZThermite*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ElapsedBurnTime=NETFIELD_REP_START, \
		CurrentBurnState, \
		CriticalBurnTimeLeft, \
		Seed, \
		bIsInterfered, \
		TimeSinceLastExplosionCheck, \
		NETFIELD_REP_END=TimeSinceLastExplosionCheck	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASBZThermite(); \
	friend struct Z_Construct_UClass_ASBZThermite_Statics; \
public: \
	DECLARE_CLASS(ASBZThermite, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThermite) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZThermite*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ElapsedBurnTime=NETFIELD_REP_START, \
		CurrentBurnState, \
		CriticalBurnTimeLeft, \
		Seed, \
		bIsInterfered, \
		TimeSinceLastExplosionCheck, \
		NETFIELD_REP_END=TimeSinceLastExplosionCheck	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZThermite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThermite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThermite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThermite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThermite(ASBZThermite&&); \
	NO_API ASBZThermite(const ASBZThermite&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThermite(ASBZThermite&&); \
	NO_API ASBZThermite(const ASBZThermite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThermite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThermite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThermite)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BagOverlapBoxComponent() { return STRUCT_OFFSET(ASBZThermite, BagOverlapBoxComponent); } \
	FORCEINLINE static uint32 __PPO__IgnitionInteractableComponent() { return STRUCT_OFFSET(ASBZThermite, IgnitionInteractableComponent); } \
	FORCEINLINE static uint32 __PPO__BurnDuration() { return STRUCT_OFFSET(ASBZThermite, BurnDuration); } \
	FORCEINLINE static uint32 __PPO__CriticalBurnInterval() { return STRUCT_OFFSET(ASBZThermite, CriticalBurnInterval); } \
	FORCEINLINE static uint32 __PPO__ExplosionChance() { return STRUCT_OFFSET(ASBZThermite, ExplosionChance); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenExplosionChecks() { return STRUCT_OFFSET(ASBZThermite, TimeBetweenExplosionChecks); } \
	FORCEINLINE static uint32 __PPO__InitialBagTypeTag() { return STRUCT_OFFSET(ASBZThermite, InitialBagTypeTag); } \
	FORCEINLINE static uint32 __PPO__AdditionalBagTypeTag() { return STRUCT_OFFSET(ASBZThermite, AdditionalBagTypeTag); } \
	FORCEINLINE static uint32 __PPO__bShouldDestroyOnComplete() { return STRUCT_OFFSET(ASBZThermite, bShouldDestroyOnComplete); } \
	FORCEINLINE static uint32 __PPO__bStartEnabled() { return STRUCT_OFFSET(ASBZThermite, bStartEnabled); } \
	FORCEINLINE static uint32 __PPO__ElapsedBurnTime() { return STRUCT_OFFSET(ASBZThermite, ElapsedBurnTime); } \
	FORCEINLINE static uint32 __PPO__CurrentBurnState() { return STRUCT_OFFSET(ASBZThermite, CurrentBurnState); } \
	FORCEINLINE static uint32 __PPO__CriticalBurnTimeLeft() { return STRUCT_OFFSET(ASBZThermite, CriticalBurnTimeLeft); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZThermite, Seed); } \
	FORCEINLINE static uint32 __PPO__bIsInterfered() { return STRUCT_OFFSET(ASBZThermite, bIsInterfered); } \
	FORCEINLINE static uint32 __PPO__BurnModifier() { return STRUCT_OFFSET(ASBZThermite, BurnModifier); } \
	FORCEINLINE static uint32 __PPO__TimeSinceLastExplosionCheck() { return STRUCT_OFFSET(ASBZThermite, TimeSinceLastExplosionCheck); } \
	FORCEINLINE static uint32 __PPO__InitialSeed() { return STRUCT_OFFSET(ASBZThermite, InitialSeed); }


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_19_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermite_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZThermite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZThermite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
