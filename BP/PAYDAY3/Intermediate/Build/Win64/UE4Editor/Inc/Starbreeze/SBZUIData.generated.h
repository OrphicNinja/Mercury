// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDifficulty : uint8;
enum class ESBZSecurityCompany : uint8;
class UPD3SecurityCompanyDataAsset;
#ifdef STARBREEZE_SBZUIData_generated_h
#error "SBZUIData.generated.h already included, missing '#pragma once' in SBZUIData.h"
#endif
#define STARBREEZE_SBZUIData_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDifficultyText); \
	DECLARE_FUNCTION(execGetSecurityCompanyData);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDifficultyText); \
	DECLARE_FUNCTION(execGetSecurityCompanyData);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUIData(); \
	friend struct Z_Construct_UClass_USBZUIData_Statics; \
public: \
	DECLARE_CLASS(USBZUIData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIData)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUIData(); \
	friend struct Z_Construct_UClass_USBZUIData_Statics; \
public: \
	DECLARE_CLASS(USBZUIData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIData)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUIData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUIData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIData(USBZUIData&&); \
	NO_API USBZUIData(const USBZUIData&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIData(USBZUIData&&); \
	NO_API USBZUIData(const USBZUIData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUIData)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SecurityCompanyDataAssets() { return STRUCT_OFFSET(USBZUIData, SecurityCompanyDataAssets); } \
	FORCEINLINE static uint32 __PPO__DifficultyText() { return STRUCT_OFFSET(USBZUIData, DifficultyText); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUIData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUIData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
