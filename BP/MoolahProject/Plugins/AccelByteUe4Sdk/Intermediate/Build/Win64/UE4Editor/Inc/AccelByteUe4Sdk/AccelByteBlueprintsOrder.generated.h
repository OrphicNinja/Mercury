// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsOrderInfo;
struct FAccelByteModelsOrderHistoryInfo;
struct FAccelByteModelsPagedOrderInfo;
struct FAccelByteModelsOrderCreate;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsOrder_generated_h
#error "AccelByteBlueprintsOrder.generated.h already included, missing '#pragma once' in AccelByteBlueprintsOrder.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsOrder_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_19_DELEGATE \
struct AccelByteBlueprintsOrder_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsOrder_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_18_DELEGATE \
struct AccelByteBlueprintsOrder_eventCancelOrderSuccess_Parms \
{ \
	FAccelByteModelsOrderInfo Result; \
}; \
static inline void FCancelOrderSuccess_DelegateWrapper(const FScriptDelegate& CancelOrderSuccess, FAccelByteModelsOrderInfo const& Result) \
{ \
	AccelByteBlueprintsOrder_eventCancelOrderSuccess_Parms Parms; \
	Parms.Result=Result; \
	CancelOrderSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_17_DELEGATE \
struct AccelByteBlueprintsOrder_eventCreateNewOrderSuccess_Parms \
{ \
	FAccelByteModelsOrderInfo Result; \
}; \
static inline void FCreateNewOrderSuccess_DelegateWrapper(const FScriptDelegate& CreateNewOrderSuccess, FAccelByteModelsOrderInfo const& Result) \
{ \
	AccelByteBlueprintsOrder_eventCreateNewOrderSuccess_Parms Parms; \
	Parms.Result=Result; \
	CreateNewOrderSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_16_DELEGATE \
struct AccelByteBlueprintsOrder_eventGetUserOrderHistorySuccess_Parms \
{ \
	TArray<FAccelByteModelsOrderHistoryInfo> Result; \
}; \
static inline void FGetUserOrderHistorySuccess_DelegateWrapper(const FScriptDelegate& GetUserOrderHistorySuccess, TArray<FAccelByteModelsOrderHistoryInfo> const& Result) \
{ \
	AccelByteBlueprintsOrder_eventGetUserOrderHistorySuccess_Parms Parms; \
	Parms.Result=Result; \
	GetUserOrderHistorySuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_15_DELEGATE \
struct AccelByteBlueprintsOrder_eventGetUserOrdersSuccess_Parms \
{ \
	FAccelByteModelsPagedOrderInfo Result; \
}; \
static inline void FGetUserOrdersSuccess_DelegateWrapper(const FScriptDelegate& GetUserOrdersSuccess, FAccelByteModelsPagedOrderInfo const& Result) \
{ \
	AccelByteBlueprintsOrder_eventGetUserOrdersSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetUserOrdersSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_14_DELEGATE \
struct AccelByteBlueprintsOrder_eventGetUserOrderSuccess_Parms \
{ \
	FAccelByteModelsOrderInfo Result; \
}; \
static inline void FGetUserOrderSuccess_DelegateWrapper(const FScriptDelegate& GetUserOrderSuccess, FAccelByteModelsOrderInfo const& Result) \
{ \
	AccelByteBlueprintsOrder_eventGetUserOrderSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetUserOrderSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execCreateNewOrder); \
	DECLARE_FUNCTION(execGetUserOrder); \
	DECLARE_FUNCTION(execGetUserOrderHistory); \
	DECLARE_FUNCTION(execGetUserOrders);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execCreateNewOrder); \
	DECLARE_FUNCTION(execGetUserOrder); \
	DECLARE_FUNCTION(execGetUserOrderHistory); \
	DECLARE_FUNCTION(execGetUserOrders);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsOrder(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsOrder_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsOrder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsOrder)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsOrder(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsOrder_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsOrder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsOrder)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsOrder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsOrder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsOrder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsOrder(UAccelByteBlueprintsOrder&&); \
	NO_API UAccelByteBlueprintsOrder(const UAccelByteBlueprintsOrder&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsOrder(UAccelByteBlueprintsOrder&&); \
	NO_API UAccelByteBlueprintsOrder(const UAccelByteBlueprintsOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsOrder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsOrder)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_10_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
