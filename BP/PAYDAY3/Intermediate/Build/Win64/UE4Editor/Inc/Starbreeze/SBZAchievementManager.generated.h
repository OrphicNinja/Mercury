// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZAchievementManager;
struct FSBZChallengeData;
#ifdef STARBREEZE_SBZAchievementManager_generated_h
#error "SBZAchievementManager.generated.h already included, missing '#pragma once' in SBZAchievementManager.h"
#endif
#define STARBREEZE_SBZAchievementManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompleteAchievement); \
	DECLARE_FUNCTION(execCompleteAchievements); \
	DECLARE_FUNCTION(execGetAchievementManager); \
	DECLARE_FUNCTION(execHandlePlatformUserChanged); \
	DECLARE_FUNCTION(execOnChallengeCompleted); \
	DECLARE_FUNCTION(execOnInitializedChallengeRecordsCacheDone);


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompleteAchievement); \
	DECLARE_FUNCTION(execCompleteAchievements); \
	DECLARE_FUNCTION(execGetAchievementManager); \
	DECLARE_FUNCTION(execHandlePlatformUserChanged); \
	DECLARE_FUNCTION(execOnChallengeCompleted); \
	DECLARE_FUNCTION(execOnInitializedChallengeRecordsCacheDone);


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAchievementManager(); \
	friend struct Z_Construct_UClass_USBZAchievementManager_Statics; \
public: \
	DECLARE_CLASS(USBZAchievementManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAchievementManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAchievementManager(); \
	friend struct Z_Construct_UClass_USBZAchievementManager_Statics; \
public: \
	DECLARE_CLASS(USBZAchievementManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAchievementManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAchievementManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAchievementManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAchievementManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAchievementManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAchievementManager(USBZAchievementManager&&); \
	NO_API USBZAchievementManager(const USBZAchievementManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAchievementManager(USBZAchievementManager&&); \
	NO_API USBZAchievementManager(const USBZAchievementManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAchievementManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAchievementManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAchievementManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAchievementManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAchievementManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
