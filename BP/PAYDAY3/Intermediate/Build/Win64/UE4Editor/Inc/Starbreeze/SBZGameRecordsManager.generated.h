// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZDifficultyConfiguration;
struct FSBZNewsFeedList;
class UObject;
class USBZGameRecordsManager;
struct FSBZMatchmakingAndHostingData;
struct FSBZMetaEventData;
enum class ESBZMetaEventType : uint8;
struct FSBZTitleData;
#ifdef STARBREEZE_SBZGameRecordsManager_generated_h
#error "SBZGameRecordsManager.generated.h already included, missing '#pragma once' in SBZGameRecordsManager.h"
#endif
#define STARBREEZE_SBZGameRecordsManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCacheDifficultyConfiguration); \
	DECLARE_FUNCTION(execCacheNewsFeed); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetDifficultyConfiguration); \
	DECLARE_FUNCTION(execGetMatchmakingAndHostingData); \
	DECLARE_FUNCTION(execGetMetaEventsData); \
	DECLARE_FUNCTION(execGetMetaEventsDataRunning); \
	DECLARE_FUNCTION(execGetNewsFeed); \
	DECLARE_FUNCTION(execGetTitleData);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCacheDifficultyConfiguration); \
	DECLARE_FUNCTION(execCacheNewsFeed); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetDifficultyConfiguration); \
	DECLARE_FUNCTION(execGetMatchmakingAndHostingData); \
	DECLARE_FUNCTION(execGetMetaEventsData); \
	DECLARE_FUNCTION(execGetMetaEventsDataRunning); \
	DECLARE_FUNCTION(execGetNewsFeed); \
	DECLARE_FUNCTION(execGetTitleData);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameRecordsManager(); \
	friend struct Z_Construct_UClass_USBZGameRecordsManager_Statics; \
public: \
	DECLARE_CLASS(USBZGameRecordsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameRecordsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameRecordsManager(); \
	friend struct Z_Construct_UClass_USBZGameRecordsManager_Statics; \
public: \
	DECLARE_CLASS(USBZGameRecordsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameRecordsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameRecordsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameRecordsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameRecordsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameRecordsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameRecordsManager(USBZGameRecordsManager&&); \
	NO_API USBZGameRecordsManager(const USBZGameRecordsManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameRecordsManager(USBZGameRecordsManager&&); \
	NO_API USBZGameRecordsManager(const USBZGameRecordsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameRecordsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameRecordsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameRecordsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameRecordsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameRecordsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
