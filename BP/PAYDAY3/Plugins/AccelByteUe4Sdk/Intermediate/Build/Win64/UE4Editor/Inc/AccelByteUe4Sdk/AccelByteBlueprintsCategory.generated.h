// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsCategoryInfo;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsCategory_generated_h
#error "AccelByteBlueprintsCategory.generated.h already included, missing '#pragma once' in AccelByteBlueprintsCategory.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsCategory_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_15_DELEGATE \
struct AccelByteBlueprintsCategory_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsCategory_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_14_DELEGATE \
struct AccelByteBlueprintsCategory_eventGetCategorySuccess_Parms \
{ \
	FAccelByteModelsCategoryInfo Result; \
}; \
static inline void FGetCategorySuccess_DelegateWrapper(const FScriptDelegate& GetCategorySuccess, FAccelByteModelsCategoryInfo const& Result) \
{ \
	AccelByteBlueprintsCategory_eventGetCategorySuccess_Parms Parms; \
	Parms.Result=Result; \
	GetCategorySuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_13_DELEGATE \
struct AccelByteBlueprintsCategory_eventGetChildCategoriesSuccess_Parms \
{ \
	TArray<FAccelByteModelsCategoryInfo> Result; \
}; \
static inline void FGetChildCategoriesSuccess_DelegateWrapper(const FScriptDelegate& GetChildCategoriesSuccess, TArray<FAccelByteModelsCategoryInfo> const& Result) \
{ \
	AccelByteBlueprintsCategory_eventGetChildCategoriesSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetChildCategoriesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_12_DELEGATE \
struct AccelByteBlueprintsCategory_eventGetDescendantCategoriesSuccess_Parms \
{ \
	TArray<FAccelByteModelsCategoryInfo> Result; \
}; \
static inline void FGetDescendantCategoriesSuccess_DelegateWrapper(const FScriptDelegate& GetDescendantCategoriesSuccess, TArray<FAccelByteModelsCategoryInfo> const& Result) \
{ \
	AccelByteBlueprintsCategory_eventGetDescendantCategoriesSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetDescendantCategoriesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_11_DELEGATE \
struct AccelByteBlueprintsCategory_eventGetRootCategoriesSuccess_Parms \
{ \
	TArray<FAccelByteModelsCategoryInfo> Result; \
}; \
static inline void FGetRootCategoriesSuccess_DelegateWrapper(const FScriptDelegate& GetRootCategoriesSuccess, TArray<FAccelByteModelsCategoryInfo> const& Result) \
{ \
	AccelByteBlueprintsCategory_eventGetRootCategoriesSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetRootCategoriesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetChildCategories); \
	DECLARE_FUNCTION(execGetDescendantCategories); \
	DECLARE_FUNCTION(execGetRootCategories);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetChildCategories); \
	DECLARE_FUNCTION(execGetDescendantCategories); \
	DECLARE_FUNCTION(execGetRootCategories);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsCategory(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsCategory_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsCategory)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsCategory(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsCategory_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsCategory)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsCategory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsCategory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsCategory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsCategory(UAccelByteBlueprintsCategory&&); \
	NO_API UAccelByteBlueprintsCategory(const UAccelByteBlueprintsCategory&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsCategory(UAccelByteBlueprintsCategory&&); \
	NO_API UAccelByteBlueprintsCategory(const UAccelByteBlueprintsCategory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsCategory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsCategory)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_7_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsCategory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCategory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
