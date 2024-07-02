// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPlayerAbilityBuffType : uint8;
class ASBZAIBaseCharacter;
class APawn;
struct FGameplayTag;
#ifdef STARBREEZE_SBZPlayerAbilitySystemComponent_generated_h
#error "SBZPlayerAbilitySystemComponent.generated.h already included, missing '#pragma once' in SBZPlayerAbilitySystemComponent.h"
#endif
#define STARBREEZE_SBZPlayerAbilitySystemComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_RPC_WRAPPERS \
	virtual void Client_RejectBuffTime_Implementation(ESBZPlayerAbilityBuffType Type); \
	virtual void Multicast_BlockSkillTankLastManStanding_Implementation(float ImmuneTime); \
	virtual void Multicast_MarkedForDeath_Implementation(TArray<ASBZAIBaseCharacter*> const& AICharacters); \
	virtual void Multicast_MarkTarget_Implementation(APawn* MarkedPawn, float InDuration); \
	virtual void Multicast_ResetDamageBuffTime_Implementation(); \
	virtual void Multicast_ResetMitigationBuffTime_Implementation(); \
	virtual void Multicast_ResetSpeedBuffTime_Implementation(); \
	virtual void Multicast_SetDamageBuffTime_Implementation(float Time); \
	virtual void Multicast_SetMitigationBuffTime_Implementation(float Time); \
	virtual void Multicast_SetSpeedBuffTime_Implementation(float Time); \
	virtual void Multicast_SetTacticalDroneBuffBlockCooldown_Implementation(float Cooldown); \
	virtual void Multicast_UnblockSkillTankLastManStanding_Implementation(); \
	virtual void Server_ResetDamageBuffTime_Implementation(); \
	virtual void Server_ResetMitigationBuffTime_Implementation(); \
	virtual void Server_ResetSpeedBuffTime_Implementation(); \
	virtual void Server_SetDamageBuffTime_Implementation(FGameplayTag const& SkillTag, float Time); \
	virtual void Server_SetMitigationBuffTime_Implementation(FGameplayTag const& SkillTag, float Time); \
	virtual void Server_SetSpeedBuffTime_Implementation(FGameplayTag const& SkillTag, float Time); \
 \
	DECLARE_FUNCTION(execClient_RejectBuffTime); \
	DECLARE_FUNCTION(execMulticast_BlockSkillTankLastManStanding); \
	DECLARE_FUNCTION(execMulticast_MarkedForDeath); \
	DECLARE_FUNCTION(execMulticast_MarkTarget); \
	DECLARE_FUNCTION(execMulticast_ResetDamageBuffTime); \
	DECLARE_FUNCTION(execMulticast_ResetMitigationBuffTime); \
	DECLARE_FUNCTION(execMulticast_ResetSpeedBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetDamageBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetMitigationBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetSpeedBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetTacticalDroneBuffBlockCooldown); \
	DECLARE_FUNCTION(execMulticast_UnblockSkillTankLastManStanding); \
	DECLARE_FUNCTION(execOnBuffBlockCooldownTimeArrayChanged); \
	DECLARE_FUNCTION(execOnBuffBlockCountArrayChanged); \
	DECLARE_FUNCTION(execOnBuffTimeArrayChanged); \
	DECLARE_FUNCTION(execOnSkillTankLastManStandingBlockingChanged); \
	DECLARE_FUNCTION(execOnSkillTankLastManStandingImmuneTimeChanged); \
	DECLARE_FUNCTION(execServer_ResetDamageBuffTime); \
	DECLARE_FUNCTION(execServer_ResetMitigationBuffTime); \
	DECLARE_FUNCTION(execServer_ResetSpeedBuffTime); \
	DECLARE_FUNCTION(execServer_SetDamageBuffTime); \
	DECLARE_FUNCTION(execServer_SetMitigationBuffTime); \
	DECLARE_FUNCTION(execServer_SetSpeedBuffTime);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_RejectBuffTime_Implementation(ESBZPlayerAbilityBuffType Type); \
	virtual void Multicast_BlockSkillTankLastManStanding_Implementation(float ImmuneTime); \
	virtual void Multicast_MarkedForDeath_Implementation(TArray<ASBZAIBaseCharacter*> const& AICharacters); \
	virtual void Multicast_MarkTarget_Implementation(APawn* MarkedPawn, float InDuration); \
	virtual void Multicast_ResetDamageBuffTime_Implementation(); \
	virtual void Multicast_ResetMitigationBuffTime_Implementation(); \
	virtual void Multicast_ResetSpeedBuffTime_Implementation(); \
	virtual void Multicast_SetDamageBuffTime_Implementation(float Time); \
	virtual void Multicast_SetMitigationBuffTime_Implementation(float Time); \
	virtual void Multicast_SetSpeedBuffTime_Implementation(float Time); \
	virtual void Multicast_SetTacticalDroneBuffBlockCooldown_Implementation(float Cooldown); \
	virtual void Multicast_UnblockSkillTankLastManStanding_Implementation(); \
	virtual void Server_ResetDamageBuffTime_Implementation(); \
	virtual void Server_ResetMitigationBuffTime_Implementation(); \
	virtual void Server_ResetSpeedBuffTime_Implementation(); \
	virtual void Server_SetDamageBuffTime_Implementation(FGameplayTag const& SkillTag, float Time); \
	virtual void Server_SetMitigationBuffTime_Implementation(FGameplayTag const& SkillTag, float Time); \
	virtual void Server_SetSpeedBuffTime_Implementation(FGameplayTag const& SkillTag, float Time); \
 \
	DECLARE_FUNCTION(execClient_RejectBuffTime); \
	DECLARE_FUNCTION(execMulticast_BlockSkillTankLastManStanding); \
	DECLARE_FUNCTION(execMulticast_MarkedForDeath); \
	DECLARE_FUNCTION(execMulticast_MarkTarget); \
	DECLARE_FUNCTION(execMulticast_ResetDamageBuffTime); \
	DECLARE_FUNCTION(execMulticast_ResetMitigationBuffTime); \
	DECLARE_FUNCTION(execMulticast_ResetSpeedBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetDamageBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetMitigationBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetSpeedBuffTime); \
	DECLARE_FUNCTION(execMulticast_SetTacticalDroneBuffBlockCooldown); \
	DECLARE_FUNCTION(execMulticast_UnblockSkillTankLastManStanding); \
	DECLARE_FUNCTION(execOnBuffBlockCooldownTimeArrayChanged); \
	DECLARE_FUNCTION(execOnBuffBlockCountArrayChanged); \
	DECLARE_FUNCTION(execOnBuffTimeArrayChanged); \
	DECLARE_FUNCTION(execOnSkillTankLastManStandingBlockingChanged); \
	DECLARE_FUNCTION(execOnSkillTankLastManStandingImmuneTimeChanged); \
	DECLARE_FUNCTION(execServer_ResetDamageBuffTime); \
	DECLARE_FUNCTION(execServer_ResetMitigationBuffTime); \
	DECLARE_FUNCTION(execServer_ResetSpeedBuffTime); \
	DECLARE_FUNCTION(execServer_SetDamageBuffTime); \
	DECLARE_FUNCTION(execServer_SetMitigationBuffTime); \
	DECLARE_FUNCTION(execServer_SetSpeedBuffTime);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_EVENT_PARMS \
	struct SBZPlayerAbilitySystemComponent_eventClient_RejectBuffTime_Parms \
	{ \
		ESBZPlayerAbilityBuffType Type; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_BlockSkillTankLastManStanding_Parms \
	{ \
		float ImmuneTime; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_MarkedForDeath_Parms \
	{ \
		TArray<ASBZAIBaseCharacter*> AICharacters; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_MarkTarget_Parms \
	{ \
		APawn* MarkedPawn; \
		float InDuration; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_SetDamageBuffTime_Parms \
	{ \
		float Time; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_SetMitigationBuffTime_Parms \
	{ \
		float Time; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_SetSpeedBuffTime_Parms \
	{ \
		float Time; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventMulticast_SetTacticalDroneBuffBlockCooldown_Parms \
	{ \
		float Cooldown; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventServer_SetDamageBuffTime_Parms \
	{ \
		FGameplayTag SkillTag; \
		float Time; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventServer_SetMitigationBuffTime_Parms \
	{ \
		FGameplayTag SkillTag; \
		float Time; \
	}; \
	struct SBZPlayerAbilitySystemComponent_eventServer_SetSpeedBuffTime_Parms \
	{ \
		FGameplayTag SkillTag; \
		float Time; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerAbilitySystemComponent, USBZAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerAbilitySystemComponent) \
	enum class EArrayDims_Private : uint16 \
	{ \
		BuffTimeArray=3, \
		BuffBlockCountArray=3, \
		BuffBlockCooldownTimeArray=3, \
	}; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BuffTimeArray_STATIC_ARRAY=NETFIELD_REP_START, \
		BuffTimeArray_STATIC_ARRAY_END=((uint16)BuffTimeArray_STATIC_ARRAY + (uint16)EArrayDims_Private::BuffTimeArray - (uint16)1), \
		BuffBlockCountArray_STATIC_ARRAY, \
		BuffBlockCountArray_STATIC_ARRAY_END=((uint16)BuffBlockCountArray_STATIC_ARRAY + (uint16)EArrayDims_Private::BuffBlockCountArray - (uint16)1), \
		bIsSkillTankLastManStandingBlocking, \
		SkillTankLastManStandingImmuneTime, \
		BuffBlockCooldownTimeArray_STATIC_ARRAY, \
		BuffBlockCooldownTimeArray_STATIC_ARRAY_END=((uint16)BuffBlockCooldownTimeArray_STATIC_ARRAY + (uint16)EArrayDims_Private::BuffBlockCooldownTimeArray - (uint16)1), \
		NETFIELD_REP_END=BuffBlockCooldownTimeArray_STATIC_ARRAY_END	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerAbilitySystemComponent, USBZAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerAbilitySystemComponent) \
	enum class EArrayDims_Private : uint16 \
	{ \
		BuffTimeArray=3, \
		BuffBlockCountArray=3, \
		BuffBlockCooldownTimeArray=3, \
	}; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BuffTimeArray_STATIC_ARRAY=NETFIELD_REP_START, \
		BuffTimeArray_STATIC_ARRAY_END=((uint16)BuffTimeArray_STATIC_ARRAY + (uint16)EArrayDims_Private::BuffTimeArray - (uint16)1), \
		BuffBlockCountArray_STATIC_ARRAY, \
		BuffBlockCountArray_STATIC_ARRAY_END=((uint16)BuffBlockCountArray_STATIC_ARRAY + (uint16)EArrayDims_Private::BuffBlockCountArray - (uint16)1), \
		bIsSkillTankLastManStandingBlocking, \
		SkillTankLastManStandingImmuneTime, \
		BuffBlockCooldownTimeArray_STATIC_ARRAY, \
		BuffBlockCooldownTimeArray_STATIC_ARRAY_END=((uint16)BuffBlockCooldownTimeArray_STATIC_ARRAY + (uint16)EArrayDims_Private::BuffBlockCooldownTimeArray - (uint16)1), \
		NETFIELD_REP_END=BuffBlockCooldownTimeArray_STATIC_ARRAY_END	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerAbilitySystemComponent(USBZPlayerAbilitySystemComponent&&); \
	NO_API USBZPlayerAbilitySystemComponent(const USBZPlayerAbilitySystemComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerAbilitySystemComponent(USBZPlayerAbilitySystemComponent&&); \
	NO_API USBZPlayerAbilitySystemComponent(const USBZPlayerAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerAbilitySystemComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaggeredTargetDamageIncrease() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, StaggeredTargetDamageIncrease); } \
	FORCEINLINE static uint32 __PPO__BuffTimeArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffTimeArray); } \
	FORCEINLINE static uint32 __PPO__ServerBuffTimeArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, ServerBuffTimeArray); } \
	FORCEINLINE static uint32 __PPO__BuffDurationArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffDurationArray); } \
	FORCEINLINE static uint32 __PPO__BuffMovementSpeedIncrease() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffMovementSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO__BuffDamageReduction() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffDamageReduction); } \
	FORCEINLINE static uint32 __PPO__BuffDamageIncrease() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffDamageIncrease); } \
	FORCEINLINE static uint32 __PPO__PredictingBuffBitmask() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, PredictingBuffBitmask); } \
	FORCEINLINE static uint32 __PPO__BuffTickCount() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffTickCount); } \
	FORCEINLINE static uint32 __PPO__BuffCooldownTickCount() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffCooldownTickCount); } \
	FORCEINLINE static uint32 __PPO__BuffBlockCountArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffBlockCountArray); } \
	FORCEINLINE static uint32 __PPO__BuffGUIEffectDataArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffGUIEffectDataArray); } \
	FORCEINLINE static uint32 __PPO__BlockedBuffGUIEffectDataArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BlockedBuffGUIEffectDataArray); } \
	FORCEINLINE static uint32 __PPO__TankLastManStandingImmuneGUIEffectData() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, TankLastManStandingImmuneGUIEffectData); } \
	FORCEINLINE static uint32 __PPO__AmmoSpecialistHighGrainGUIEffectData() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainGUIEffectData); } \
	FORCEINLINE static uint32 __PPO__BuffGUIEffectHandleArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffGUIEffectHandleArray); } \
	FORCEINLINE static uint32 __PPO__BlockedBuffGUIEffectHandleArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BlockedBuffGUIEffectHandleArray); } \
	FORCEINLINE static uint32 __PPO__TankLastManStandingImmuneGUIEffectHandle() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, TankLastManStandingImmuneGUIEffectHandle); } \
	FORCEINLINE static uint32 __PPO__AmmoSpecialistHighGrainGUIEffectHandle() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainGUIEffectHandle); } \
	FORCEINLINE static uint32 __PPO__bIsSkillTankLastManStandingBlocking() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, bIsSkillTankLastManStandingBlocking); } \
	FORCEINLINE static uint32 __PPO__SkillTankLastManStandingImmuneTime() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, SkillTankLastManStandingImmuneTime); } \
	FORCEINLINE static uint32 __PPO__SkillCooldownSecondsMap() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, SkillCooldownSecondsMap); } \
	FORCEINLINE static uint32 __PPO__bCanTriggerCoupDeGraceSkill() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, bCanTriggerCoupDeGraceSkill); } \
	FORCEINLINE static uint32 __PPO__bIsAmmoSpecialistHighGrain() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, bIsAmmoSpecialistHighGrain); } \
	FORCEINLINE static uint32 __PPO__AmmoSpecialistHighGrainDamage() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainDamage); } \
	FORCEINLINE static uint32 __PPO__AmmoSpecialistHighGrainArmorPenetrationPoints() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainArmorPenetrationPoints); } \
	FORCEINLINE static uint32 __PPO__OverHealDegradationTickInterval() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, OverHealDegradationTickInterval); } \
	FORCEINLINE static uint32 __PPO__OverHealDamagePauseTimer() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, OverHealDamagePauseTimer); } \
	FORCEINLINE static uint32 __PPO__BuffBlockCooldownTimeArray() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffBlockCooldownTimeArray); } \
	FORCEINLINE static uint32 __PPO__LastManStandingSkillData() { return STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, LastManStandingSkillData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
