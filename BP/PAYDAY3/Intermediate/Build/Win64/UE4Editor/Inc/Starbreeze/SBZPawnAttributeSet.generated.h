// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef STARBREEZE_SBZPawnAttributeSet_generated_h
#error "SBZPawnAttributeSet.generated.h already included, missing '#pragma once' in SBZPawnAttributeSet.h"
#endif
#define STARBREEZE_SBZPawnAttributeSet_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_RPC_WRAPPERS \
	virtual void Multicast_SetArmor_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetHealth_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetOverHeal_Implementation(float NewCurrentValue); \
 \
	DECLARE_FUNCTION(execMulticast_SetArmor); \
	DECLARE_FUNCTION(execMulticast_SetHealth); \
	DECLARE_FUNCTION(execMulticast_SetOverHeal); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_OverHeal);


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetArmor_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetHealth_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetOverHeal_Implementation(float NewCurrentValue); \
 \
	DECLARE_FUNCTION(execMulticast_SetArmor); \
	DECLARE_FUNCTION(execMulticast_SetHealth); \
	DECLARE_FUNCTION(execMulticast_SetOverHeal); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_OverHeal);


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_EVENT_PARMS \
	struct SBZPawnAttributeSet_eventMulticast_SetArmor_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPawnAttributeSet_eventMulticast_SetHealth_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPawnAttributeSet_eventMulticast_SetOverHeal_Parms \
	{ \
		float NewCurrentValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPawnAttributeSet(); \
	friend struct Z_Construct_UClass_USBZPawnAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBZPawnAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPawnAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Armor, \
		OverHeal, \
		NETFIELD_REP_END=OverHeal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USBZPawnAttributeSet) \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPawnAttributeSet(); \
	friend struct Z_Construct_UClass_USBZPawnAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBZPawnAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPawnAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Armor, \
		OverHeal, \
		NETFIELD_REP_END=OverHeal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USBZPawnAttributeSet) \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPawnAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPawnAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPawnAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPawnAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPawnAttributeSet(USBZPawnAttributeSet&&); \
	NO_API USBZPawnAttributeSet(const USBZPawnAttributeSet&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPawnAttributeSet(USBZPawnAttributeSet&&); \
	NO_API USBZPawnAttributeSet(const USBZPawnAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPawnAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPawnAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPawnAttributeSet)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastDamageTypeCDO() { return STRUCT_OFFSET(USBZPawnAttributeSet, LastDamageTypeCDO); } \
	FORCEINLINE static uint32 __PPO__LastInstigatorPawn() { return STRUCT_OFFSET(USBZPawnAttributeSet, LastInstigatorPawn); } \
	FORCEINLINE static uint32 __PPO__FlashedVoiceComment() { return STRUCT_OFFSET(USBZPawnAttributeSet, FlashedVoiceComment); } \
	FORCEINLINE static uint32 __PPO__FlashedByAllyVoiceComment() { return STRUCT_OFFSET(USBZPawnAttributeSet, FlashedByAllyVoiceComment); } \
	FORCEINLINE static uint32 __PPO__HitByFragVoiceComment() { return STRUCT_OFFSET(USBZPawnAttributeSet, HitByFragVoiceComment); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPawnAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
