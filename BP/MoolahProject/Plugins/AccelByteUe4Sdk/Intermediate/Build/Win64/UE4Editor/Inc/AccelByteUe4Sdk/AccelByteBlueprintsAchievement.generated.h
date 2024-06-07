// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMultiLanguageAchievement;
struct FAccelByteModelsPaginatedPublicTag;
struct FAccelByteModelsPaginatedPublicAchievement;
struct FAccelByteModelsPaginatedGlobalAchievementContributors;
struct FAccelByteModelsPaginatedGlobalAchievementUserContributed;
struct FAccelByteModelsPaginatedUserAchievement;
struct FAccelByteModelsPaginatedUserGlobalAchievement;
enum class EAccelByteAchievementListSortBy : uint8;
enum class EAccelByteGlobalAchievementContributorsSortBy : uint8;
enum class EAccelByteGlobalAchievementStatus : uint8;
enum class EAccelByteGlobalAchievementListSortBy : uint8;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsAchievement_generated_h
#error "AccelByteBlueprintsAchievement.generated.h already included, missing '#pragma once' in AccelByteBlueprintsAchievement.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsAchievement_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_29_DELEGATE \
struct AccelByteBlueprintsAchievement_eventGetAchievementSuccess_Parms \
{ \
	FAccelByteModelsMultiLanguageAchievement Result; \
}; \
static inline void FGetAchievementSuccess_DelegateWrapper(const FScriptDelegate& GetAchievementSuccess, FAccelByteModelsMultiLanguageAchievement const& Result) \
{ \
	AccelByteBlueprintsAchievement_eventGetAchievementSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetAchievementSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_28_DELEGATE \
struct AccelByteBlueprintsAchievement_eventGetTagSuccess_Parms \
{ \
	FAccelByteModelsPaginatedPublicTag Result; \
}; \
static inline void FGetTagSuccess_DelegateWrapper(const FScriptDelegate& GetTagSuccess, FAccelByteModelsPaginatedPublicTag const& Result) \
{ \
	AccelByteBlueprintsAchievement_eventGetTagSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetTagSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_27_DELEGATE \
struct AccelByteBlueprintsAchievement_eventQueryAchievementsSuccess_Parms \
{ \
	FAccelByteModelsPaginatedPublicAchievement Result; \
}; \
static inline void FQueryAchievementsSuccess_DelegateWrapper(const FScriptDelegate& QueryAchievementsSuccess, FAccelByteModelsPaginatedPublicAchievement const& Result) \
{ \
	AccelByteBlueprintsAchievement_eventQueryAchievementsSuccess_Parms Parms; \
	Parms.Result=Result; \
	QueryAchievementsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_26_DELEGATE \
struct AccelByteBlueprintsAchievement_eventQueryGlobalAchievementContributorsSuccess_Parms \
{ \
	FAccelByteModelsPaginatedGlobalAchievementContributors Result; \
}; \
static inline void FQueryGlobalAchievementContributorsSuccess_DelegateWrapper(const FScriptDelegate& QueryGlobalAchievementContributorsSuccess, FAccelByteModelsPaginatedGlobalAchievementContributors Result) \
{ \
	AccelByteBlueprintsAchievement_eventQueryGlobalAchievementContributorsSuccess_Parms Parms; \
	Parms.Result=Result; \
	QueryGlobalAchievementContributorsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_25_DELEGATE \
struct AccelByteBlueprintsAchievement_eventQueryGlobalAchievementUserContributedSuccess_Parms \
{ \
	FAccelByteModelsPaginatedGlobalAchievementUserContributed Result; \
}; \
static inline void FQueryGlobalAchievementUserContributedSuccess_DelegateWrapper(const FScriptDelegate& QueryGlobalAchievementUserContributedSuccess, FAccelByteModelsPaginatedGlobalAchievementUserContributed Result) \
{ \
	AccelByteBlueprintsAchievement_eventQueryGlobalAchievementUserContributedSuccess_Parms Parms; \
	Parms.Result=Result; \
	QueryGlobalAchievementUserContributedSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_24_DELEGATE \
struct AccelByteBlueprintsAchievement_eventQueryUserAchievementsSuccess_Parms \
{ \
	FAccelByteModelsPaginatedUserAchievement Result; \
}; \
static inline void FQueryUserAchievementsSuccess_DelegateWrapper(const FScriptDelegate& QueryUserAchievementsSuccess, FAccelByteModelsPaginatedUserAchievement const& Result) \
{ \
	AccelByteBlueprintsAchievement_eventQueryUserAchievementsSuccess_Parms Parms; \
	Parms.Result=Result; \
	QueryUserAchievementsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_23_DELEGATE \
struct AccelByteBlueprintsAchievement_eventQueryUserGlobalAchievementsSuccess_Parms \
{ \
	FAccelByteModelsPaginatedUserGlobalAchievement Result; \
}; \
static inline void FQueryUserGlobalAchievementsSuccess_DelegateWrapper(const FScriptDelegate& QueryUserGlobalAchievementsSuccess, FAccelByteModelsPaginatedUserGlobalAchievement Result) \
{ \
	AccelByteBlueprintsAchievement_eventQueryUserGlobalAchievementsSuccess_Parms Parms; \
	Parms.Result=Result; \
	QueryUserGlobalAchievementsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClaimGlobalAchievements); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execQueryAchievements); \
	DECLARE_FUNCTION(execQueryGlobalAchievementContributors); \
	DECLARE_FUNCTION(execQueryGlobalAchievements); \
	DECLARE_FUNCTION(execQueryGlobalAchievementUserContributed); \
	DECLARE_FUNCTION(execQueryUserAchievements); \
	DECLARE_FUNCTION(execUnlockAchievement);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClaimGlobalAchievements); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execQueryAchievements); \
	DECLARE_FUNCTION(execQueryGlobalAchievementContributors); \
	DECLARE_FUNCTION(execQueryGlobalAchievements); \
	DECLARE_FUNCTION(execQueryGlobalAchievementUserContributed); \
	DECLARE_FUNCTION(execQueryUserAchievements); \
	DECLARE_FUNCTION(execUnlockAchievement);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsAchievement(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsAchievement_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsAchievement, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsAchievement)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsAchievement(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsAchievement_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsAchievement, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsAchievement)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsAchievement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsAchievement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsAchievement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsAchievement(UAccelByteBlueprintsAchievement&&); \
	NO_API UAccelByteBlueprintsAchievement(const UAccelByteBlueprintsAchievement&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsAchievement(UAccelByteBlueprintsAchievement&&); \
	NO_API UAccelByteBlueprintsAchievement(const UAccelByteBlueprintsAchievement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsAchievement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsAchievement)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_19_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsAchievement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsAchievement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
