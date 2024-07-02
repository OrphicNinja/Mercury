// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class IAbilitySystemInterface;
#ifdef STARBREEZE_SBZVolumeDamageProp_generated_h
#error "SBZVolumeDamageProp.generated.h already included, missing '#pragma once' in SBZVolumeDamageProp.h"
#endif
#define STARBREEZE_SBZVolumeDamageProp_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_RPC_WRAPPERS \
	virtual void Multicast_CollisionEnabled_Implementation(bool bIsEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_CollisionEnabled); \
	DECLARE_FUNCTION(execOnRep_IsCollisionEnabled); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap); \
	DECLARE_FUNCTION(execOnVolumeCollisionChanged); \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execSetServerDamageEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CollisionEnabled_Implementation(bool bIsEnabled); \
 \
	DECLARE_FUNCTION(execMulticast_CollisionEnabled); \
	DECLARE_FUNCTION(execOnRep_IsCollisionEnabled); \
	DECLARE_FUNCTION(execOnVolumeBeginOverlap); \
	DECLARE_FUNCTION(execOnVolumeCollisionChanged); \
	DECLARE_FUNCTION(execOnVolumeEndOverlap); \
	DECLARE_FUNCTION(execSetServerDamageEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_EVENT_PARMS \
	struct SBZVolumeDamageProp_eventBP_OnVolumeEnabledChanged_Parms \
	{ \
		bool bIsEnabled; \
	}; \
	struct SBZVolumeDamageProp_eventMulticast_CollisionEnabled_Parms \
	{ \
		bool bIsEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZVolumeDamageProp(); \
	friend struct Z_Construct_UClass_ASBZVolumeDamageProp_Statics; \
public: \
	DECLARE_CLASS(ASBZVolumeDamageProp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZVolumeDamageProp) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZVolumeDamageProp*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsCollisionEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsCollisionEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZVolumeDamageProp(); \
	friend struct Z_Construct_UClass_ASBZVolumeDamageProp_Statics; \
public: \
	DECLARE_CLASS(ASBZVolumeDamageProp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZVolumeDamageProp) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZVolumeDamageProp*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsCollisionEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsCollisionEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZVolumeDamageProp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZVolumeDamageProp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZVolumeDamageProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZVolumeDamageProp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZVolumeDamageProp(ASBZVolumeDamageProp&&); \
	NO_API ASBZVolumeDamageProp(const ASBZVolumeDamageProp&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZVolumeDamageProp(ASBZVolumeDamageProp&&); \
	NO_API ASBZVolumeDamageProp(const ASBZVolumeDamageProp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZVolumeDamageProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZVolumeDamageProp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZVolumeDamageProp)


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VolumeSelector() { return STRUCT_OFFSET(ASBZVolumeDamageProp, VolumeSelector); } \
	FORCEINLINE static uint32 __PPO__EffectInnerLocationArray() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectInnerLocationArray); } \
	FORCEINLINE static uint32 __PPO__EffectInnerLocationArrayName() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectInnerLocationArrayName); } \
	FORCEINLINE static uint32 __PPO__EffectInnerLocationCountName() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectInnerLocationCountName); } \
	FORCEINLINE static uint32 __PPO__EffectBorderLocationArray() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectBorderLocationArray); } \
	FORCEINLINE static uint32 __PPO__EffectBorderLocationArrayName() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectBorderLocationArrayName); } \
	FORCEINLINE static uint32 __PPO__EffectBorderLocationCountName() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectBorderLocationCountName); } \
	FORCEINLINE static uint32 __PPO__EffectDurationName() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectDurationName); } \
	FORCEINLINE static uint32 __PPO__EffectComponent() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectComponent); } \
	FORCEINLINE static uint32 __PPO__EffectAsset() { return STRUCT_OFFSET(ASBZVolumeDamageProp, EffectAsset); } \
	FORCEINLINE static uint32 __PPO__bIsEffectRotationSupported() { return STRUCT_OFFSET(ASBZVolumeDamageProp, bIsEffectRotationSupported); } \
	FORCEINLINE static uint32 __PPO__bIsCollisionEnabled() { return STRUCT_OFFSET(ASBZVolumeDamageProp, bIsCollisionEnabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZVolumeDamageProp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageProp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
