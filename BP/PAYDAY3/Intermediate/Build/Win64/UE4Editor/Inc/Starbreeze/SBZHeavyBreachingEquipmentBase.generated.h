// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZHeavyBreachingEquipmentBase_generated_h
#error "SBZHeavyBreachingEquipmentBase.generated.h already included, missing '#pragma once' in SBZHeavyBreachingEquipmentBase.h"
#endif
#define STARBREEZE_SBZHeavyBreachingEquipmentBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_RPC_WRAPPERS \
	virtual void Multicast_OnPartAdded_Implementation(); \
	virtual void Multicast_SetEstimatedFuelEndTime_Implementation(float InEstimatedFuelEndTime); \
 \
	DECLARE_FUNCTION(execMulticast_OnPartAdded); \
	DECLARE_FUNCTION(execMulticast_SetEstimatedFuelEndTime); \
	DECLARE_FUNCTION(execOnRep_PartsAdded);


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnPartAdded_Implementation(); \
	virtual void Multicast_SetEstimatedFuelEndTime_Implementation(float InEstimatedFuelEndTime); \
 \
	DECLARE_FUNCTION(execMulticast_OnPartAdded); \
	DECLARE_FUNCTION(execMulticast_SetEstimatedFuelEndTime); \
	DECLARE_FUNCTION(execOnRep_PartsAdded);


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_EVENT_PARMS \
	struct SBZHeavyBreachingEquipmentBase_eventBP_PartAdded_Parms \
	{ \
		int32 Amount; \
	}; \
	struct SBZHeavyBreachingEquipmentBase_eventMulticast_SetEstimatedFuelEndTime_Parms \
	{ \
		float InEstimatedFuelEndTime; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHeavyBreachingEquipmentBase(); \
	friend struct Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics; \
public: \
	DECLARE_CLASS(ASBZHeavyBreachingEquipmentBase, ASBZBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHeavyBreachingEquipmentBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumberOfPartsAdded=NETFIELD_REP_START, \
		EstimatedFuelEndTime, \
		NETFIELD_REP_END=EstimatedFuelEndTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZHeavyBreachingEquipmentBase(); \
	friend struct Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics; \
public: \
	DECLARE_CLASS(ASBZHeavyBreachingEquipmentBase, ASBZBreachingEquipmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHeavyBreachingEquipmentBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumberOfPartsAdded=NETFIELD_REP_START, \
		EstimatedFuelEndTime, \
		NETFIELD_REP_END=EstimatedFuelEndTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHeavyBreachingEquipmentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHeavyBreachingEquipmentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHeavyBreachingEquipmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHeavyBreachingEquipmentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHeavyBreachingEquipmentBase(ASBZHeavyBreachingEquipmentBase&&); \
	NO_API ASBZHeavyBreachingEquipmentBase(const ASBZHeavyBreachingEquipmentBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHeavyBreachingEquipmentBase(ASBZHeavyBreachingEquipmentBase&&); \
	NO_API ASBZHeavyBreachingEquipmentBase(const ASBZHeavyBreachingEquipmentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHeavyBreachingEquipmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHeavyBreachingEquipmentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHeavyBreachingEquipmentBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHeavyBreachingEquipmentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHeavyBreachingEquipmentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
