// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
class AActor;
#ifdef STARBREEZE_SBZExplosiveLevelProp_generated_h
#error "SBZExplosiveLevelProp.generated.h already included, missing '#pragma once' in SBZExplosiveLevelProp.h"
#endif
#define STARBREEZE_SBZExplosiveLevelProp_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execDebugServerStartExplosionTimer); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execServerStartExplosionTimer); \
	DECLARE_FUNCTION(execServerStopExplosionTimer); \
	DECLARE_FUNCTION(execSetExplosionInstigator);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execDebugServerStartExplosionTimer); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execServerStartExplosionTimer); \
	DECLARE_FUNCTION(execServerStopExplosionTimer); \
	DECLARE_FUNCTION(execSetExplosionInstigator);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_EVENT_PARMS \
	struct SBZExplosiveLevelProp_eventBP_OnExplosion_Parms \
	{ \
		bool bDoCosmetics; \
	}; \
	struct SBZExplosiveLevelProp_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZExplosiveLevelProp(); \
	friend struct Z_Construct_UClass_ASBZExplosiveLevelProp_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveLevelProp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveLevelProp) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZExplosiveLevelProp*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASBZExplosiveLevelProp(); \
	friend struct Z_Construct_UClass_ASBZExplosiveLevelProp_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveLevelProp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveLevelProp) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZExplosiveLevelProp*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZExplosiveLevelProp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveLevelProp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveLevelProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveLevelProp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveLevelProp(ASBZExplosiveLevelProp&&); \
	NO_API ASBZExplosiveLevelProp(const ASBZExplosiveLevelProp&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveLevelProp(ASBZExplosiveLevelProp&&); \
	NO_API ASBZExplosiveLevelProp(const ASBZExplosiveLevelProp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveLevelProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveLevelProp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveLevelProp)


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosionSoundEvent() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionSoundEvent); } \
	FORCEINLINE static uint32 __PPO__ExplosionDelayInterval() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionDelayInterval); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRadius() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, AIExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRadius() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, PlayerExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__DamageDistanceArray() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, DamageDistanceArray); } \
	FORCEINLINE static uint32 __PPO__ArmorPenetration() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ArmorPenetration); } \
	FORCEINLINE static uint32 __PPO__FriendlyFireDamageScale() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, FriendlyFireDamageScale); } \
	FORCEINLINE static uint32 __PPO__FriendlyFireArmorPenetrationScale() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, FriendlyFireArmorPenetrationScale); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamageType() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionDamageType); } \
	FORCEINLINE static uint32 __PPO__GameplayEffectClass() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, GameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__bDoDecal() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, bDoDecal); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerFeedback() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, LocalPlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__PostDamagePhysicsEffectData() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, PostDamagePhysicsEffectData); } \
	FORCEINLINE static uint32 __PPO__PlayerFeedbackCurve() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, PlayerFeedbackCurve); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__bIsDestroyedOnExplosion() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, bIsDestroyedOnExplosion); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffectComponent() { return STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionEffectComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_25_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZExplosiveLevelProp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZExplosiveLevelProp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
