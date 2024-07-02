// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZGasGrenade_generated_h
#error "SBZGasGrenade.generated.h already included, missing '#pragma once' in SBZGasGrenade.h"
#endif
#define STARBREEZE_SBZGasGrenade_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_RPC_WRAPPERS \
	virtual void Multicast_ReplicateExplosionLocation_Implementation(FVector_NetQuantize const& Location); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosionLocation); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnRep_GasExplosionData);


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ReplicateExplosionLocation_Implementation(FVector_NetQuantize const& Location); \
 \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosionLocation); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnRep_GasExplosionData);


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_EVENT_PARMS \
	struct SBZGasGrenade_eventMulticast_ReplicateExplosionLocation_Parms \
	{ \
		FVector_NetQuantize Location; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZGasGrenade(); \
	friend struct Z_Construct_UClass_ASBZGasGrenade_Statics; \
public: \
	DECLARE_CLASS(ASBZGasGrenade, ASBZFragGrenade, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGasGrenade) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGasGrenade*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GasExplosionRepData=NETFIELD_REP_START, \
		NETFIELD_REP_END=GasExplosionRepData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZGasGrenade(); \
	friend struct Z_Construct_UClass_ASBZGasGrenade_Statics; \
public: \
	DECLARE_CLASS(ASBZGasGrenade, ASBZFragGrenade, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGasGrenade) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGasGrenade*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GasExplosionRepData=NETFIELD_REP_START, \
		NETFIELD_REP_END=GasExplosionRepData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZGasGrenade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGasGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGasGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGasGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGasGrenade(ASBZGasGrenade&&); \
	NO_API ASBZGasGrenade(const ASBZGasGrenade&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGasGrenade(ASBZGasGrenade&&); \
	NO_API ASBZGasGrenade(const ASBZGasGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGasGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGasGrenade); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGasGrenade)


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NiagaraParticleUpdateInterval() { return STRUCT_OFFSET(ASBZGasGrenade, NiagaraParticleUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__UpdateOverlapsInterval() { return STRUCT_OFFSET(ASBZGasGrenade, UpdateOverlapsInterval); } \
	FORCEINLINE static uint32 __PPO__UpdateRemainingLifeTimeInterval() { return STRUCT_OFFSET(ASBZGasGrenade, UpdateRemainingLifeTimeInterval); } \
	FORCEINLINE static uint32 __PPO__RootCollision() { return STRUCT_OFFSET(ASBZGasGrenade, RootCollision); } \
	FORCEINLINE static uint32 __PPO__GasCollision() { return STRUCT_OFFSET(ASBZGasGrenade, GasCollision); } \
	FORCEINLINE static uint32 __PPO__GasComponent() { return STRUCT_OFFSET(ASBZGasGrenade, GasComponent); } \
	FORCEINLINE static uint32 __PPO__GasExplosionRepData() { return STRUCT_OFFSET(ASBZGasGrenade, GasExplosionRepData); } \
	FORCEINLINE static uint32 __PPO__TargetArray() { return STRUCT_OFFSET(ASBZGasGrenade, TargetArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_16_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZGasGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGasGrenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
