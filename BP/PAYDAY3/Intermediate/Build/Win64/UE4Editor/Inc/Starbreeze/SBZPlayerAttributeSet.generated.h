// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef STARBREEZE_SBZPlayerAttributeSet_generated_h
#error "SBZPlayerAttributeSet.generated.h already included, missing '#pragma once' in SBZPlayerAttributeSet.h"
#endif
#define STARBREEZE_SBZPlayerAttributeSet_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_RPC_WRAPPERS \
	virtual void Multicast_SetArmorChunkCount_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetArmorTrauma_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetDodge_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetDownedCount_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetHealthTrauma_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryEquippableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryEquippableAmmoLoaded_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryThrowableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryToolAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryEquippableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryEquippableAmmoLoaded_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryThrowableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryToolAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryEquippableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryEquippableAmmoLoaded_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryThrowableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryToolAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
 \
	DECLARE_FUNCTION(execMulticast_SetArmorChunkCount); \
	DECLARE_FUNCTION(execMulticast_SetArmorTrauma); \
	DECLARE_FUNCTION(execMulticast_SetDodge); \
	DECLARE_FUNCTION(execMulticast_SetDownedCount); \
	DECLARE_FUNCTION(execMulticast_SetHealthTrauma); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryToolAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryToolAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryToolAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_ArmorChunkCount); \
	DECLARE_FUNCTION(execOnRep_ArmorTrauma); \
	DECLARE_FUNCTION(execOnRep_Dodge); \
	DECLARE_FUNCTION(execOnRep_DownedCount); \
	DECLARE_FUNCTION(execOnRep_HealthTrauma); \
	DECLARE_FUNCTION(execOnRep_PrimaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execOnRep_PrimaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryToolAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execOnRep_SecondaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryToolAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execOnRep_TertiaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryToolAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryToolPlaceableAmmoInventory);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetArmorChunkCount_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetArmorTrauma_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetDodge_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetDownedCount_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetHealthTrauma_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryEquippableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryEquippableAmmoLoaded_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryThrowableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryToolAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetPrimaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryEquippableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryEquippableAmmoLoaded_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryThrowableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryToolAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetSecondaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryEquippableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryEquippableAmmoLoaded_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryThrowableAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryToolAmmoInventory_Implementation(float NewCurrentValue); \
	virtual void Multicast_SetTertiaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue); \
 \
	DECLARE_FUNCTION(execMulticast_SetArmorChunkCount); \
	DECLARE_FUNCTION(execMulticast_SetArmorTrauma); \
	DECLARE_FUNCTION(execMulticast_SetDodge); \
	DECLARE_FUNCTION(execMulticast_SetDownedCount); \
	DECLARE_FUNCTION(execMulticast_SetHealthTrauma); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryToolAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetPrimaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryToolAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetSecondaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryToolAmmoInventory); \
	DECLARE_FUNCTION(execMulticast_SetTertiaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_ArmorChunkCount); \
	DECLARE_FUNCTION(execOnRep_ArmorTrauma); \
	DECLARE_FUNCTION(execOnRep_Dodge); \
	DECLARE_FUNCTION(execOnRep_DownedCount); \
	DECLARE_FUNCTION(execOnRep_HealthTrauma); \
	DECLARE_FUNCTION(execOnRep_PrimaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execOnRep_PrimaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryToolAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_PrimaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execOnRep_SecondaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryToolAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_SecondaryToolPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryEquippableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryEquippableAmmoLoaded); \
	DECLARE_FUNCTION(execOnRep_TertiaryPlaceableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryThrowableAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryToolAmmoInventory); \
	DECLARE_FUNCTION(execOnRep_TertiaryToolPlaceableAmmoInventory);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_EVENT_PARMS \
	struct SBZPlayerAttributeSet_eventMulticast_SetArmorChunkCount_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetArmorTrauma_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetDodge_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetDownedCount_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetHealthTrauma_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetPrimaryEquippableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetPrimaryEquippableAmmoLoaded_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetPrimaryPlaceableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetPrimaryThrowableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetPrimaryToolAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetPrimaryToolPlaceableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetSecondaryEquippableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetSecondaryEquippableAmmoLoaded_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetSecondaryPlaceableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetSecondaryThrowableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetSecondaryToolAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetSecondaryToolPlaceableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetTertiaryEquippableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetTertiaryEquippableAmmoLoaded_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetTertiaryPlaceableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetTertiaryThrowableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetTertiaryToolAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	}; \
	struct SBZPlayerAttributeSet_eventMulticast_SetTertiaryToolPlaceableAmmoInventory_Parms \
	{ \
		float NewCurrentValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerAttributeSet(); \
	friend struct Z_Construct_UClass_USBZPlayerAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerAttributeSet, USBZCharacterAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PrimaryEquippableAmmoInventory=NETFIELD_REP_START, \
		SecondaryEquippableAmmoInventory, \
		TertiaryEquippableAmmoInventory, \
		PrimaryEquippableAmmoLoaded, \
		SecondaryEquippableAmmoLoaded, \
		TertiaryEquippableAmmoLoaded, \
		PrimaryThrowableAmmoInventory, \
		SecondaryThrowableAmmoInventory, \
		TertiaryThrowableAmmoInventory, \
		PrimaryPlaceableAmmoInventory, \
		SecondaryPlaceableAmmoInventory, \
		TertiaryPlaceableAmmoInventory, \
		PrimaryToolPlaceableAmmoInventory, \
		SecondaryToolPlaceableAmmoInventory, \
		TertiaryToolPlaceableAmmoInventory, \
		PrimaryToolAmmoInventory, \
		SecondaryToolAmmoInventory, \
		TertiaryToolAmmoInventory, \
		DownedCount, \
		Dodge, \
		ArmorChunkCount, \
		ArmorTrauma, \
		HealthTrauma, \
		NETFIELD_REP_END=HealthTrauma	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerAttributeSet(); \
	friend struct Z_Construct_UClass_USBZPlayerAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerAttributeSet, USBZCharacterAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PrimaryEquippableAmmoInventory=NETFIELD_REP_START, \
		SecondaryEquippableAmmoInventory, \
		TertiaryEquippableAmmoInventory, \
		PrimaryEquippableAmmoLoaded, \
		SecondaryEquippableAmmoLoaded, \
		TertiaryEquippableAmmoLoaded, \
		PrimaryThrowableAmmoInventory, \
		SecondaryThrowableAmmoInventory, \
		TertiaryThrowableAmmoInventory, \
		PrimaryPlaceableAmmoInventory, \
		SecondaryPlaceableAmmoInventory, \
		TertiaryPlaceableAmmoInventory, \
		PrimaryToolPlaceableAmmoInventory, \
		SecondaryToolPlaceableAmmoInventory, \
		TertiaryToolPlaceableAmmoInventory, \
		PrimaryToolAmmoInventory, \
		SecondaryToolAmmoInventory, \
		TertiaryToolAmmoInventory, \
		DownedCount, \
		Dodge, \
		ArmorChunkCount, \
		ArmorTrauma, \
		HealthTrauma, \
		NETFIELD_REP_END=HealthTrauma	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerAttributeSet(USBZPlayerAttributeSet&&); \
	NO_API USBZPlayerAttributeSet(const USBZPlayerAttributeSet&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerAttributeSet(USBZPlayerAttributeSet&&); \
	NO_API USBZPlayerAttributeSet(const USBZPlayerAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPlayerAttributeSet)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmorData() { return STRUCT_OFFSET(USBZPlayerAttributeSet, ArmorData); } \
	FORCEINLINE static uint32 __PPO__AbilityData() { return STRUCT_OFFSET(USBZPlayerAttributeSet, AbilityData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
