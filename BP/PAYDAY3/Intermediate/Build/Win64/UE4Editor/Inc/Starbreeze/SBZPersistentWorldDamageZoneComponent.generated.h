// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FPointDamageEvent;
class AController;
struct FRadialDamageEvent;
#ifdef STARBREEZE_SBZPersistentWorldDamageZoneComponent_generated_h
#error "SBZPersistentWorldDamageZoneComponent.generated.h already included, missing '#pragma once' in SBZPersistentWorldDamageZoneComponent.h"
#endif
#define STARBREEZE_SBZPersistentWorldDamageZoneComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage);


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage);


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPersistentWorldDamageZoneComponent(); \
	friend struct Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPersistentWorldDamageZoneComponent, USBZEllipsoidComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPersistentWorldDamageZoneComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPersistentWorldDamageZoneComponent(); \
	friend struct Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics; \
public: \
	DECLARE_CLASS(USBZPersistentWorldDamageZoneComponent, USBZEllipsoidComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPersistentWorldDamageZoneComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPersistentWorldDamageZoneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPersistentWorldDamageZoneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPersistentWorldDamageZoneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPersistentWorldDamageZoneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPersistentWorldDamageZoneComponent(USBZPersistentWorldDamageZoneComponent&&); \
	NO_API USBZPersistentWorldDamageZoneComponent(const USBZPersistentWorldDamageZoneComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPersistentWorldDamageZoneComponent(USBZPersistentWorldDamageZoneComponent&&); \
	NO_API USBZPersistentWorldDamageZoneComponent(const USBZPersistentWorldDamageZoneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPersistentWorldDamageZoneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPersistentWorldDamageZoneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPersistentWorldDamageZoneComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InfluencedMeshes() { return STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, InfluencedMeshes); } \
	FORCEINLINE static uint32 __PPO__PreviousRadialDamageCauser() { return STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, PreviousRadialDamageCauser); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, Health); } \
	FORCEINLINE static uint32 __PPO__RadialDamageMultiplier() { return STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, RadialDamageMultiplier); } \
	FORCEINLINE static uint32 __PPO__bAffectOwnerOnly() { return STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, bAffectOwnerOnly); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPersistentWorldDamageZoneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPersistentWorldDamageZoneComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
