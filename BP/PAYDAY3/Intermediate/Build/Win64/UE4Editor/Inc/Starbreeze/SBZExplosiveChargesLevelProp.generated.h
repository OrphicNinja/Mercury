// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZExplosiveChargesLevelProp_generated_h
#error "SBZExplosiveChargesLevelProp.generated.h already included, missing '#pragma once' in SBZExplosiveChargesLevelProp.h"
#endif
#define STARBREEZE_SBZExplosiveChargesLevelProp_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_RPC_WRAPPERS \
	virtual void Multicast_SetEnabled_Implementation(bool bInIsEnabled); \
 \
	DECLARE_FUNCTION(execDecrementPlacedExplosiveCount); \
	DECLARE_FUNCTION(execIncrementPlacedExplosiveCount); \
	DECLARE_FUNCTION(execMulticast_SetEnabled); \
	DECLARE_FUNCTION(execOnRep_IsEnabled); \
	DECLARE_FUNCTION(execOnRep_IsExploded); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetEnabled_Implementation(bool bInIsEnabled); \
 \
	DECLARE_FUNCTION(execDecrementPlacedExplosiveCount); \
	DECLARE_FUNCTION(execIncrementPlacedExplosiveCount); \
	DECLARE_FUNCTION(execMulticast_SetEnabled); \
	DECLARE_FUNCTION(execOnRep_IsEnabled); \
	DECLARE_FUNCTION(execOnRep_IsExploded); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_EVENT_PARMS \
	struct SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms \
	{ \
		bool bEnabled; \
		bool bDoCosmetics; \
	}; \
	struct SBZExplosiveChargesLevelProp_eventMulticast_SetEnabled_Parms \
	{ \
		bool bInIsEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZExplosiveChargesLevelProp(); \
	friend struct Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveChargesLevelProp, ASBZExplosiveLevelProp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveChargesLevelProp) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsExploded=NETFIELD_REP_START, \
		PlacedExplosivesCount, \
		bIsEnabled, \
		NETFIELD_REP_END=bIsEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZExplosiveChargesLevelProp(); \
	friend struct Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveChargesLevelProp, ASBZExplosiveLevelProp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveChargesLevelProp) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsExploded=NETFIELD_REP_START, \
		PlacedExplosivesCount, \
		bIsEnabled, \
		NETFIELD_REP_END=bIsEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZExplosiveChargesLevelProp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveChargesLevelProp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveChargesLevelProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveChargesLevelProp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveChargesLevelProp(ASBZExplosiveChargesLevelProp&&); \
	NO_API ASBZExplosiveChargesLevelProp(const ASBZExplosiveChargesLevelProp&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveChargesLevelProp(ASBZExplosiveChargesLevelProp&&); \
	NO_API ASBZExplosiveChargesLevelProp(const ASBZExplosiveChargesLevelProp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveChargesLevelProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveChargesLevelProp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveChargesLevelProp)


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfExplosivesToPlace() { return STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, NumberOfExplosivesToPlace); } \
	FORCEINLINE static uint32 __PPO__bCanCancelExplosiveTimer() { return STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, bCanCancelExplosiveTimer); } \
	FORCEINLINE static uint32 __PPO__bIsExploded() { return STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, bIsExploded); } \
	FORCEINLINE static uint32 __PPO__PlacedExplosivesCount() { return STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, PlacedExplosivesCount); } \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, bIsEnabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZExplosiveChargesLevelProp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZExplosiveChargesLevelProp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
