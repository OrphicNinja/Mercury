// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
class USBZPreplanningAssetData;
class UObject;
class USBZPreplanningAssetManager;
#ifdef STARBREEZE_SBZPreplanningAssetManager_generated_h
#error "SBZPreplanningAssetManager.generated.h already included, missing '#pragma once' in SBZPreplanningAssetManager.h"
#endif
#define STARBREEZE_SBZPreplanningAssetManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConsumeUserEntitlementError); \
	DECLARE_FUNCTION(execConsumeUserEntitlementSuccess); \
	DECLARE_FUNCTION(execGetAssetBySku); \
	DECLARE_FUNCTION(execGetPreplanningAssetManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConsumeUserEntitlementError); \
	DECLARE_FUNCTION(execConsumeUserEntitlementSuccess); \
	DECLARE_FUNCTION(execGetAssetBySku); \
	DECLARE_FUNCTION(execGetPreplanningAssetManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPreplanningAssetManager(); \
	friend struct Z_Construct_UClass_USBZPreplanningAssetManager_Statics; \
public: \
	DECLARE_CLASS(USBZPreplanningAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPreplanningAssetManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPreplanningAssetManager(); \
	friend struct Z_Construct_UClass_USBZPreplanningAssetManager_Statics; \
public: \
	DECLARE_CLASS(USBZPreplanningAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPreplanningAssetManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPreplanningAssetManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPreplanningAssetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPreplanningAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPreplanningAssetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPreplanningAssetManager(USBZPreplanningAssetManager&&); \
	NO_API USBZPreplanningAssetManager(const USBZPreplanningAssetManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPreplanningAssetManager(USBZPreplanningAssetManager&&); \
	NO_API USBZPreplanningAssetManager(const USBZPreplanningAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPreplanningAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPreplanningAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPreplanningAssetManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPreplanningAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPreplanningAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
