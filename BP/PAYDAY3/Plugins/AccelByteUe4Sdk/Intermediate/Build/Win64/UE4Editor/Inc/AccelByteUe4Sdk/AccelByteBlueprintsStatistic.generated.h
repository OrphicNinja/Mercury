// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBulkStatItemOperationResult;
struct FAccelByteModelsUserStatItemPagingSlicedResult;
struct FAccelByteModelsGlobalStatItemValueResponse;
struct FAccelByteModelsBulkStatItemInc;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsStatistic_generated_h
#error "AccelByteBlueprintsStatistic.generated.h already included, missing '#pragma once' in AccelByteBlueprintsStatistic.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsStatistic_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_19_DELEGATE \
struct AccelByteBlueprintsStatistic_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsStatistic_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_18_DELEGATE \
struct AccelByteBlueprintsStatistic_eventBulkAddUserStatItemValueSuccess_Parms \
{ \
	TArray<FAccelByteModelsBulkStatItemOperationResult> Result; \
}; \
static inline void FBulkAddUserStatItemValueSuccess_DelegateWrapper(const FScriptDelegate& BulkAddUserStatItemValueSuccess, TArray<FAccelByteModelsBulkStatItemOperationResult> const& Result) \
{ \
	AccelByteBlueprintsStatistic_eventBulkAddUserStatItemValueSuccess_Parms Parms; \
	Parms.Result=Result; \
	BulkAddUserStatItemValueSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_17_DELEGATE \
struct AccelByteBlueprintsStatistic_eventCreateUserStatItemsSuccess_Parms \
{ \
	TArray<FAccelByteModelsBulkStatItemOperationResult> Result; \
}; \
static inline void FCreateUserStatItemsSuccess_DelegateWrapper(const FScriptDelegate& CreateUserStatItemsSuccess, TArray<FAccelByteModelsBulkStatItemOperationResult> const& Result) \
{ \
	AccelByteBlueprintsStatistic_eventCreateUserStatItemsSuccess_Parms Parms; \
	Parms.Result=Result; \
	CreateUserStatItemsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_16_DELEGATE \
struct AccelByteBlueprintsStatistic_eventGetAllUserStatItemsSuccess_Parms \
{ \
	FAccelByteModelsUserStatItemPagingSlicedResult Result; \
}; \
static inline void FGetAllUserStatItemsSuccess_DelegateWrapper(const FScriptDelegate& GetAllUserStatItemsSuccess, FAccelByteModelsUserStatItemPagingSlicedResult const& Result) \
{ \
	AccelByteBlueprintsStatistic_eventGetAllUserStatItemsSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetAllUserStatItemsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_15_DELEGATE \
struct AccelByteBlueprintsStatistic_eventGetUserStatItemsSuccess_Parms \
{ \
	FAccelByteModelsUserStatItemPagingSlicedResult Result; \
}; \
static inline void FGetUserStatItemsSuccess_DelegateWrapper(const FScriptDelegate& GetUserStatItemsSuccess, FAccelByteModelsUserStatItemPagingSlicedResult const& Result) \
{ \
	AccelByteBlueprintsStatistic_eventGetUserStatItemsSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetUserStatItemsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_14_DELEGATE \
struct AccelByteBlueprintsStatistic_eventGlobalStatItemDelegate_Parms \
{ \
	FAccelByteModelsGlobalStatItemValueResponse Result; \
}; \
static inline void FGlobalStatItemDelegate_DelegateWrapper(const FScriptDelegate& GlobalStatItemDelegate, FAccelByteModelsGlobalStatItemValueResponse const& Result) \
{ \
	AccelByteBlueprintsStatistic_eventGlobalStatItemDelegate_Parms Parms; \
	Parms.Result=Result; \
	GlobalStatItemDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateUserStatItems); \
	DECLARE_FUNCTION(execGetAllUserStatItems); \
	DECLARE_FUNCTION(execGetGlobalStatItemsByStatCode); \
	DECLARE_FUNCTION(execGetUserStatItems); \
	DECLARE_FUNCTION(execIncrementUserStatItems);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateUserStatItems); \
	DECLARE_FUNCTION(execGetAllUserStatItems); \
	DECLARE_FUNCTION(execGetGlobalStatItemsByStatCode); \
	DECLARE_FUNCTION(execGetUserStatItems); \
	DECLARE_FUNCTION(execIncrementUserStatItems);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsStatistic(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsStatistic_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsStatistic, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsStatistic)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsStatistic(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsStatistic_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsStatistic, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsStatistic)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsStatistic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsStatistic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsStatistic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsStatistic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsStatistic(UAccelByteBlueprintsStatistic&&); \
	NO_API UAccelByteBlueprintsStatistic(const UAccelByteBlueprintsStatistic&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsStatistic(UAccelByteBlueprintsStatistic&&); \
	NO_API UAccelByteBlueprintsStatistic(const UAccelByteBlueprintsStatistic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsStatistic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsStatistic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsStatistic)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_10_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsStatistic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsStatistic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
