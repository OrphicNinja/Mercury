// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef STARBREEZE_SBTutorialCharacterSetting_generated_h
#error "SBTutorialCharacterSetting.generated.h already included, missing '#pragma once' in SBTutorialCharacterSetting.h"
#endif
#define STARBREEZE_SBTutorialCharacterSetting_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTutorialPlayerGuid); \
	DECLARE_FUNCTION(execGetTutorialPlayerSku);


#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTutorialPlayerGuid); \
	DECLARE_FUNCTION(execGetTutorialPlayerSku);


#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBTutorialCharacterSetting(); \
	friend struct Z_Construct_UClass_USBTutorialCharacterSetting_Statics; \
public: \
	DECLARE_CLASS(USBTutorialCharacterSetting, USBZDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBTutorialCharacterSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBTutorialCharacterSetting(); \
	friend struct Z_Construct_UClass_USBTutorialCharacterSetting_Statics; \
public: \
	DECLARE_CLASS(USBTutorialCharacterSetting, USBZDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBTutorialCharacterSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBTutorialCharacterSetting(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBTutorialCharacterSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBTutorialCharacterSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBTutorialCharacterSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBTutorialCharacterSetting(USBTutorialCharacterSetting&&); \
	NO_API USBTutorialCharacterSetting(const USBTutorialCharacterSetting&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBTutorialCharacterSetting(USBTutorialCharacterSetting&&); \
	NO_API USBTutorialCharacterSetting(const USBTutorialCharacterSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBTutorialCharacterSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBTutorialCharacterSetting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBTutorialCharacterSetting)


#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBTutorialCharacterSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBTutorialCharacterSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
