// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteRewardListSortBy : uint8;
#ifdef ACCELBYTEUE4SDK_ABReward_generated_h
#error "ABReward.generated.h already included, missing '#pragma once' in ABReward.h"
#endif
#define ACCELBYTEUE4SDK_ABReward_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRewardByRewardCode); \
	DECLARE_FUNCTION(execGetRewardByRewardId); \
	DECLARE_FUNCTION(execQueryRewards);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRewardByRewardCode); \
	DECLARE_FUNCTION(execGetRewardByRewardId); \
	DECLARE_FUNCTION(execQueryRewards);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABReward(); \
	friend struct Z_Construct_UClass_UABReward_Statics; \
public: \
	DECLARE_CLASS(UABReward, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABReward)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUABReward(); \
	friend struct Z_Construct_UClass_UABReward_Statics; \
public: \
	DECLARE_CLASS(UABReward, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABReward)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABReward(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABReward) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABReward); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABReward(UABReward&&); \
	NO_API UABReward(const UABReward&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABReward(UABReward&&); \
	NO_API UABReward(const UABReward&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABReward); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABReward)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_10_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABReward>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABReward_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
