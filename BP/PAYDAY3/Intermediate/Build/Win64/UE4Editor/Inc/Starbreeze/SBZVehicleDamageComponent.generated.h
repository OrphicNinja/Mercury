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
#ifdef STARBREEZE_SBZVehicleDamageComponent_generated_h
#error "SBZVehicleDamageComponent.generated.h already included, missing '#pragma once' in SBZVehicleDamageComponent.h"
#endif
#define STARBREEZE_SBZVehicleDamageComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVehicleDamageComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleDamageComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleDamageComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVehicleDamageComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleDamageComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleDamageComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleDamageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleDamageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleDamageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleDamageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleDamageComponent(USBZVehicleDamageComponent&&); \
	NO_API USBZVehicleDamageComponent(const USBZVehicleDamageComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleDamageComponent(USBZVehicleDamageComponent&&); \
	NO_API USBZVehicleDamageComponent(const USBZVehicleDamageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleDamageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleDamageComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleDamageComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageZones() { return STRUCT_OFFSET(USBZVehicleDamageComponent, DamageZones); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleDamageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleDamageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
