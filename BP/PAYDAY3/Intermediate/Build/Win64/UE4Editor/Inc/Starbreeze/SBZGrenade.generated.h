// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
struct FSBZExplosionResult;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STARBREEZE_SBZGrenade_generated_h
#error "SBZGrenade.generated.h already included, missing '#pragma once' in SBZGrenade.h"
#endif
#define STARBREEZE_SBZGrenade_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_RPC_WRAPPERS \
	virtual void Multicast_ExplosionInHand_Implementation(); \
	virtual void Multicast_OnServerCollision_Implementation(FVector_NetQuantize const& InLocation); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execMulticast_ExplosionInHand); \
	DECLARE_FUNCTION(execMulticast_OnServerCollision); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execOnCollisionComponentHit);


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ExplosionInHand_Implementation(); \
	virtual void Multicast_OnServerCollision_Implementation(FVector_NetQuantize const& InLocation); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execMulticast_ExplosionInHand); \
	DECLARE_FUNCTION(execMulticast_OnServerCollision); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execOnCollisionComponentHit);


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_EVENT_PARMS \
	struct SBZGrenade_eventMulticast_OnServerCollision_Parms \
	{ \
		FVector_NetQuantize InLocation; \
	}; \
	struct SBZGrenade_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZGrenade(); \
	friend struct Z_Construct_UClass_ASBZGrenade_Statics; \
public: \
	DECLARE_CLASS(ASBZGrenade, ASBZThrowable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGrenade) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGrenade*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASBZGrenade(); \
	friend struct Z_Construct_UClass_ASBZGrenade_Statics; \
public: \
	DECLARE_CLASS(ASBZGrenade, ASBZThrowable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGrenade) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGrenade*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZGrenade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGrenade(ASBZGrenade&&); \
	NO_API ASBZGrenade(const ASBZGrenade&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGrenade(ASBZGrenade&&); \
	NO_API ASBZGrenade(const ASBZGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGrenade); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGrenade)


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstigatorAbilitySystemComponent() { return STRUCT_OFFSET(ASBZGrenade, InstigatorAbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNode() { return STRUCT_OFFSET(ASBZGrenade, AIVisibilityNode); } \
	FORCEINLINE static uint32 __PPO__PendingDataExplosionResult() { return STRUCT_OFFSET(ASBZGrenade, PendingDataExplosionResult); } \
	FORCEINLINE static uint32 __PPO__DetonationEffect() { return STRUCT_OFFSET(ASBZGrenade, DetonationEffect); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGrenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
