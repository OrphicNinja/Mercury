// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef STARBREEZE_SBZTankAttributeSet_generated_h
#error "SBZTankAttributeSet.generated.h already included, missing '#pragma once' in SBZTankAttributeSet.h"
#endif
#define STARBREEZE_SBZTankAttributeSet_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_RPC_WRAPPERS \
	virtual void Multicast_SetVisorArmor_Implementation(float NewCurrentValue); \
 \
	DECLARE_FUNCTION(execMulticast_SetVisorArmor); \
	DECLARE_FUNCTION(execOnRep_VisorArmor);


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetVisorArmor_Implementation(float NewCurrentValue); \
 \
	DECLARE_FUNCTION(execMulticast_SetVisorArmor); \
	DECLARE_FUNCTION(execOnRep_VisorArmor);


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_EVENT_PARMS \
	struct SBZTankAttributeSet_eventMulticast_SetVisorArmor_Parms \
	{ \
		float NewCurrentValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZTankAttributeSet(); \
	friend struct Z_Construct_UClass_USBZTankAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBZTankAttributeSet, USBZAICharacterAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTankAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VisorArmor=NETFIELD_REP_START, \
		NETFIELD_REP_END=VisorArmor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZTankAttributeSet(); \
	friend struct Z_Construct_UClass_USBZTankAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBZTankAttributeSet, USBZAICharacterAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTankAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VisorArmor=NETFIELD_REP_START, \
		NETFIELD_REP_END=VisorArmor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTankAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTankAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTankAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTankAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTankAttributeSet(USBZTankAttributeSet&&); \
	NO_API USBZTankAttributeSet(const USBZTankAttributeSet&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTankAttributeSet(USBZTankAttributeSet&&); \
	NO_API USBZTankAttributeSet(const USBZTankAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTankAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTankAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZTankAttributeSet)


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmorDamageTypeMultipliers() { return STRUCT_OFFSET(USBZTankAttributeSet, ArmorDamageTypeMultipliers); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTankAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTankAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
