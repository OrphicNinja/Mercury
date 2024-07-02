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
#ifdef STARBREEZE_SBZCosmeticDestructionComponent_generated_h
#error "SBZCosmeticDestructionComponent.generated.h already included, missing '#pragma once' in SBZCosmeticDestructionComponent.h"
#endif
#define STARBREEZE_SBZCosmeticDestructionComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleSBZTakePointDamageEx); \
	DECLARE_FUNCTION(execHandleSBZTakeRadialDamageEx);


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleSBZTakePointDamageEx); \
	DECLARE_FUNCTION(execHandleSBZTakeRadialDamageEx);


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCosmeticDestructionComponent(); \
	friend struct Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCosmeticDestructionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCosmeticDestructionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCosmeticDestructionComponent(); \
	friend struct Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCosmeticDestructionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCosmeticDestructionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCosmeticDestructionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCosmeticDestructionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCosmeticDestructionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCosmeticDestructionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCosmeticDestructionComponent(USBZCosmeticDestructionComponent&&); \
	NO_API USBZCosmeticDestructionComponent(const USBZCosmeticDestructionComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCosmeticDestructionComponent(USBZCosmeticDestructionComponent&&); \
	NO_API USBZCosmeticDestructionComponent(const USBZCosmeticDestructionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCosmeticDestructionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCosmeticDestructionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCosmeticDestructionComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoolDown() { return STRUCT_OFFSET(USBZCosmeticDestructionComponent, CoolDown); } \
	FORCEINLINE static uint32 __PPO__Chance() { return STRUCT_OFFSET(USBZCosmeticDestructionComponent, Chance); } \
	FORCEINLINE static uint32 __PPO__bUseExplosionCoolDown() { return STRUCT_OFFSET(USBZCosmeticDestructionComponent, bUseExplosionCoolDown); } \
	FORCEINLINE static uint32 __PPO__ExplosionCoolDown() { return STRUCT_OFFSET(USBZCosmeticDestructionComponent, ExplosionCoolDown); } \
	FORCEINLINE static uint32 __PPO__bUseExplosionChance() { return STRUCT_OFFSET(USBZCosmeticDestructionComponent, bUseExplosionChance); } \
	FORCEINLINE static uint32 __PPO__ExplosionChance() { return STRUCT_OFFSET(USBZCosmeticDestructionComponent, ExplosionChance); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCosmeticDestructionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCosmeticDestructionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
