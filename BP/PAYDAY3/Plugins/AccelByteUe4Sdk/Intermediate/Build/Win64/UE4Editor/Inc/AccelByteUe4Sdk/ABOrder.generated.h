// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsOrderCreate;
#ifdef ACCELBYTEUE4SDK_ABOrder_generated_h
#error "ABOrder.generated.h already included, missing '#pragma once' in ABOrder.h"
#endif
#define ACCELBYTEUE4SDK_ABOrder_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execCreateNewOrder); \
	DECLARE_FUNCTION(execGetUserOrder); \
	DECLARE_FUNCTION(execGetUserOrderHistory); \
	DECLARE_FUNCTION(execGetUserOrders);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execCreateNewOrder); \
	DECLARE_FUNCTION(execGetUserOrder); \
	DECLARE_FUNCTION(execGetUserOrderHistory); \
	DECLARE_FUNCTION(execGetUserOrders);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABOrder(); \
	friend struct Z_Construct_UClass_UABOrder_Statics; \
public: \
	DECLARE_CLASS(UABOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABOrder)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUABOrder(); \
	friend struct Z_Construct_UClass_UABOrder_Statics; \
public: \
	DECLARE_CLASS(UABOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABOrder)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABOrder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABOrder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABOrder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABOrder(UABOrder&&); \
	NO_API UABOrder(const UABOrder&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABOrder(UABOrder&&); \
	NO_API UABOrder(const UABOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABOrder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABOrder)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_11_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
