// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
enum class ESBZThrowableState : uint8;
struct FVector_NetQuantizeNormal;
class AActor;
struct FVector;
class UPrimitiveComponent;
#ifdef STARBREEZE_SBZThrowable_generated_h
#error "SBZThrowable.generated.h already included, missing '#pragma once' in SBZThrowable.h"
#endif
#define STARBREEZE_SBZThrowable_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_RPC_WRAPPERS \
	virtual void Multicast_DestroyBreakable_Implementation(FHitResult const& InBreakableHitResult); \
	virtual void Multicast_SetThrowState_Implementation(ESBZThrowableState NewThrowState); \
	virtual void Multicast_SetThrowVelocity_Implementation(FVector_NetQuantizeNormal const& ThrowDirection); \
	virtual void Server_SetThrowableState_Implementation(ESBZThrowableState NewThrowableState); \
 \
	DECLARE_FUNCTION(execCreateImpactPoint); \
	DECLARE_FUNCTION(execMulticast_DestroyBreakable); \
	DECLARE_FUNCTION(execMulticast_SetThrowState); \
	DECLARE_FUNCTION(execMulticast_SetThrowVelocity); \
	DECLARE_FUNCTION(execOnInstigatorEndPlay); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileStopped); \
	DECLARE_FUNCTION(execOnRep_ThrowableState); \
	DECLARE_FUNCTION(execOnThrownActorBeginOverlap); \
	DECLARE_FUNCTION(execOnThrownActorHit); \
	DECLARE_FUNCTION(execServer_SetThrowableState);


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DestroyBreakable_Implementation(FHitResult const& InBreakableHitResult); \
	virtual void Multicast_SetThrowState_Implementation(ESBZThrowableState NewThrowState); \
	virtual void Multicast_SetThrowVelocity_Implementation(FVector_NetQuantizeNormal const& ThrowDirection); \
	virtual void Server_SetThrowableState_Implementation(ESBZThrowableState NewThrowableState); \
 \
	DECLARE_FUNCTION(execCreateImpactPoint); \
	DECLARE_FUNCTION(execMulticast_DestroyBreakable); \
	DECLARE_FUNCTION(execMulticast_SetThrowState); \
	DECLARE_FUNCTION(execMulticast_SetThrowVelocity); \
	DECLARE_FUNCTION(execOnInstigatorEndPlay); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileStopped); \
	DECLARE_FUNCTION(execOnRep_ThrowableState); \
	DECLARE_FUNCTION(execOnThrownActorBeginOverlap); \
	DECLARE_FUNCTION(execOnThrownActorHit); \
	DECLARE_FUNCTION(execServer_SetThrowableState);


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_EVENT_PARMS \
	struct SBZThrowable_eventMulticast_DestroyBreakable_Parms \
	{ \
		FHitResult InBreakableHitResult; \
	}; \
	struct SBZThrowable_eventMulticast_SetThrowState_Parms \
	{ \
		ESBZThrowableState NewThrowState; \
	}; \
	struct SBZThrowable_eventMulticast_SetThrowVelocity_Parms \
	{ \
		FVector_NetQuantizeNormal ThrowDirection; \
	}; \
	struct SBZThrowable_eventServer_SetThrowableState_Parms \
	{ \
		ESBZThrowableState NewThrowableState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZThrowable(); \
	friend struct Z_Construct_UClass_ASBZThrowable_Statics; \
public: \
	DECLARE_CLASS(ASBZThrowable, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThrowable) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZThrowable*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ThrowableState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ThrowableState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASBZThrowable(); \
	friend struct Z_Construct_UClass_ASBZThrowable_Statics; \
public: \
	DECLARE_CLASS(ASBZThrowable, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThrowable) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZThrowable*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ThrowableState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ThrowableState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZThrowable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThrowable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThrowable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThrowable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThrowable(ASBZThrowable&&); \
	NO_API ASBZThrowable(const ASBZThrowable&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThrowable(ASBZThrowable&&); \
	NO_API ASBZThrowable(const ASBZThrowable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThrowable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThrowable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThrowable)


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZThrowable, MarkerAsset); } \
	FORCEINLINE static uint32 __PPO__MarkerOffset() { return STRUCT_OFFSET(ASBZThrowable, MarkerOffset); } \
	FORCEINLINE static uint32 __PPO__MarkerActivationDelay() { return STRUCT_OFFSET(ASBZThrowable, MarkerActivationDelay); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZThrowable, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__Data() { return STRUCT_OFFSET(ASBZThrowable, Data); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ASBZThrowable, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__ThrowableState() { return STRUCT_OFFSET(ASBZThrowable, ThrowableState); } \
	FORCEINLINE static uint32 __PPO__PlayerState() { return STRUCT_OFFSET(ASBZThrowable, PlayerState); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(ASBZThrowable, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__bReduceBouncinessPerBounce() { return STRUCT_OFFSET(ASBZThrowable, bReduceBouncinessPerBounce); } \
	FORCEINLINE static uint32 __PPO__BouncinessReductionValue() { return STRUCT_OFFSET(ASBZThrowable, BouncinessReductionValue); } \
	FORCEINLINE static uint32 __PPO__MaxTimesToReduceBounciness() { return STRUCT_OFFSET(ASBZThrowable, MaxTimesToReduceBounciness); } \
	FORCEINLINE static uint32 __PPO__MaxBounces() { return STRUCT_OFFSET(ASBZThrowable, MaxBounces); } \
	FORCEINLINE static uint32 __PPO__bEnablePhysicsOnStopped() { return STRUCT_OFFSET(ASBZThrowable, bEnablePhysicsOnStopped); } \
	FORCEINLINE static uint32 __PPO__OverrideAudioEvent() { return STRUCT_OFFSET(ASBZThrowable, OverrideAudioEvent); } \
	FORCEINLINE static uint32 __PPO__OverrideAudioRTPC() { return STRUCT_OFFSET(ASBZThrowable, OverrideAudioRTPC); } \
	FORCEINLINE static uint32 __PPO__AudioImpactForceModifierValue() { return STRUCT_OFFSET(ASBZThrowable, AudioImpactForceModifierValue); } \
	FORCEINLINE static uint32 __PPO__DataType() { return STRUCT_OFFSET(ASBZThrowable, DataType); }


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_24_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZThrowable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZThrowable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
