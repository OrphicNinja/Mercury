// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZInfamyManager;
#ifdef STARBREEZE_SBZInfamyManager_generated_h
#error "SBZInfamyManager.generated.h already included, missing '#pragma once' in SBZInfamyManager.h"
#endif
#define STARBREEZE_SBZInfamyManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClientGetCurrentExperience); \
	DECLARE_FUNCTION(execClientGetCurrentLevel); \
	DECLARE_FUNCTION(execClientGetCurrentRenownLevel); \
	DECLARE_FUNCTION(execClientGetPreMatchExperience); \
	DECLARE_FUNCTION(execClientGetPreviousExperience); \
	DECLARE_FUNCTION(execClientGetProgressInfo); \
	DECLARE_FUNCTION(execGetExperienceForLevel); \
	DECLARE_FUNCTION(execGetInfamyManager); \
	DECLARE_FUNCTION(execGetLevelForExperience); \
	DECLARE_FUNCTION(execGetMaxLevel); \
	DECLARE_FUNCTION(execHandleOnStateMachineStateEntered);


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientGetCurrentExperience); \
	DECLARE_FUNCTION(execClientGetCurrentLevel); \
	DECLARE_FUNCTION(execClientGetCurrentRenownLevel); \
	DECLARE_FUNCTION(execClientGetPreMatchExperience); \
	DECLARE_FUNCTION(execClientGetPreviousExperience); \
	DECLARE_FUNCTION(execClientGetProgressInfo); \
	DECLARE_FUNCTION(execGetExperienceForLevel); \
	DECLARE_FUNCTION(execGetInfamyManager); \
	DECLARE_FUNCTION(execGetLevelForExperience); \
	DECLARE_FUNCTION(execGetMaxLevel); \
	DECLARE_FUNCTION(execHandleOnStateMachineStateEntered);


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInfamyManager(); \
	friend struct Z_Construct_UClass_USBZInfamyManager_Statics; \
public: \
	DECLARE_CLASS(USBZInfamyManager, USBZPlayerStatisticsManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInfamyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInfamyManager(); \
	friend struct Z_Construct_UClass_USBZInfamyManager_Statics; \
public: \
	DECLARE_CLASS(USBZInfamyManager, USBZPlayerStatisticsManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInfamyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInfamyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInfamyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInfamyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInfamyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInfamyManager(USBZInfamyManager&&); \
	NO_API USBZInfamyManager(const USBZInfamyManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInfamyManager(USBZInfamyManager&&); \
	NO_API USBZInfamyManager(const USBZInfamyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInfamyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInfamyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInfamyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInfamyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInfamyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
