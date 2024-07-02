// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESBZObjectiveGroup : uint8;
class ASBZObjective;
enum class ESBZObjectiveState : uint8;
#ifdef STARBREEZE_SBZObjective_generated_h
#error "SBZObjective.generated.h already included, missing '#pragma once' in SBZObjective.h"
#endif
#define STARBREEZE_SBZObjective_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_RPC_WRAPPERS \
	virtual void Multicast_OnProgressChanged_Implementation(int32 NewProgress); \
	virtual void Multicast_OnStateChanged_Implementation(ESBZObjectiveState NewState); \
	virtual void Multicast_SetMaxProgress_Implementation(float InMaxProgress); \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execAddProgress); \
	DECLARE_FUNCTION(execComplete); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execFail); \
	DECLARE_FUNCTION(execGetActiveInGroup); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execMulticast_OnProgressChanged); \
	DECLARE_FUNCTION(execMulticast_OnStateChanged); \
	DECLARE_FUNCTION(execMulticast_SetMaxProgress); \
	DECLARE_FUNCTION(execOnRep_Progress); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnProgressChanged_Implementation(int32 NewProgress); \
	virtual void Multicast_OnStateChanged_Implementation(ESBZObjectiveState NewState); \
	virtual void Multicast_SetMaxProgress_Implementation(float InMaxProgress); \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execAddProgress); \
	DECLARE_FUNCTION(execComplete); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execFail); \
	DECLARE_FUNCTION(execGetActiveInGroup); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execMulticast_OnProgressChanged); \
	DECLARE_FUNCTION(execMulticast_OnStateChanged); \
	DECLARE_FUNCTION(execMulticast_SetMaxProgress); \
	DECLARE_FUNCTION(execOnRep_Progress); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_EVENT_PARMS \
	struct SBZObjective_eventMulticast_OnProgressChanged_Parms \
	{ \
		int32 NewProgress; \
	}; \
	struct SBZObjective_eventMulticast_OnStateChanged_Parms \
	{ \
		ESBZObjectiveState NewState; \
	}; \
	struct SBZObjective_eventMulticast_SetMaxProgress_Parms \
	{ \
		float InMaxProgress; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZObjective(); \
	friend struct Z_Construct_UClass_ASBZObjective_Statics; \
public: \
	DECLARE_CLASS(ASBZObjective, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		Progress, \
		MaxProgress, \
		NETFIELD_REP_END=MaxProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZObjective(); \
	friend struct Z_Construct_UClass_ASBZObjective_Statics; \
public: \
	DECLARE_CLASS(ASBZObjective, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		Progress, \
		MaxProgress, \
		NETFIELD_REP_END=MaxProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZObjective(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZObjective(ASBZObjective&&); \
	NO_API ASBZObjective(const ASBZObjective&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZObjective(ASBZObjective&&); \
	NO_API ASBZObjective(const ASBZObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZObjective); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bProgressWhileInactive() { return STRUCT_OFFSET(ASBZObjective, bProgressWhileInactive); } \
	FORCEINLINE static uint32 __PPO__bCompleteWhenInactiveFromProgress() { return STRUCT_OFFSET(ASBZObjective, bCompleteWhenInactiveFromProgress); } \
	FORCEINLINE static uint32 __PPO__bAutoActiveOnParent() { return STRUCT_OFFSET(ASBZObjective, bAutoActiveOnParent); } \
	FORCEINLINE static uint32 __PPO__SubobjectiveSetting() { return STRUCT_OFFSET(ASBZObjective, SubobjectiveSetting); } \
	FORCEINLINE static uint32 __PPO__TagContainer() { return STRUCT_OFFSET(ASBZObjective, TagContainer); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ASBZObjective, State); } \
	FORCEINLINE static uint32 __PPO__Progress() { return STRUCT_OFFSET(ASBZObjective, Progress); } \
	FORCEINLINE static uint32 __PPO__MaxProgress() { return STRUCT_OFFSET(ASBZObjective, MaxProgress); } \
	FORCEINLINE static uint32 __PPO__MaxProgressPerDifficulty() { return STRUCT_OFFSET(ASBZObjective, MaxProgressPerDifficulty); } \
	FORCEINLINE static uint32 __PPO__bCanEverReplicateMaxProgress() { return STRUCT_OFFSET(ASBZObjective, bCanEverReplicateMaxProgress); } \
	FORCEINLINE static uint32 __PPO__StartTimeSeconds() { return STRUCT_OFFSET(ASBZObjective, StartTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__TimedObjectiveActor() { return STRUCT_OFFSET(ASBZObjective, TimedObjectiveActor); } \
	FORCEINLINE static uint32 __PPO__TimedObjectiveActorArray() { return STRUCT_OFFSET(ASBZObjective, TimedObjectiveActorArray); } \
	FORCEINLINE static uint32 __PPO__InfoActorArray() { return STRUCT_OFFSET(ASBZObjective, InfoActorArray); } \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZObjective, MarkerAsset); }


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjective_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZObjective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
