// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STARBREEZE_SBZImpactManager_generated_h
#error "SBZImpactManager.generated.h already included, missing '#pragma once' in SBZImpactManager.h"
#endif
#define STARBREEZE_SBZImpactManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleDroppedDecalComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleDroppedDecalComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZImpactManager(); \
	friend struct Z_Construct_UClass_USBZImpactManager_Statics; \
public: \
	DECLARE_CLASS(USBZImpactManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZImpactManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZImpactManager(); \
	friend struct Z_Construct_UClass_USBZImpactManager_Statics; \
public: \
	DECLARE_CLASS(USBZImpactManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZImpactManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZImpactManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZImpactManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZImpactManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZImpactManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZImpactManager(USBZImpactManager&&); \
	NO_API USBZImpactManager(const USBZImpactManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZImpactManager(USBZImpactManager&&); \
	NO_API USBZImpactManager(const USBZImpactManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZImpactManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZImpactManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZImpactManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileDecals() { return STRUCT_OFFSET(USBZImpactManager, ProjectileDecals); } \
	FORCEINLINE static uint32 __PPO__ProjectileInstancedDecals() { return STRUCT_OFFSET(USBZImpactManager, ProjectileInstancedDecals); } \
	FORCEINLINE static uint32 __PPO__ThrowableProjectileDecals() { return STRUCT_OFFSET(USBZImpactManager, ThrowableProjectileDecals); } \
	FORCEINLINE static uint32 __PPO__ThrowableProjectileInstancedDecals() { return STRUCT_OFFSET(USBZImpactManager, ThrowableProjectileInstancedDecals); } \
	FORCEINLINE static uint32 __PPO__MeleeDecals() { return STRUCT_OFFSET(USBZImpactManager, MeleeDecals); } \
	FORCEINLINE static uint32 __PPO__ExplosionDecals() { return STRUCT_OFFSET(USBZImpactManager, ExplosionDecals); } \
	FORCEINLINE static uint32 __PPO__FootstepDecals() { return STRUCT_OFFSET(USBZImpactManager, FootstepDecals); } \
	FORCEINLINE static uint32 __PPO__SlidingDecals() { return STRUCT_OFFSET(USBZImpactManager, SlidingDecals); } \
	FORCEINLINE static uint32 __PPO__MantlingDecals() { return STRUCT_OFFSET(USBZImpactManager, MantlingDecals); } \
	FORCEINLINE static uint32 __PPO__StepUpDecals() { return STRUCT_OFFSET(USBZImpactManager, StepUpDecals); } \
	FORCEINLINE static uint32 __PPO__ObjectImpactDecals() { return STRUCT_OFFSET(USBZImpactManager, ObjectImpactDecals); } \
	FORCEINLINE static uint32 __PPO__DebrisImpactDecals() { return STRUCT_OFFSET(USBZImpactManager, DebrisImpactDecals); } \
	FORCEINLINE static uint32 __PPO__BagItemImpactDecals() { return STRUCT_OFFSET(USBZImpactManager, BagItemImpactDecals); } \
	FORCEINLINE static uint32 __PPO__ThrowableDecals() { return STRUCT_OFFSET(USBZImpactManager, ThrowableDecals); } \
	FORCEINLINE static uint32 __PPO__BloodSplatterDecals() { return STRUCT_OFFSET(USBZImpactManager, BloodSplatterDecals); } \
	FORCEINLINE static uint32 __PPO__TranslucentPrimitiveComponenets() { return STRUCT_OFFSET(USBZImpactManager, TranslucentPrimitiveComponenets); }


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZImpactManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZImpactManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
