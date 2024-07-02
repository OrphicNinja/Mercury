// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlaceableSensorTool_generated_h
#error "SBZPlaceableSensorTool.generated.h already included, missing '#pragma once' in SBZPlaceableSensorTool.h"
#endif
#define STARBREEZE_SBZPlaceableSensorTool_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_RPC_WRAPPERS \
	virtual void Client_DisablePickup_Implementation(); \
	virtual void Multicast_SensorAmmoDepleted_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_DisablePickup); \
	DECLARE_FUNCTION(execMulticast_SensorAmmoDepleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_DisablePickup_Implementation(); \
	virtual void Multicast_SensorAmmoDepleted_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_DisablePickup); \
	DECLARE_FUNCTION(execMulticast_SensorAmmoDepleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableSensorTool(); \
	friend struct Z_Construct_UClass_ASBZPlaceableSensorTool_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableSensorTool, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableSensorTool) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPickupDisabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPickupDisabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableSensorTool(); \
	friend struct Z_Construct_UClass_ASBZPlaceableSensorTool_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableSensorTool, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableSensorTool) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPickupDisabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPickupDisabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableSensorTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableSensorTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableSensorTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableSensorTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableSensorTool(ASBZPlaceableSensorTool&&); \
	NO_API ASBZPlaceableSensorTool(const ASBZPlaceableSensorTool&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableSensorTool(ASBZPlaceableSensorTool&&); \
	NO_API ASBZPlaceableSensorTool(const ASBZPlaceableSensorTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableSensorTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableSensorTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableSensorTool)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__AutoMarkTickInterval() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, AutoMarkTickInterval); } \
	FORCEINLINE static uint32 __PPO__SensorRange() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, SensorRange); } \
	FORCEINLINE static uint32 __PPO__MaxMarkableAICount() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, MaxMarkableAICount); } \
	FORCEINLINE static uint32 __PPO__OnSensorAmmoDepleted() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, OnSensorAmmoDepleted); } \
	FORCEINLINE static uint32 __PPO__bIsPickupDisabled() { return STRUCT_OFFSET(ASBZPlaceableSensorTool, bIsPickupDisabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableSensorTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableSensorTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
