// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteStatisticSortBy : uint8;
struct FAccelByteModelsBulkUserStatItemInc;
struct FAccelByteModelsBulkStatItemInc;
#ifdef ACCELBYTEUE4SDK_ABServerStatistic_generated_h
#error "ABServerStatistic.generated.h already included, missing '#pragma once' in ABServerStatistic.h"
#endif
#define ACCELBYTEUE4SDK_ABServerStatistic_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBulkFetchStatItemsValue); \
	DECLARE_FUNCTION(execCreateUserStatItems); \
	DECLARE_FUNCTION(execGetAllUserStatItems); \
	DECLARE_FUNCTION(execGetGlobalStatItemsByStatCode); \
	DECLARE_FUNCTION(execGetUserStatItems); \
	DECLARE_FUNCTION(execIncrementManyUsersStatItems); \
	DECLARE_FUNCTION(execIncrementUserStatItems);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBulkFetchStatItemsValue); \
	DECLARE_FUNCTION(execCreateUserStatItems); \
	DECLARE_FUNCTION(execGetAllUserStatItems); \
	DECLARE_FUNCTION(execGetGlobalStatItemsByStatCode); \
	DECLARE_FUNCTION(execGetUserStatItems); \
	DECLARE_FUNCTION(execIncrementManyUsersStatItems); \
	DECLARE_FUNCTION(execIncrementUserStatItems);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerStatistic(); \
	friend struct Z_Construct_UClass_UABServerStatistic_Statics; \
public: \
	DECLARE_CLASS(UABServerStatistic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerStatistic)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUABServerStatistic(); \
	friend struct Z_Construct_UClass_UABServerStatistic_Statics; \
public: \
	DECLARE_CLASS(UABServerStatistic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerStatistic)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABServerStatistic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABServerStatistic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerStatistic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerStatistic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABServerStatistic(UABServerStatistic&&); \
	NO_API UABServerStatistic(const UABServerStatistic&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABServerStatistic(UABServerStatistic&&); \
	NO_API UABServerStatistic(const UABServerStatistic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerStatistic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerStatistic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerStatistic)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_14_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerStatistic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerStatistic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
