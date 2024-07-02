// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZGameplayManager;
class UWorld;
#ifdef STARBREEZE_SBZGameplayManager_generated_h
#error "SBZGameplayManager.generated.h already included, missing '#pragma once' in SBZGameplayManager.h"
#endif
#define STARBREEZE_SBZGameplayManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnActionPhaseExited); \
	DECLARE_FUNCTION(execOnActionPhaseStarted); \
	DECLARE_FUNCTION(execOnBlackScreenStarted); \
	DECLARE_FUNCTION(execOnOutroSequenceStarted); \
	DECLARE_FUNCTION(execOnPlayableLevelInitialized); \
	DECLARE_FUNCTION(execOnRestartLevelStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execOnActionPhaseExited); \
	DECLARE_FUNCTION(execOnActionPhaseStarted); \
	DECLARE_FUNCTION(execOnBlackScreenStarted); \
	DECLARE_FUNCTION(execOnOutroSequenceStarted); \
	DECLARE_FUNCTION(execOnPlayableLevelInitialized); \
	DECLARE_FUNCTION(execOnRestartLevelStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameplayManager(); \
	friend struct Z_Construct_UClass_USBZGameplayManager_Statics; \
public: \
	DECLARE_CLASS(USBZGameplayManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameplayManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameplayManager(); \
	friend struct Z_Construct_UClass_USBZGameplayManager_Statics; \
public: \
	DECLARE_CLASS(USBZGameplayManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameplayManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameplayManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameplayManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameplayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameplayManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameplayManager(USBZGameplayManager&&); \
	NO_API USBZGameplayManager(const USBZGameplayManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameplayManager(USBZGameplayManager&&); \
	NO_API USBZGameplayManager(const USBZGameplayManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameplayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameplayManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameplayManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameplaySystems() { return STRUCT_OFFSET(USBZGameplayManager, GameplaySystems); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameplayManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameplayManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
