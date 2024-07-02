// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZActorPoolManager;
class UWorld;
class AActor;
#ifdef STARBREEZE_SBZActorPoolManager_generated_h
#error "SBZActorPoolManager.generated.h already included, missing '#pragma once' in SBZActorPoolManager.h"
#endif
#define STARBREEZE_SBZActorPoolManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execInitPool); \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execOnExitedActionPhase); \
	DECLARE_FUNCTION(execReturnActor);


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execInitPool); \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execOnExitedActionPhase); \
	DECLARE_FUNCTION(execReturnActor);


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZActorPoolManager(); \
	friend struct Z_Construct_UClass_USBZActorPoolManager_Statics; \
public: \
	DECLARE_CLASS(USBZActorPoolManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActorPoolManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZActorPoolManager(); \
	friend struct Z_Construct_UClass_USBZActorPoolManager_Statics; \
public: \
	DECLARE_CLASS(USBZActorPoolManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActorPoolManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZActorPoolManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActorPoolManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActorPoolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActorPoolManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActorPoolManager(USBZActorPoolManager&&); \
	NO_API USBZActorPoolManager(const USBZActorPoolManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActorPoolManager(USBZActorPoolManager&&); \
	NO_API USBZActorPoolManager(const USBZActorPoolManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActorPoolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActorPoolManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActorPoolManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pools() { return STRUCT_OFFSET(USBZActorPoolManager, Pools); } \
	FORCEINLINE static uint32 __PPO__ReturnActorTimerHandles() { return STRUCT_OFFSET(USBZActorPoolManager, ReturnActorTimerHandles); }


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZActorPoolManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorPoolManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
