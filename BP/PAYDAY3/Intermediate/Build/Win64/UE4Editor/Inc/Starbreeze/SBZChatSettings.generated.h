// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZChatGameSettings;
#ifdef STARBREEZE_SBZChatSettings_generated_h
#error "SBZChatSettings.generated.h already included, missing '#pragma once' in SBZChatSettings.h"
#endif
#define STARBREEZE_SBZChatSettings_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChatSettings);


#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChatSettings);


#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZChatSettings(); \
	friend struct Z_Construct_UClass_USBZChatSettings_Statics; \
public: \
	DECLARE_CLASS(USBZChatSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChatSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZChatSettings(); \
	friend struct Z_Construct_UClass_USBZChatSettings_Statics; \
public: \
	DECLARE_CLASS(USBZChatSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZChatSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZChatSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZChatSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChatSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChatSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChatSettings(USBZChatSettings&&); \
	NO_API USBZChatSettings(const USBZChatSettings&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZChatSettings(USBZChatSettings&&); \
	NO_API USBZChatSettings(const USBZChatSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZChatSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZChatSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZChatSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZChatSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZChatSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
