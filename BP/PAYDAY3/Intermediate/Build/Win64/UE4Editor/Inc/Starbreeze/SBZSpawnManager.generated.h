// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZSpawnManager;
class APawn;
#ifdef STARBREEZE_SBZSpawnManager_generated_h
#error "SBZSpawnManager.generated.h already included, missing '#pragma once' in SBZSpawnManager.h"
#endif
#define STARBREEZE_SBZSpawnManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnPawnLifetimeChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnPawnLifetimeChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSpawnManager(); \
	friend struct Z_Construct_UClass_USBZSpawnManager_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSpawnManager(); \
	friend struct Z_Construct_UClass_USBZSpawnManager_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnManager(USBZSpawnManager&&); \
	NO_API USBZSpawnManager(const USBZSpawnManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnManager(USBZSpawnManager&&); \
	NO_API USBZSpawnManager(const USBZSpawnManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSpawnManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnPlatformSpawnSettings() { return STRUCT_OFFSET(USBZSpawnManager, PawnPlatformSpawnSettings); } \
	FORCEINLINE static uint32 __PPO__SpawnedPawnSet() { return STRUCT_OFFSET(USBZSpawnManager, SpawnedPawnSet); } \
	FORCEINLINE static uint32 __PPO__PendingDestroyedPawnArray() { return STRUCT_OFFSET(USBZSpawnManager, PendingDestroyedPawnArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSpawnManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
