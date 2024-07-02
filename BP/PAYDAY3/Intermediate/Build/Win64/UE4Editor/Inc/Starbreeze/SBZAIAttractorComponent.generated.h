// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
class APawn;
#ifdef STARBREEZE_SBZAIAttractorComponent_generated_h
#error "SBZAIAttractorComponent.generated.h already included, missing '#pragma once' in SBZAIAttractorComponent.h"
#endif
#define STARBREEZE_SBZAIAttractorComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execRegisterWithPerceptionSystem); \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execUnregisterFromPerceptionSystem);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execRegisterWithPerceptionSystem); \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execUnregisterFromPerceptionSystem);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIAttractorComponent(); \
	friend struct Z_Construct_UClass_USBZAIAttractorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIAttractorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAttractorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAIAttractorComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIAttractorComponent(); \
	friend struct Z_Construct_UClass_USBZAIAttractorComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAIAttractorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAttractorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USBZAIAttractorComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAttractorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAttractorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAttractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAttractorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAttractorComponent(USBZAIAttractorComponent&&); \
	NO_API USBZAIAttractorComponent(const USBZAIAttractorComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAttractorComponent(USBZAIAttractorComponent&&); \
	NO_API USBZAIAttractorComponent(const USBZAIAttractorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAttractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAttractorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAttractorComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RegisterAsSourceForSenses() { return STRUCT_OFFSET(USBZAIAttractorComponent, RegisterAsSourceForSenses); } \
	FORCEINLINE static uint32 __PPO__DefaultSense() { return STRUCT_OFFSET(USBZAIAttractorComponent, DefaultSense); } \
	FORCEINLINE static uint32 __PPO__MaxHeistStateToBeEnabled() { return STRUCT_OFFSET(USBZAIAttractorComponent, MaxHeistStateToBeEnabled); } \
	FORCEINLINE static uint32 __PPO__AttractorDataAssetDefault() { return STRUCT_OFFSET(USBZAIAttractorComponent, AttractorDataAssetDefault); } \
	FORCEINLINE static uint32 __PPO__AttractorDataAsset() { return STRUCT_OFFSET(USBZAIAttractorComponent, AttractorDataAsset); } \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(USBZAIAttractorComponent, Priority); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(USBZAIAttractorComponent, Radius); } \
	FORCEINLINE static uint32 __PPO__bUseMaxConcurrentUsers() { return STRUCT_OFFSET(USBZAIAttractorComponent, bUseMaxConcurrentUsers); } \
	FORCEINLINE static uint32 __PPO__MaxConcurrentUsers() { return STRUCT_OFFSET(USBZAIAttractorComponent, MaxConcurrentUsers); } \
	FORCEINLINE static uint32 __PPO__MaxUses() { return STRUCT_OFFSET(USBZAIAttractorComponent, MaxUses); } \
	FORCEINLINE static uint32 __PPO__bDestroyOnComplete() { return STRUCT_OFFSET(USBZAIAttractorComponent, bDestroyOnComplete); } \
	FORCEINLINE static uint32 __PPO__bIsReusable() { return STRUCT_OFFSET(USBZAIAttractorComponent, bIsReusable); } \
	FORCEINLINE static uint32 __PPO__Tags() { return STRUCT_OFFSET(USBZAIAttractorComponent, Tags); } \
	FORCEINLINE static uint32 __PPO__AttractorPredicate() { return STRUCT_OFFSET(USBZAIAttractorComponent, AttractorPredicate); } \
	FORCEINLINE static uint32 __PPO__AttractorPredicates() { return STRUCT_OFFSET(USBZAIAttractorComponent, AttractorPredicates); } \
	FORCEINLINE static uint32 __PPO__StealthAttractorPredicate() { return STRUCT_OFFSET(USBZAIAttractorComponent, StealthAttractorPredicate); } \
	FORCEINLINE static uint32 __PPO__Actions() { return STRUCT_OFFSET(USBZAIAttractorComponent, Actions); } \
	FORCEINLINE static uint32 __PPO__ActionMetaData() { return STRUCT_OFFSET(USBZAIAttractorComponent, ActionMetaData); } \
	FORCEINLINE static uint32 __PPO__ActiveUsers() { return STRUCT_OFFSET(USBZAIAttractorComponent, ActiveUsers); } \
	FORCEINLINE static uint32 __PPO__DormantUsers() { return STRUCT_OFFSET(USBZAIAttractorComponent, DormantUsers); } \
	FORCEINLINE static uint32 __PPO__CompletedUsers() { return STRUCT_OFFSET(USBZAIAttractorComponent, CompletedUsers); } \
	FORCEINLINE static uint32 __PPO__IgnoreActors() { return STRUCT_OFFSET(USBZAIAttractorComponent, IgnoreActors); } \
	FORCEINLINE static uint32 __PPO__DormantActions() { return STRUCT_OFFSET(USBZAIAttractorComponent, DormantActions); } \
	FORCEINLINE static uint32 __PPO__ActiveActions() { return STRUCT_OFFSET(USBZAIAttractorComponent, ActiveActions); } \
	FORCEINLINE static uint32 __PPO__AttractorInstigator() { return STRUCT_OFFSET(USBZAIAttractorComponent, AttractorInstigator); } \
	FORCEINLINE static uint32 __PPO__bIsEnabledAfteSearch() { return STRUCT_OFFSET(USBZAIAttractorComponent, bIsEnabledAfteSearch); } \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(USBZAIAttractorComponent, bIsEnabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIAttractorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
