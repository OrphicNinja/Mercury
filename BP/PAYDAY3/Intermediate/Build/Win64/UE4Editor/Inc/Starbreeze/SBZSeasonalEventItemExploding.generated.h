// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZExplosionResult;
#ifdef STARBREEZE_SBZSeasonalEventItemExploding_generated_h
#error "SBZSeasonalEventItemExploding.generated.h already included, missing '#pragma once' in SBZSeasonalEventItemExploding.h"
#endif
#define STARBREEZE_SBZSeasonalEventItemExploding_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_EVENT_PARMS \
	struct SBZSeasonalEventItemExploding_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSeasonalEventItemExploding(); \
	friend struct Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics; \
public: \
	DECLARE_CLASS(ASBZSeasonalEventItemExploding, ASBZSeasonalEventItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSeasonalEventItemExploding) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSeasonalEventItemExploding*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASBZSeasonalEventItemExploding(); \
	friend struct Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics; \
public: \
	DECLARE_CLASS(ASBZSeasonalEventItemExploding, ASBZSeasonalEventItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSeasonalEventItemExploding) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSeasonalEventItemExploding*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSeasonalEventItemExploding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSeasonalEventItemExploding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSeasonalEventItemExploding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSeasonalEventItemExploding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSeasonalEventItemExploding(ASBZSeasonalEventItemExploding&&); \
	NO_API ASBZSeasonalEventItemExploding(const ASBZSeasonalEventItemExploding&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSeasonalEventItemExploding(ASBZSeasonalEventItemExploding&&); \
	NO_API ASBZSeasonalEventItemExploding(const ASBZSeasonalEventItemExploding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSeasonalEventItemExploding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSeasonalEventItemExploding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSeasonalEventItemExploding)


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosionSoundEvent() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionSoundEvent); } \
	FORCEINLINE static uint32 __PPO__ExplosionDelay() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionDelay); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRadius() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, AIExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRadius() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, PlayerExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__DamageDistanceArray() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, DamageDistanceArray); } \
	FORCEINLINE static uint32 __PPO__ArmorPenetration() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ArmorPenetration); } \
	FORCEINLINE static uint32 __PPO__FriendlyFireDamageScale() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, FriendlyFireDamageScale); } \
	FORCEINLINE static uint32 __PPO__FriendlyFireArmorPenetrationScale() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, FriendlyFireArmorPenetrationScale); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamageType() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionDamageType); } \
	FORCEINLINE static uint32 __PPO__GameplayEffectClass() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, GameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__bDoDecal() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, bDoDecal); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerFeedback() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, LocalPlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__PostDamagePhysicsEffectData() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, PostDamagePhysicsEffectData); } \
	FORCEINLINE static uint32 __PPO__PlayerFeedbackCurve() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, PlayerFeedbackCurve); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__ExplosionLocation() { return STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionLocation); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_24_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSeasonalEventItemExploding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSeasonalEventItemExploding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
