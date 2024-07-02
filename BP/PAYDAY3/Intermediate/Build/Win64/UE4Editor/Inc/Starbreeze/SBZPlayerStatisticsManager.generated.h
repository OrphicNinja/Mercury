// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;
struct FSBZLevelTimesStruct;
class UObject;
class USBZPlayerStatisticsManager;
#ifdef STARBREEZE_SBZPlayerStatisticsManager_generated_h
#error "SBZPlayerStatisticsManager.generated.h already included, missing '#pragma once' in SBZPlayerStatisticsManager.h"
#endif
#define STARBREEZE_SBZPlayerStatisticsManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeistBestTimes); \
	DECLARE_FUNCTION(execGetPlayerStatisticsManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeistBestTimes); \
	DECLARE_FUNCTION(execGetPlayerStatisticsManager);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerStatisticsManager(); \
	friend struct Z_Construct_UClass_USBZPlayerStatisticsManager_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerStatisticsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerStatisticsManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZPlayerStatisticsManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerStatisticsManager(); \
	friend struct Z_Construct_UClass_USBZPlayerStatisticsManager_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerStatisticsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerStatisticsManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZPlayerStatisticsManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerStatisticsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerStatisticsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerStatisticsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerStatisticsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerStatisticsManager(USBZPlayerStatisticsManager&&); \
	NO_API USBZPlayerStatisticsManager(const USBZPlayerStatisticsManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerStatisticsManager(USBZPlayerStatisticsManager&&); \
	NO_API USBZPlayerStatisticsManager(const USBZPlayerStatisticsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerStatisticsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerStatisticsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPlayerStatisticsManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerStatisticsData() { return STRUCT_OFFSET(USBZPlayerStatisticsManager, PlayerStatisticsData); } \
	FORCEINLINE static uint32 __PPO__ServerPlayerStatisticsData() { return STRUCT_OFFSET(USBZPlayerStatisticsManager, ServerPlayerStatisticsData); } \
	FORCEINLINE static uint32 __PPO__ServerStatBatcher() { return STRUCT_OFFSET(USBZPlayerStatisticsManager, ServerStatBatcher); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerStatisticsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerStatisticsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
