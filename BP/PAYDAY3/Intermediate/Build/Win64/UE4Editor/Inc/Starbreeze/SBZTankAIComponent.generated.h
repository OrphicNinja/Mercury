// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef STARBREEZE_SBZTankAIComponent_generated_h
#error "SBZTankAIComponent.generated.h already included, missing '#pragma once' in SBZTankAIComponent.h"
#endif
#define STARBREEZE_SBZTankAIComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackTagChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackTagChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZTankAIComponent(); \
	friend struct Z_Construct_UClass_USBZTankAIComponent_Statics; \
public: \
	DECLARE_CLASS(USBZTankAIComponent, USBZSpecialAIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTankAIComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZTankAIComponent(); \
	friend struct Z_Construct_UClass_USBZTankAIComponent_Statics; \
public: \
	DECLARE_CLASS(USBZTankAIComponent, USBZSpecialAIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTankAIComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTankAIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTankAIComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTankAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTankAIComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTankAIComponent(USBZTankAIComponent&&); \
	NO_API USBZTankAIComponent(const USBZTankAIComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTankAIComponent(USBZTankAIComponent&&); \
	NO_API USBZTankAIComponent(const USBZTankAIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTankAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTankAIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTankAIComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Armored() { return STRUCT_OFFSET(USBZTankAIComponent, Armored); } \
	FORCEINLINE static uint32 __PPO__ArmorSelectors() { return STRUCT_OFFSET(USBZTankAIComponent, ArmorSelectors); } \
	FORCEINLINE static uint32 __PPO__ArmorPopOffEvent() { return STRUCT_OFFSET(USBZTankAIComponent, ArmorPopOffEvent); } \
	FORCEINLINE static uint32 __PPO__FaceArmorSelectors() { return STRUCT_OFFSET(USBZTankAIComponent, FaceArmorSelectors); } \
	FORCEINLINE static uint32 __PPO__HeadshotColliderSelector() { return STRUCT_OFFSET(USBZTankAIComponent, HeadshotColliderSelector); } \
	FORCEINLINE static uint32 __PPO__Cooldown() { return STRUCT_OFFSET(USBZTankAIComponent, Cooldown); } \
	FORCEINLINE static uint32 __PPO__StaggerStateCooldown() { return STRUCT_OFFSET(USBZTankAIComponent, StaggerStateCooldown); } \
	FORCEINLINE static uint32 __PPO__ChargeDistance() { return STRUCT_OFFSET(USBZTankAIComponent, ChargeDistance); } \
	FORCEINLINE static uint32 __PPO__DistantChargeDistance() { return STRUCT_OFFSET(USBZTankAIComponent, DistantChargeDistance); } \
	FORCEINLINE static uint32 __PPO__ArmorParts() { return STRUCT_OFFSET(USBZTankAIComponent, ArmorParts); } \
	FORCEINLINE static uint32 __PPO__FaceArmor() { return STRUCT_OFFSET(USBZTankAIComponent, FaceArmor); } \
	FORCEINLINE static uint32 __PPO__HeadshotCollider() { return STRUCT_OFFSET(USBZTankAIComponent, HeadshotCollider); } \
	FORCEINLINE static uint32 __PPO__BodyArmorNames() { return STRUCT_OFFSET(USBZTankAIComponent, BodyArmorNames); } \
	FORCEINLINE static uint32 __PPO__BodyArmorMeshes() { return STRUCT_OFFSET(USBZTankAIComponent, BodyArmorMeshes); } \
	FORCEINLINE static uint32 __PPO__ArmorInfo() { return STRUCT_OFFSET(USBZTankAIComponent, ArmorInfo); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_17_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTankAIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTankAIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
