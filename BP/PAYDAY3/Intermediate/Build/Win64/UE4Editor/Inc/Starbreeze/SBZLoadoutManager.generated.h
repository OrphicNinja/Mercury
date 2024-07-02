// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZLoadoutManager;
struct FSBZPlayerLoadoutConfig;
enum class ESBZMetaRequestResult : uint8;
#ifdef STARBREEZE_SBZLoadoutManager_generated_h
#error "SBZLoadoutManager.generated.h already included, missing '#pragma once' in SBZLoadoutManager.h"
#endif
#define STARBREEZE_SBZLoadoutManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveLoadoutIndex); \
	DECLARE_FUNCTION(execGetLoadoutManager); \
	DECLARE_FUNCTION(execGetLoadoutName); \
	DECLARE_FUNCTION(execGetPlayerLoadouts); \
	DECLARE_FUNCTION(execSendLoadoutName); \
	DECLARE_FUNCTION(execSetActiveLoadoutIndex); \
	DECLARE_FUNCTION(execSetLoadoutAtIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveLoadoutIndex); \
	DECLARE_FUNCTION(execGetLoadoutManager); \
	DECLARE_FUNCTION(execGetLoadoutName); \
	DECLARE_FUNCTION(execGetPlayerLoadouts); \
	DECLARE_FUNCTION(execSendLoadoutName); \
	DECLARE_FUNCTION(execSetActiveLoadoutIndex); \
	DECLARE_FUNCTION(execSetLoadoutAtIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLoadoutManager(); \
	friend struct Z_Construct_UClass_USBZLoadoutManager_Statics; \
public: \
	DECLARE_CLASS(USBZLoadoutManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoadoutManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLoadoutManager(); \
	friend struct Z_Construct_UClass_USBZLoadoutManager_Statics; \
public: \
	DECLARE_CLASS(USBZLoadoutManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoadoutManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLoadoutManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLoadoutManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoadoutManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoadoutManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoadoutManager(USBZLoadoutManager&&); \
	NO_API USBZLoadoutManager(const USBZLoadoutManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoadoutManager(USBZLoadoutManager&&); \
	NO_API USBZLoadoutManager(const USBZLoadoutManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoadoutManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoadoutManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLoadoutManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLoadoutManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLoadoutManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
