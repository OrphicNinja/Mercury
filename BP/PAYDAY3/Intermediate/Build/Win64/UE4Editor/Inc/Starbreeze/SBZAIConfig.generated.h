// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZAIConfig;
struct FSBZCoverShootingPoints;
#ifdef STARBREEZE_SBZAIConfig_generated_h
#error "SBZAIConfig.generated.h already included, missing '#pragma once' in SBZAIConfig.h"
#endif
#define STARBREEZE_SBZAIConfig_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetShootingPoints);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetShootingPoints);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIConfig(); \
	friend struct Z_Construct_UClass_USBZAIConfig_Statics; \
public: \
	DECLARE_CLASS(USBZAIConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIConfig(); \
	friend struct Z_Construct_UClass_USBZAIConfig_Statics; \
public: \
	DECLARE_CLASS(USBZAIConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Starbreeze");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIConfig(USBZAIConfig&&); \
	NO_API USBZAIConfig(const USBZAIConfig&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIConfig(USBZAIConfig&&); \
	NO_API USBZAIConfig(const USBZAIConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIConfig)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DPS() { return STRUCT_OFFSET(USBZAIConfig, DPS); } \
	FORCEINLINE static uint32 __PPO__ActionClasses() { return STRUCT_OFFSET(USBZAIConfig, ActionClasses); } \
	FORCEINLINE static uint32 __PPO__OrderClasses() { return STRUCT_OFFSET(USBZAIConfig, OrderClasses); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
