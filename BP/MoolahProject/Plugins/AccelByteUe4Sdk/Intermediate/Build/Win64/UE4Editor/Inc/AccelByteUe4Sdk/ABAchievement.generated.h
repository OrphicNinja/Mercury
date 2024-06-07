// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteAchievementListSortBy : uint8;
enum class EAccelByteGlobalAchievementContributorsSortBy : uint8;
enum class EAccelByteGlobalAchievementStatus : uint8;
enum class EAccelByteGlobalAchievementListSortBy : uint8;
#ifdef ACCELBYTEUE4SDK_ABAchievement_generated_h
#error "ABAchievement.generated.h already included, missing '#pragma once' in ABAchievement.h"
#endif
#define ACCELBYTEUE4SDK_ABAchievement_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_RPC_WRAPPERS \
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


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABAchievement(); \
	friend struct Z_Construct_UClass_UABAchievement_Statics; \
public: \
	DECLARE_CLASS(UABAchievement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABAchievement)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUABAchievement(); \
	friend struct Z_Construct_UClass_UABAchievement_Statics; \
public: \
	DECLARE_CLASS(UABAchievement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABAchievement)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABAchievement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABAchievement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABAchievement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABAchievement(UABAchievement&&); \
	NO_API UABAchievement(const UABAchievement&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABAchievement(UABAchievement&&); \
	NO_API UABAchievement(const UABAchievement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABAchievement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABAchievement)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_19_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABAchievement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABAchievement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
