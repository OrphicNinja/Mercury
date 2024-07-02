// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FGameplayTag;
#ifdef STARBREEZE_SBZArmedPawn_generated_h
#error "SBZArmedPawn.generated.h already included, missing '#pragma once' in SBZArmedPawn.h"
#endif
#define STARBREEZE_SBZArmedPawn_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_RPC_WRAPPERS \
	virtual void Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex); \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execMulticast_PredictedRagdollDenied);


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex); \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execMulticast_PredictedRagdollDenied);


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_EVENT_PARMS \
	struct SBZArmedPawn_eventMulticast_PredictedRagdollDenied_Parms \
	{ \
		int32 HurtReactionIndex; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZArmedPawn(); \
	friend struct Z_Construct_UClass_ASBZArmedPawn_Statics; \
public: \
	DECLARE_CLASS(ASBZArmedPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZArmedPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZArmedPawn*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASBZArmedPawn(); \
	friend struct Z_Construct_UClass_ASBZArmedPawn_Statics; \
public: \
	DECLARE_CLASS(ASBZArmedPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZArmedPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZArmedPawn*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZArmedPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZArmedPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZArmedPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZArmedPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZArmedPawn(ASBZArmedPawn&&); \
	NO_API ASBZArmedPawn(const ASBZArmedPawn&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZArmedPawn(ASBZArmedPawn&&); \
	NO_API ASBZArmedPawn(const ASBZArmedPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZArmedPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZArmedPawn); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZArmedPawn)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquippableConfigArray() { return STRUCT_OFFSET(ASBZArmedPawn, EquippableConfigArray); } \
	FORCEINLINE static uint32 __PPO__EquippableArray() { return STRUCT_OFFSET(ASBZArmedPawn, EquippableArray); } \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ASBZArmedPawn, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AbilityData() { return STRUCT_OFFSET(ASBZArmedPawn, AbilityData); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(ASBZArmedPawn, Type); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNodeComputationFrequency() { return STRUCT_OFFSET(ASBZArmedPawn, AIVisibilityNodeComputationFrequency); } \
	FORCEINLINE static uint32 __PPO__StimuliSourceComponent() { return STRUCT_OFFSET(ASBZArmedPawn, StimuliSourceComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZArmedPawn, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__RangedWeapon() { return STRUCT_OFFSET(ASBZArmedPawn, RangedWeapon); } \
	FORCEINLINE static uint32 __PPO__TeamId() { return STRUCT_OFFSET(ASBZArmedPawn, TeamId); } \
	FORCEINLINE static uint32 __PPO__RangedWeaponAttachmentSocket() { return STRUCT_OFFSET(ASBZArmedPawn, RangedWeaponAttachmentSocket); } \
	FORCEINLINE static uint32 __PPO__MarkedGameplayEffectClass() { return STRUCT_OFFSET(ASBZArmedPawn, MarkedGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZArmedPawn, RoomVolumes); }


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_30_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZArmedPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZArmedPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
