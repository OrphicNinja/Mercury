// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZRangedWeaponData;
#ifdef STARBREEZE_SBZUIWeaponStatsBlueprint_generated_h
#error "SBZUIWeaponStatsBlueprint.generated.h already included, missing '#pragma once' in SBZUIWeaponStatsBlueprint.h"
#endif
#define STARBREEZE_SBZUIWeaponStatsBlueprint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_EVENT_PARMS \
	struct SBZUIWeaponStatsBlueprint_eventGetAccuracyValueArray_Parms \
	{ \
		const USBZRangedWeaponData* RangedWeaponData; \
		TArray<float> OutValueArray; \
	}; \
	struct SBZUIWeaponStatsBlueprint_eventGetDamageValueArray_Parms \
	{ \
		const USBZRangedWeaponData* RangedWeaponData; \
		TArray<float> OutValueArray; \
	}; \
	struct SBZUIWeaponStatsBlueprint_eventGetFireRateValueArray_Parms \
	{ \
		const USBZRangedWeaponData* RangedWeaponData; \
		TArray<float> OutValueArray; \
	}; \
	struct SBZUIWeaponStatsBlueprint_eventGetHandlingValueArray_Parms \
	{ \
		const USBZRangedWeaponData* RangedWeaponData; \
		TArray<float> OutValueArray; \
	}; \
	struct SBZUIWeaponStatsBlueprint_eventGetRecoilValueArray_Parms \
	{ \
		const USBZRangedWeaponData* RangedWeaponData; \
		TArray<float> OutValueArray; \
	}; \
	struct SBZUIWeaponStatsBlueprint_eventGetStabilityValueArray_Parms \
	{ \
		const USBZRangedWeaponData* RangedWeaponData; \
		TArray<float> OutValueArray; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUIWeaponStatsBlueprint(); \
	friend struct Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics; \
public: \
	DECLARE_CLASS(USBZUIWeaponStatsBlueprint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIWeaponStatsBlueprint)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUIWeaponStatsBlueprint(); \
	friend struct Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics; \
public: \
	DECLARE_CLASS(USBZUIWeaponStatsBlueprint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIWeaponStatsBlueprint)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUIWeaponStatsBlueprint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUIWeaponStatsBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIWeaponStatsBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIWeaponStatsBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIWeaponStatsBlueprint(USBZUIWeaponStatsBlueprint&&); \
	NO_API USBZUIWeaponStatsBlueprint(const USBZUIWeaponStatsBlueprint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIWeaponStatsBlueprint(USBZUIWeaponStatsBlueprint&&); \
	NO_API USBZUIWeaponStatsBlueprint(const USBZUIWeaponStatsBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIWeaponStatsBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIWeaponStatsBlueprint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUIWeaponStatsBlueprint)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUIWeaponStatsBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUIWeaponStatsBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
