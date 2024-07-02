// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZRangedWeapon_generated_h
#error "SBZRangedWeapon.generated.h already included, missing '#pragma once' in SBZRangedWeapon.h"
#endif
#define STARBREEZE_SBZRangedWeapon_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZRangedWeapon(); \
	friend struct Z_Construct_UClass_ASBZRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZRangedWeapon, ASBZWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZRangedWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZRangedWeapon(); \
	friend struct Z_Construct_UClass_ASBZRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZRangedWeapon, ASBZWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZRangedWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZRangedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZRangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZRangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZRangedWeapon(ASBZRangedWeapon&&); \
	NO_API ASBZRangedWeapon(const ASBZRangedWeapon&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZRangedWeapon(ASBZRangedWeapon&&); \
	NO_API ASBZRangedWeapon(const ASBZRangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZRangedWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZRangedWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireEffect() { return STRUCT_OFFSET(ASBZRangedWeapon, FireEffect); } \
	FORCEINLINE static uint32 __PPO__FireEmitterMesh() { return STRUCT_OFFSET(ASBZRangedWeapon, FireEmitterMesh); } \
	FORCEINLINE static uint32 __PPO__FireEffectSocket() { return STRUCT_OFFSET(ASBZRangedWeapon, FireEffectSocket); } \
	FORCEINLINE static uint32 __PPO__FireEffectComponent() { return STRUCT_OFFSET(ASBZRangedWeapon, FireEffectComponent); } \
	FORCEINLINE static uint32 __PPO__ShellEffect() { return STRUCT_OFFSET(ASBZRangedWeapon, ShellEffect); } \
	FORCEINLINE static uint32 __PPO__ShellEffectSocket() { return STRUCT_OFFSET(ASBZRangedWeapon, ShellEffectSocket); } \
	FORCEINLINE static uint32 __PPO__bIsRecoilShellEffect() { return STRUCT_OFFSET(ASBZRangedWeapon, bIsRecoilShellEffect); } \
	FORCEINLINE static uint32 __PPO__ShellEffectComponent() { return STRUCT_OFFSET(ASBZRangedWeapon, ShellEffectComponent); } \
	FORCEINLINE static uint32 __PPO__TraceEffect() { return STRUCT_OFFSET(ASBZRangedWeapon, TraceEffect); } \
	FORCEINLINE static uint32 __PPO__TraceEffectLength() { return STRUCT_OFFSET(ASBZRangedWeapon, TraceEffectLength); } \
	FORCEINLINE static uint32 __PPO__TraceEffectComponentArray() { return STRUCT_OFFSET(ASBZRangedWeapon, TraceEffectComponentArray); } \
	FORCEINLINE static uint32 __PPO__ShotsBeforeAutoFire() { return STRUCT_OFFSET(ASBZRangedWeapon, ShotsBeforeAutoFire); } \
	FORCEINLINE static uint32 __PPO__SingleFireEvent() { return STRUCT_OFFSET(ASBZRangedWeapon, SingleFireEvent); } \
	FORCEINLINE static uint32 __PPO__AutoFireStartEvent() { return STRUCT_OFFSET(ASBZRangedWeapon, AutoFireStartEvent); } \
	FORCEINLINE static uint32 __PPO__AutoFireStopEvent() { return STRUCT_OFFSET(ASBZRangedWeapon, AutoFireStopEvent); } \
	FORCEINLINE static uint32 __PPO__FPEnterTargetingEvent() { return STRUCT_OFFSET(ASBZRangedWeapon, FPEnterTargetingEvent); } \
	FORCEINLINE static uint32 __PPO__FPExitTargetingEvent() { return STRUCT_OFFSET(ASBZRangedWeapon, FPExitTargetingEvent); } \
	FORCEINLINE static uint32 __PPO__DryFireEvent() { return STRUCT_OFFSET(ASBZRangedWeapon, DryFireEvent); } \
	FORCEINLINE static uint32 __PPO__AmmoInMagazineRTPC() { return STRUCT_OFFSET(ASBZRangedWeapon, AmmoInMagazineRTPC); } \
	FORCEINLINE static uint32 __PPO__AmmoMeshComponentArray() { return STRUCT_OFFSET(ASBZRangedWeapon, AmmoMeshComponentArray); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmoData() { return STRUCT_OFFSET(ASBZRangedWeapon, CurrentAmmoData); } \
	FORCEINLINE static uint32 __PPO__AmmoEquipped() { return STRUCT_OFFSET(ASBZRangedWeapon, AmmoEquipped); } \
	FORCEINLINE static uint32 __PPO__AmmoLoaded() { return STRUCT_OFFSET(ASBZRangedWeapon, AmmoLoaded); } \
	FORCEINLINE static uint32 __PPO__DroppedAmmoLoaded() { return STRUCT_OFFSET(ASBZRangedWeapon, DroppedAmmoLoaded); } \
	FORCEINLINE static uint32 __PPO__ChamberMeshArray() { return STRUCT_OFFSET(ASBZRangedWeapon, ChamberMeshArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZRangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRangedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
