// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZHeistDataLevelPair;
struct FSoftObjectPath;
class UPD3HeistDataAsset;
#ifdef STARBREEZE_SBZHeistDeveloperSettings_generated_h
#error "SBZHeistDeveloperSettings.generated.h already included, missing '#pragma once' in SBZHeistDeveloperSettings.h"
#endif
#define STARBREEZE_SBZHeistDeveloperSettings_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllHeistData); \
	DECLARE_FUNCTION(execGetHeistDataFromLevelPath); \
	DECLARE_FUNCTION(execGetHeistDataFromLevelShortName);


#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllHeistData); \
	DECLARE_FUNCTION(execGetHeistDataFromLevelPath); \
	DECLARE_FUNCTION(execGetHeistDataFromLevelShortName);


#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHeistDeveloperSettings(); \
	friend struct Z_Construct_UClass_USBZHeistDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(USBZHeistDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHeistDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHeistDeveloperSettings(); \
	friend struct Z_Construct_UClass_USBZHeistDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(USBZHeistDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHeistDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHeistDeveloperSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHeistDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHeistDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHeistDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHeistDeveloperSettings(USBZHeistDeveloperSettings&&); \
	NO_API USBZHeistDeveloperSettings(const USBZHeistDeveloperSettings&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHeistDeveloperSettings(USBZHeistDeveloperSettings&&); \
	NO_API USBZHeistDeveloperSettings(const USBZHeistDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHeistDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHeistDeveloperSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHeistDeveloperSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeistLevelPairArray() { return STRUCT_OFFSET(USBZHeistDeveloperSettings, HeistLevelPairArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHeistDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHeistDeveloperSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
