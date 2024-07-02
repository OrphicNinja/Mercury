// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STARBREEZE_SBZDecorativeSmokeGrenade_generated_h
#error "SBZDecorativeSmokeGrenade.generated.h already included, missing '#pragma once' in SBZDecorativeSmokeGrenade.h"
#endif
#define STARBREEZE_SBZDecorativeSmokeGrenade_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_RPC_WRAPPERS \
	virtual void Multicast_CreateSmokeCloud_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_CreateSmokeCloud); \
	DECLARE_FUNCTION(execOnActorHit); \
	DECLARE_FUNCTION(execOnRep_SmokeState);


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CreateSmokeCloud_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_CreateSmokeCloud); \
	DECLARE_FUNCTION(execOnActorHit); \
	DECLARE_FUNCTION(execOnRep_SmokeState);


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZDecorativeSmokeGrenade(); \
	friend struct Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics; \
public: \
	DECLARE_CLASS(ASBZDecorativeSmokeGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDecorativeSmokeGrenade) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SmokeState=NETFIELD_REP_START, \
		NETFIELD_REP_END=SmokeState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZDecorativeSmokeGrenade(); \
	friend struct Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics; \
public: \
	DECLARE_CLASS(ASBZDecorativeSmokeGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDecorativeSmokeGrenade) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SmokeState=NETFIELD_REP_START, \
		NETFIELD_REP_END=SmokeState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZDecorativeSmokeGrenade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDecorativeSmokeGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDecorativeSmokeGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDecorativeSmokeGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDecorativeSmokeGrenade(ASBZDecorativeSmokeGrenade&&); \
	NO_API ASBZDecorativeSmokeGrenade(const ASBZDecorativeSmokeGrenade&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDecorativeSmokeGrenade(ASBZDecorativeSmokeGrenade&&); \
	NO_API ASBZDecorativeSmokeGrenade(const ASBZDecorativeSmokeGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDecorativeSmokeGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDecorativeSmokeGrenade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDecorativeSmokeGrenade)


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__GasEffectComponent() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, GasEffectComponent); } \
	FORCEINLINE static uint32 __PPO__DetonationEvent() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, DetonationEvent); } \
	FORCEINLINE static uint32 __PPO__DurationSeconds() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, DurationSeconds); } \
	FORCEINLINE static uint32 __PPO__Range() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, Range); } \
	FORCEINLINE static uint32 __PPO__DelayedExplosionTimer() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, DelayedExplosionTimer); } \
	FORCEINLINE static uint32 __PPO__SmokeState() { return STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, SmokeState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZDecorativeSmokeGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDecorativeSmokeGrenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
