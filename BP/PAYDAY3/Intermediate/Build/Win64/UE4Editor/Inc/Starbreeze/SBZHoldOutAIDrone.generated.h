// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayEffect;
struct FGameplayTag;
class ASBZHoldOutArea;
struct FAIRequestID;
class USBZHoldOutObjectiveBase;
struct FGameplayTagContainer;
enum class ESBZHoldOutObjectiveResult : uint8;
struct FSBZHoldOutDroneFogSettings;
#ifdef STARBREEZE_SBZHoldOutAIDrone_generated_h
#error "SBZHoldOutAIDrone.generated.h already included, missing '#pragma once' in SBZHoldOutAIDrone.h"
#endif
#define STARBREEZE_SBZHoldOutAIDrone_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_RPC_WRAPPERS \
	virtual void Multicast_ApplyGamePlayEffectOnEnemies_Implementation(TSubclassOf<UGameplayEffect>  GameplayEffectClass); \
 \
	DECLARE_FUNCTION(execApplyGamePlayEffectOnEnemies); \
	DECLARE_FUNCTION(execClearTagsForCurrentObjectives); \
	DECLARE_FUNCTION(execGetGameplayTagCount); \
	DECLARE_FUNCTION(execMoveToNextHoldOutArea); \
	DECLARE_FUNCTION(execMulticast_ApplyGamePlayEffectOnEnemies); \
	DECLARE_FUNCTION(execOnAreaCompletedCallBack); \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execOnObjectiveProgressChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveResultChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveStartedCallBack); \
	DECLARE_FUNCTION(execOverrideFogSettings); \
	DECLARE_FUNCTION(execSetGameplayTag); \
	DECLARE_FUNCTION(execStopOverrideFogSettings);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ApplyGamePlayEffectOnEnemies_Implementation(TSubclassOf<UGameplayEffect>  GameplayEffectClass); \
 \
	DECLARE_FUNCTION(execApplyGamePlayEffectOnEnemies); \
	DECLARE_FUNCTION(execClearTagsForCurrentObjectives); \
	DECLARE_FUNCTION(execGetGameplayTagCount); \
	DECLARE_FUNCTION(execMoveToNextHoldOutArea); \
	DECLARE_FUNCTION(execMulticast_ApplyGamePlayEffectOnEnemies); \
	DECLARE_FUNCTION(execOnAreaCompletedCallBack); \
	DECLARE_FUNCTION(execOnMoveCompleted); \
	DECLARE_FUNCTION(execOnObjectiveProgressChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveResultChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveStartedCallBack); \
	DECLARE_FUNCTION(execOverrideFogSettings); \
	DECLARE_FUNCTION(execSetGameplayTag); \
	DECLARE_FUNCTION(execStopOverrideFogSettings);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_EVENT_PARMS \
	struct SBZHoldOutAIDrone_eventMulticast_ApplyGamePlayEffectOnEnemies_Parms \
	{ \
		TSubclassOf<UGameplayEffect>  GameplayEffectClass; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHoldOutAIDrone(); \
	friend struct Z_Construct_UClass_ASBZHoldOutAIDrone_Statics; \
public: \
	DECLARE_CLASS(ASBZHoldOutAIDrone, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHoldOutAIDrone) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHoldOutAIDrone*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTagCounterArray=NETFIELD_REP_START, \
		NETFIELD_REP_END=GameplayTagCounterArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_INCLASS \
private: \
	static void StaticRegisterNativesASBZHoldOutAIDrone(); \
	friend struct Z_Construct_UClass_ASBZHoldOutAIDrone_Statics; \
public: \
	DECLARE_CLASS(ASBZHoldOutAIDrone, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHoldOutAIDrone) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHoldOutAIDrone*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTagCounterArray=NETFIELD_REP_START, \
		NETFIELD_REP_END=GameplayTagCounterArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHoldOutAIDrone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHoldOutAIDrone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHoldOutAIDrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHoldOutAIDrone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHoldOutAIDrone(ASBZHoldOutAIDrone&&); \
	NO_API ASBZHoldOutAIDrone(const ASBZHoldOutAIDrone&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHoldOutAIDrone(ASBZHoldOutAIDrone&&); \
	NO_API ASBZHoldOutAIDrone(const ASBZHoldOutAIDrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHoldOutAIDrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHoldOutAIDrone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHoldOutAIDrone)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HoldOutAreas() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, HoldOutAreas); } \
	FORCEINLINE static uint32 __PPO__GameplayTagCounterArray() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, GameplayTagCounterArray); } \
	FORCEINLINE static uint32 __PPO__TagReactionSpawnConfigs() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, TagReactionSpawnConfigs); } \
	FORCEINLINE static uint32 __PPO__TagDroneReactions() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, TagDroneReactions); } \
	FORCEINLINE static uint32 __PPO__TagsForCurrentObjectives() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, TagsForCurrentObjectives); } \
	FORCEINLINE static uint32 __PPO__AIDPS() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, AIDPS); } \
	FORCEINLINE static uint32 __PPO__FollowDroneObjective() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, FollowDroneObjective); } \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__FogApplierComponent() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, FogApplierComponent); } \
	FORCEINLINE static uint32 __PPO__AKComponent() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, AKComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentDifficulty() { return STRUCT_OFFSET(ASBZHoldOutAIDrone, CurrentDifficulty); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_31_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHoldOutAIDrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutAIDrone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
