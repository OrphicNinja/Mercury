// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRewardInfo;
struct FAccelByteModelsQueryReward;
enum class EAccelByteRewardListSortBy : uint8;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsReward_generated_h
#error "AccelByteBlueprintsReward.generated.h already included, missing '#pragma once' in AccelByteBlueprintsReward.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsReward_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_16_DELEGATE \
struct AccelByteBlueprintsReward_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsReward_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_15_DELEGATE \
struct AccelByteBlueprintsReward_eventGetRewardByRewardCodeSuccess_Parms \
{ \
	FAccelByteModelsRewardInfo Result; \
}; \
static inline void FGetRewardByRewardCodeSuccess_DelegateWrapper(const FScriptDelegate& GetRewardByRewardCodeSuccess, FAccelByteModelsRewardInfo const& Result) \
{ \
	AccelByteBlueprintsReward_eventGetRewardByRewardCodeSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetRewardByRewardCodeSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_14_DELEGATE \
struct AccelByteBlueprintsReward_eventGetRewardByRewardIdSuccess_Parms \
{ \
	FAccelByteModelsRewardInfo Result; \
}; \
static inline void FGetRewardByRewardIdSuccess_DelegateWrapper(const FScriptDelegate& GetRewardByRewardIdSuccess, FAccelByteModelsRewardInfo const& Result) \
{ \
	AccelByteBlueprintsReward_eventGetRewardByRewardIdSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetRewardByRewardIdSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_13_DELEGATE \
struct AccelByteBlueprintsReward_eventQueryRewardsSuccess_Parms \
{ \
	FAccelByteModelsQueryReward Result; \
}; \
static inline void FQueryRewardsSuccess_DelegateWrapper(const FScriptDelegate& QueryRewardsSuccess, FAccelByteModelsQueryReward const& Result) \
{ \
	AccelByteBlueprintsReward_eventQueryRewardsSuccess_Parms Parms; \
	Parms.Result=Result; \
	QueryRewardsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRewardByRewardCode); \
	DECLARE_FUNCTION(execGetRewardByRewardId); \
	DECLARE_FUNCTION(execQueryRewards);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRewardByRewardCode); \
	DECLARE_FUNCTION(execGetRewardByRewardId); \
	DECLARE_FUNCTION(execQueryRewards);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsReward(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsReward_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsReward, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsReward)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsReward(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsReward_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsReward, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsReward)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsReward(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsReward) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsReward); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsReward(UAccelByteBlueprintsReward&&); \
	NO_API UAccelByteBlueprintsReward(const UAccelByteBlueprintsReward&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsReward(UAccelByteBlueprintsReward&&); \
	NO_API UAccelByteBlueprintsReward(const UAccelByteBlueprintsReward&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsReward); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsReward); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsReward)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_9_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsReward>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsReward_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
