// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FSBZExplosionResult;
#ifdef STARBREEZE_SBZAITaserMine_generated_h
#error "SBZAITaserMine.generated.h already included, missing '#pragma once' in SBZAITaserMine.h"
#endif
#define STARBREEZE_SBZAITaserMine_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_RPC_WRAPPERS \
	virtual void Multicast_OnWalkedOn_Implementation(); \
	virtual void Multicast_OnWalkedOnTarget_Implementation(AActor* OtherActor); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execDamageRejected); \
	DECLARE_FUNCTION(execMulticast_OnWalkedOn); \
	DECLARE_FUNCTION(execMulticast_OnWalkedOnTarget); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnWalkedOn_Implementation(); \
	virtual void Multicast_OnWalkedOnTarget_Implementation(AActor* OtherActor); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execDamageRejected); \
	DECLARE_FUNCTION(execMulticast_OnWalkedOn); \
	DECLARE_FUNCTION(execMulticast_OnWalkedOnTarget); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_EVENT_PARMS \
	struct SBZAITaserMine_eventMulticast_OnWalkedOnTarget_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct SBZAITaserMine_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAITaserMine(); \
	friend struct Z_Construct_UClass_ASBZAITaserMine_Statics; \
public: \
	DECLARE_CLASS(ASBZAITaserMine, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAITaserMine) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAITaserMine*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASBZAITaserMine(); \
	friend struct Z_Construct_UClass_ASBZAITaserMine_Statics; \
public: \
	DECLARE_CLASS(ASBZAITaserMine, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAITaserMine) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAITaserMine*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAITaserMine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAITaserMine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAITaserMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAITaserMine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAITaserMine(ASBZAITaserMine&&); \
	NO_API ASBZAITaserMine(const ASBZAITaserMine&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAITaserMine(ASBZAITaserMine&&); \
	NO_API ASBZAITaserMine(const ASBZAITaserMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAITaserMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAITaserMine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAITaserMine)


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetectionRange() { return STRUCT_OFFSET(ASBZAITaserMine, DetectionRange); } \
	FORCEINLINE static uint32 __PPO__StunDuration() { return STRUCT_OFFSET(ASBZAITaserMine, StunDuration); } \
	FORCEINLINE static uint32 __PPO__WalkedOnEffect() { return STRUCT_OFFSET(ASBZAITaserMine, WalkedOnEffect); } \
	FORCEINLINE static uint32 __PPO__DestroyedEffect() { return STRUCT_OFFSET(ASBZAITaserMine, DestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__DestroyedMesh() { return STRUCT_OFFSET(ASBZAITaserMine, DestroyedMesh); } \
	FORCEINLINE static uint32 __PPO__TasedEffect() { return STRUCT_OFFSET(ASBZAITaserMine, TasedEffect); } \
	FORCEINLINE static uint32 __PPO__OverlapSphere() { return STRUCT_OFFSET(ASBZAITaserMine, OverlapSphere); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ASBZAITaserMine, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__PlaceSound() { return STRUCT_OFFSET(ASBZAITaserMine, PlaceSound); } \
	FORCEINLINE static uint32 __PPO__WalkedOnEvent() { return STRUCT_OFFSET(ASBZAITaserMine, WalkedOnEvent); } \
	FORCEINLINE static uint32 __PPO__DestroyedEvent() { return STRUCT_OFFSET(ASBZAITaserMine, DestroyedEvent); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRange() { return STRUCT_OFFSET(ASBZAITaserMine, AIExplosionRange); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRange() { return STRUCT_OFFSET(ASBZAITaserMine, PlayerExplosionRange); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZAITaserMine, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__Spawned() { return STRUCT_OFFSET(ASBZAITaserMine, Spawned); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_19_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAITaserMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAITaserMine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
