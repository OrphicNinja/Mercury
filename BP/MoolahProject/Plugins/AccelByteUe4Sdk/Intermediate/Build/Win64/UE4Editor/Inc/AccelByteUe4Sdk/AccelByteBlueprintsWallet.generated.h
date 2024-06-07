// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsWalletInfo;
struct FAccelByteModelsWalletInfoResponse;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsWallet_generated_h
#error "AccelByteBlueprintsWallet.generated.h already included, missing '#pragma once' in AccelByteBlueprintsWallet.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsWallet_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_14_DELEGATE \
struct AccelByteBlueprintsWallet_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsWallet_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_13_DELEGATE \
struct AccelByteBlueprintsWallet_eventGetWalletByCurrencyCodeSuccess_Parms \
{ \
	FAccelByteModelsWalletInfo Result; \
}; \
static inline void FGetWalletByCurrencyCodeSuccess_DelegateWrapper(const FScriptDelegate& GetWalletByCurrencyCodeSuccess, FAccelByteModelsWalletInfo const& Result) \
{ \
	AccelByteBlueprintsWallet_eventGetWalletByCurrencyCodeSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetWalletByCurrencyCodeSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_12_DELEGATE \
struct AccelByteBlueprintsWallet_eventGetWalletInfoResponseSuccess_Parms \
{ \
	FAccelByteModelsWalletInfoResponse Result; \
}; \
static inline void FGetWalletInfoResponseSuccess_DelegateWrapper(const FScriptDelegate& GetWalletInfoResponseSuccess, FAccelByteModelsWalletInfoResponse const& Result) \
{ \
	AccelByteBlueprintsWallet_eventGetWalletInfoResponseSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetWalletInfoResponseSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWalletInfoByCurrencyCode); \
	DECLARE_FUNCTION(execGetWalletInfoByCurrencyCodeV2);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWalletInfoByCurrencyCode); \
	DECLARE_FUNCTION(execGetWalletInfoByCurrencyCodeV2);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsWallet(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsWallet_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsWallet, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsWallet)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsWallet(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsWallet_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsWallet, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsWallet)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsWallet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsWallet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsWallet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsWallet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsWallet(UAccelByteBlueprintsWallet&&); \
	NO_API UAccelByteBlueprintsWallet(const UAccelByteBlueprintsWallet&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsWallet(UAccelByteBlueprintsWallet&&); \
	NO_API UAccelByteBlueprintsWallet(const UAccelByteBlueprintsWallet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsWallet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsWallet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsWallet)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_8_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsWallet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsWallet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
