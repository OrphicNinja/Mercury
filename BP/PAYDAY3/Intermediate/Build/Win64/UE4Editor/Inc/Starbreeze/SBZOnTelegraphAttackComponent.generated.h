// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASBZEquippable;
#ifdef STARBREEZE_SBZOnTelegraphAttackComponent_generated_h
#error "SBZOnTelegraphAttackComponent.generated.h already included, missing '#pragma once' in SBZOnTelegraphAttackComponent.h"
#endif
#define STARBREEZE_SBZOnTelegraphAttackComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTelegraphAttackChanged); \
	DECLARE_FUNCTION(execOnUnequip);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTelegraphAttackChanged); \
	DECLARE_FUNCTION(execOnUnequip);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnTelegraphAttackComponent(); \
	friend struct Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics; \
public: \
	DECLARE_CLASS(USBZOnTelegraphAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnTelegraphAttackComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnTelegraphAttackComponent(); \
	friend struct Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics; \
public: \
	DECLARE_CLASS(USBZOnTelegraphAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnTelegraphAttackComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnTelegraphAttackComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnTelegraphAttackComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnTelegraphAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnTelegraphAttackComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnTelegraphAttackComponent(USBZOnTelegraphAttackComponent&&); \
	NO_API USBZOnTelegraphAttackComponent(const USBZOnTelegraphAttackComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnTelegraphAttackComponent(USBZOnTelegraphAttackComponent&&); \
	NO_API USBZOnTelegraphAttackComponent(const USBZOnTelegraphAttackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnTelegraphAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnTelegraphAttackComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnTelegraphAttackComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(USBZOnTelegraphAttackComponent, Owner); } \
	FORCEINLINE static uint32 __PPO__OwnerWeapon() { return STRUCT_OFFSET(USBZOnTelegraphAttackComponent, OwnerWeapon); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnTelegraphAttackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnTelegraphAttackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
