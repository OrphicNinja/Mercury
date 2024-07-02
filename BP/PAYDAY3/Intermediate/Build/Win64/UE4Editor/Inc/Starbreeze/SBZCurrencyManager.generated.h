// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerState;
enum class ESBZCurrencyCode : uint8;
class UObject;
class USBZCurrencyManager;
#ifdef STARBREEZE_SBZCurrencyManager_generated_h
#error "SBZCurrencyManager.generated.h already included, missing '#pragma once' in SBZCurrencyManager.h"
#endif
#define STARBREEZE_SBZCurrencyManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execCanAfford); \
	DECLARE_FUNCTION(execGetCurrencyManager); \
	DECLARE_FUNCTION(execGetCurrentAmount); \
	DECLARE_FUNCTION(execSetCurrency); \
	DECLARE_FUNCTION(execSubtractCurrency);


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execCanAfford); \
	DECLARE_FUNCTION(execGetCurrencyManager); \
	DECLARE_FUNCTION(execGetCurrentAmount); \
	DECLARE_FUNCTION(execSetCurrency); \
	DECLARE_FUNCTION(execSubtractCurrency);


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCurrencyManager(); \
	friend struct Z_Construct_UClass_USBZCurrencyManager_Statics; \
public: \
	DECLARE_CLASS(USBZCurrencyManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCurrencyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCurrencyManager(); \
	friend struct Z_Construct_UClass_USBZCurrencyManager_Statics; \
public: \
	DECLARE_CLASS(USBZCurrencyManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCurrencyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCurrencyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCurrencyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCurrencyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCurrencyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCurrencyManager(USBZCurrencyManager&&); \
	NO_API USBZCurrencyManager(const USBZCurrencyManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCurrencyManager(USBZCurrencyManager&&); \
	NO_API USBZCurrencyManager(const USBZCurrencyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCurrencyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCurrencyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCurrencyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCurrencyBalance() { return STRUCT_OFFSET(USBZCurrencyManager, PlayerCurrencyBalance); } \
	FORCEINLINE static uint32 __PPO__GetCurrencyRequestQueue() { return STRUCT_OFFSET(USBZCurrencyManager, GetCurrencyRequestQueue); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCurrencyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCurrencyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
