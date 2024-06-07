// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsItemInfo;
struct FAccelByteModelsPopulatedItemInfo;
struct FAccelByteModelsItemPagingSlicedResult;
struct FAccelByteModelsItemCriteria;
enum class EAccelByteItemListSortBy : uint8;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsItem_generated_h
#error "AccelByteBlueprintsItem.generated.h already included, missing '#pragma once' in AccelByteBlueprintsItem.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsItem_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_19_DELEGATE \
struct AccelByteBlueprintsItem_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsItem_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_18_DELEGATE \
struct AccelByteBlueprintsItem_eventGetItemByAppIdSuccess_Parms \
{ \
	FAccelByteModelsItemInfo Result; \
}; \
static inline void FGetItemByAppIdSuccess_DelegateWrapper(const FScriptDelegate& GetItemByAppIdSuccess, FAccelByteModelsItemInfo const& Result) \
{ \
	AccelByteBlueprintsItem_eventGetItemByAppIdSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetItemByAppIdSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_17_DELEGATE \
struct AccelByteBlueprintsItem_eventGetItemByIdSuccess_Parms \
{ \
	FAccelByteModelsPopulatedItemInfo Result; \
}; \
static inline void FGetItemByIdSuccess_DelegateWrapper(const FScriptDelegate& GetItemByIdSuccess, FAccelByteModelsPopulatedItemInfo const& Result) \
{ \
	AccelByteBlueprintsItem_eventGetItemByIdSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetItemByIdSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_16_DELEGATE \
struct AccelByteBlueprintsItem_eventGetItemsByCriteriaSuccess_Parms \
{ \
	FAccelByteModelsItemPagingSlicedResult Result; \
}; \
static inline void FGetItemsByCriteriaSuccess_DelegateWrapper(const FScriptDelegate& GetItemsByCriteriaSuccess, FAccelByteModelsItemPagingSlicedResult const& Result) \
{ \
	AccelByteBlueprintsItem_eventGetItemsByCriteriaSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetItemsByCriteriaSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_15_DELEGATE \
struct AccelByteBlueprintsItem_eventSearchItemSuccess_Parms \
{ \
	FAccelByteModelsItemPagingSlicedResult Result; \
}; \
static inline void FSearchItemSuccess_DelegateWrapper(const FScriptDelegate& SearchItemSuccess, FAccelByteModelsItemPagingSlicedResult const& Result) \
{ \
	AccelByteBlueprintsItem_eventSearchItemSuccess_Parms Parms; \
	Parms.Result=Result; \
	SearchItemSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemByAppId); \
	DECLARE_FUNCTION(execGetItemById); \
	DECLARE_FUNCTION(execGetItemsByCriteria); \
	DECLARE_FUNCTION(execSearchItem);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemByAppId); \
	DECLARE_FUNCTION(execGetItemById); \
	DECLARE_FUNCTION(execGetItemsByCriteria); \
	DECLARE_FUNCTION(execSearchItem);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsItem(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsItem_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsItem, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsItem)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsItem(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsItem_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsItem, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsItem)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsItem(UAccelByteBlueprintsItem&&); \
	NO_API UAccelByteBlueprintsItem(const UAccelByteBlueprintsItem&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsItem(UAccelByteBlueprintsItem&&); \
	NO_API UAccelByteBlueprintsItem(const UAccelByteBlueprintsItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsItem)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_11_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
