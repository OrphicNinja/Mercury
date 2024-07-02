// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STARBREEZE_SBZExplosiveTrap_generated_h
#error "SBZExplosiveTrap.generated.h already included, missing '#pragma once' in SBZExplosiveTrap.h"
#endif
#define STARBREEZE_SBZExplosiveTrap_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_RPC_WRAPPERS \
	virtual void Multicast_CriticalDamage_Implementation(const FVector ImpactLocation, const FVector ImpactNormal); \
	virtual void Multicast_CriticalDamageNoParams_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_CriticalDamage); \
	DECLARE_FUNCTION(execMulticast_CriticalDamageNoParams);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CriticalDamage_Implementation(const FVector ImpactLocation, const FVector ImpactNormal); \
	virtual void Multicast_CriticalDamageNoParams_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_CriticalDamage); \
	DECLARE_FUNCTION(execMulticast_CriticalDamageNoParams);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_EVENT_PARMS \
	struct SBZExplosiveTrap_eventMulticast_CriticalDamage_Parms \
	{ \
		FVector ImpactLocation; \
		FVector ImpactNormal; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZExplosiveTrap(); \
	friend struct Z_Construct_UClass_ASBZExplosiveTrap_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveTrap, ASBZExplosiveLevelProp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveTrap)


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZExplosiveTrap(); \
	friend struct Z_Construct_UClass_ASBZExplosiveTrap_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveTrap, ASBZExplosiveLevelProp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveTrap)


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZExplosiveTrap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveTrap(ASBZExplosiveTrap&&); \
	NO_API ASBZExplosiveTrap(const ASBZExplosiveTrap&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveTrap(ASBZExplosiveTrap&&); \
	NO_API ASBZExplosiveTrap(const ASBZExplosiveTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveTrap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveTrap)


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfShotsToExplode() { return STRUCT_OFFSET(ASBZExplosiveTrap, NumberOfShotsToExplode); } \
	FORCEINLINE static uint32 __PPO__NumberOfHitsForCriticalDamage() { return STRUCT_OFFSET(ASBZExplosiveTrap, NumberOfHitsForCriticalDamage); } \
	FORCEINLINE static uint32 __PPO__ExplosionTimerInterval() { return STRUCT_OFFSET(ASBZExplosiveTrap, ExplosionTimerInterval); } \
	FORCEINLINE static uint32 __PPO__bUseImpactPointForEffect() { return STRUCT_OFFSET(ASBZExplosiveTrap, bUseImpactPointForEffect); } \
	FORCEINLINE static uint32 __PPO__CriticalDamageEffect() { return STRUCT_OFFSET(ASBZExplosiveTrap, CriticalDamageEffect); } \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZExplosiveTrap, MarkerAsset); } \
	FORCEINLINE static uint32 __PPO__MarkerOffset() { return STRUCT_OFFSET(ASBZExplosiveTrap, MarkerOffset); } \
	FORCEINLINE static uint32 __PPO__NumberOfHitShots() { return STRUCT_OFFSET(ASBZExplosiveTrap, NumberOfHitShots); } \
	FORCEINLINE static uint32 __PPO__NiagaraComponent() { return STRUCT_OFFSET(ASBZExplosiveTrap, NiagaraComponent); } \
	FORCEINLINE static uint32 __PPO__MarkerId() { return STRUCT_OFFSET(ASBZExplosiveTrap, MarkerId); }


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZExplosiveTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
