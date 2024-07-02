// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZKnifeProjectileTargetData;
class AActor;
class UPrimitiveComponent;
struct FVector;
#ifdef STARBREEZE_SBZThrowableKnife_generated_h
#error "SBZThrowableKnife.generated.h already included, missing '#pragma once' in SBZThrowableKnife.h"
#endif
#define STARBREEZE_SBZThrowableKnife_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_RPC_WRAPPERS \
	virtual void Multicast_CreateImpact_Implementation(bool bInShouldBladeBounce, bool bInHasRetrieverSkill); \
	virtual void Multicast_FireKnife_Implementation(FSBZKnifeProjectileTargetData const& TargetData); \
	virtual void Server_CreateImpact_Implementation(bool bInShouldBladeBounce, bool bInHasRetrieverSkill, UPrimitiveComponent* InHitComponent, FName const& InBoneName, FVector const& InRelativeLocation); \
	virtual void Server_PickedUp_Implementation(); \
	virtual void Server_ReplicateDamage_Implementation(FSBZKnifeProjectileTargetData const& TargetData); \
 \
	DECLARE_FUNCTION(execHasRetrieverSkill); \
	DECLARE_FUNCTION(execMulticast_CreateImpact); \
	DECLARE_FUNCTION(execMulticast_FireKnife); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execServer_CreateImpact); \
	DECLARE_FUNCTION(execServer_PickedUp); \
	DECLARE_FUNCTION(execServer_ReplicateDamage);


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CreateImpact_Implementation(bool bInShouldBladeBounce, bool bInHasRetrieverSkill); \
	virtual void Multicast_FireKnife_Implementation(FSBZKnifeProjectileTargetData const& TargetData); \
	virtual void Server_CreateImpact_Implementation(bool bInShouldBladeBounce, bool bInHasRetrieverSkill, UPrimitiveComponent* InHitComponent, FName const& InBoneName, FVector const& InRelativeLocation); \
	virtual void Server_PickedUp_Implementation(); \
	virtual void Server_ReplicateDamage_Implementation(FSBZKnifeProjectileTargetData const& TargetData); \
 \
	DECLARE_FUNCTION(execHasRetrieverSkill); \
	DECLARE_FUNCTION(execMulticast_CreateImpact); \
	DECLARE_FUNCTION(execMulticast_FireKnife); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execServer_CreateImpact); \
	DECLARE_FUNCTION(execServer_PickedUp); \
	DECLARE_FUNCTION(execServer_ReplicateDamage);


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_EVENT_PARMS \
	struct SBZThrowableKnife_eventMulticast_CreateImpact_Parms \
	{ \
		bool bInShouldBladeBounce; \
		bool bInHasRetrieverSkill; \
	}; \
	struct SBZThrowableKnife_eventMulticast_FireKnife_Parms \
	{ \
		FSBZKnifeProjectileTargetData TargetData; \
	}; \
	struct SBZThrowableKnife_eventServer_CreateImpact_Parms \
	{ \
		bool bInShouldBladeBounce; \
		bool bInHasRetrieverSkill; \
		UPrimitiveComponent* InHitComponent; \
		FName InBoneName; \
		FVector InRelativeLocation; \
	}; \
	struct SBZThrowableKnife_eventServer_ReplicateDamage_Parms \
	{ \
		FSBZKnifeProjectileTargetData TargetData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZThrowableKnife(); \
	friend struct Z_Construct_UClass_ASBZThrowableKnife_Statics; \
public: \
	DECLARE_CLASS(ASBZThrowableKnife, ASBZThrowable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThrowableKnife)


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZThrowableKnife(); \
	friend struct Z_Construct_UClass_ASBZThrowableKnife_Statics; \
public: \
	DECLARE_CLASS(ASBZThrowableKnife, ASBZThrowable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZThrowableKnife)


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZThrowableKnife(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThrowableKnife) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThrowableKnife); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThrowableKnife); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThrowableKnife(ASBZThrowableKnife&&); \
	NO_API ASBZThrowableKnife(const ASBZThrowableKnife&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZThrowableKnife(ASBZThrowableKnife&&); \
	NO_API ASBZThrowableKnife(const ASBZThrowableKnife&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZThrowableKnife); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZThrowableKnife); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZThrowableKnife)


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(ASBZThrowableKnife, BoxCollision); } \
	FORCEINLINE static uint32 __PPO__OverrideThrowableProjectileHitEvent() { return STRUCT_OFFSET(ASBZThrowableKnife, OverrideThrowableProjectileHitEvent); } \
	FORCEINLINE static uint32 __PPO__OverrideThrowableProjectileBounceHitEvent() { return STRUCT_OFFSET(ASBZThrowableKnife, OverrideThrowableProjectileBounceHitEvent); } \
	FORCEINLINE static uint32 __PPO__AmmoPickupAsset() { return STRUCT_OFFSET(ASBZThrowableKnife, AmmoPickupAsset); } \
	FORCEINLINE static uint32 __PPO__ThrowableKnifePOIClass() { return STRUCT_OFFSET(ASBZThrowableKnife, ThrowableKnifePOIClass); } \
	FORCEINLINE static uint32 __PPO__ThrowableKnifePOIInstance() { return STRUCT_OFFSET(ASBZThrowableKnife, ThrowableKnifePOIInstance); } \
	FORCEINLINE static uint32 __PPO__LastHitComponent() { return STRUCT_OFFSET(ASBZThrowableKnife, LastHitComponent); } \
	FORCEINLINE static uint32 __PPO__AmmoPickup() { return STRUCT_OFFSET(ASBZThrowableKnife, AmmoPickup); }


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZThrowableKnife>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZThrowableKnife_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
