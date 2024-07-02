// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USBZHoldOutObjectiveBase;
struct FGameplayTagContainer;
enum class ESBZHoldOutObjectiveResult : uint8;
enum class ESBZHoldOutModeDifficulty : uint8;
#ifdef STARBREEZE_SBZHoldOutArea_generated_h
#error "SBZHoldOutArea.generated.h already included, missing '#pragma once' in SBZHoldOutArea.h"
#endif
#define STARBREEZE_SBZHoldOutArea_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDroneMoveToLocation); \
	DECLARE_FUNCTION(execIsAnyObjectiveActive); \
	DECLARE_FUNCTION(execOnObjectiveProgressChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveResultChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveStartedCallBack); \
	DECLARE_FUNCTION(execSelectAsCurrentArea); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStop);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDroneMoveToLocation); \
	DECLARE_FUNCTION(execIsAnyObjectiveActive); \
	DECLARE_FUNCTION(execOnObjectiveProgressChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveResultChangedCallBack); \
	DECLARE_FUNCTION(execOnObjectiveStartedCallBack); \
	DECLARE_FUNCTION(execSelectAsCurrentArea); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStop);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHoldOutArea(); \
	friend struct Z_Construct_UClass_ASBZHoldOutArea_Statics; \
public: \
	DECLARE_CLASS(ASBZHoldOutArea, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHoldOutArea) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHoldOutArea*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASBZHoldOutArea(); \
	friend struct Z_Construct_UClass_ASBZHoldOutArea_Statics; \
public: \
	DECLARE_CLASS(ASBZHoldOutArea, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHoldOutArea) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHoldOutArea*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHoldOutArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHoldOutArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHoldOutArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHoldOutArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHoldOutArea(ASBZHoldOutArea&&); \
	NO_API ASBZHoldOutArea(const ASBZHoldOutArea&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHoldOutArea(ASBZHoldOutArea&&); \
	NO_API ASBZHoldOutArea(const ASBZHoldOutArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHoldOutArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHoldOutArea); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHoldOutArea)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Objectives() { return STRUCT_OFFSET(ASBZHoldOutArea, Objectives); } \
	FORCEINLINE static uint32 __PPO__OnAreaCompletedAIOrders() { return STRUCT_OFFSET(ASBZHoldOutArea, OnAreaCompletedAIOrders); } \
	FORCEINLINE static uint32 __PPO__ProtectPoints() { return STRUCT_OFFSET(ASBZHoldOutArea, ProtectPoints); } \
	FORCEINLINE static uint32 __PPO__ModifierCounts() { return STRUCT_OFFSET(ASBZHoldOutArea, ModifierCounts); } \
	FORCEINLINE static uint32 __PPO__ModifiersPerDifficulty() { return STRUCT_OFFSET(ASBZHoldOutArea, ModifiersPerDifficulty); } \
	FORCEINLINE static uint32 __PPO__DroneMoveToLocation() { return STRUCT_OFFSET(ASBZHoldOutArea, DroneMoveToLocation); } \
	FORCEINLINE static uint32 __PPO__SpawnWaveSettingsProxyComponent() { return STRUCT_OFFSET(ASBZHoldOutArea, SpawnWaveSettingsProxyComponent); } \
	FORCEINLINE static uint32 __PPO__SpawnWaveProgressionComponent() { return STRUCT_OFFSET(ASBZHoldOutArea, SpawnWaveProgressionComponent); } \
	FORCEINLINE static uint32 __PPO__FogProgressionComponent() { return STRUCT_OFFSET(ASBZHoldOutArea, FogProgressionComponent); } \
	FORCEINLINE static uint32 __PPO__MinDifficulty() { return STRUCT_OFFSET(ASBZHoldOutArea, MinDifficulty); } \
	FORCEINLINE static uint32 __PPO__bApplySpawnSettingsWhenSelected() { return STRUCT_OFFSET(ASBZHoldOutArea, bApplySpawnSettingsWhenSelected); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_25_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHoldOutArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
