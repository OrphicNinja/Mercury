// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPlaceableDroppedWeapon_generated_h
#error "SBZPlaceableDroppedWeapon.generated.h already included, missing '#pragma once' in SBZPlaceableDroppedWeapon.h"
#endif
#define STARBREEZE_SBZPlaceableDroppedWeapon_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableDroppedWeapon(); \
	friend struct Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableDroppedWeapon, ASBZPlaceableWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableDroppedWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AmmoLoadedLeft=NETFIELD_REP_START, \
		AmmoInventoryLeft, \
		NETFIELD_REP_END=AmmoInventoryLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableDroppedWeapon(); \
	friend struct Z_Construct_UClass_ASBZPlaceableDroppedWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableDroppedWeapon, ASBZPlaceableWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableDroppedWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AmmoLoadedLeft=NETFIELD_REP_START, \
		AmmoInventoryLeft, \
		NETFIELD_REP_END=AmmoInventoryLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableDroppedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableDroppedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableDroppedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableDroppedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableDroppedWeapon(ASBZPlaceableDroppedWeapon&&); \
	NO_API ASBZPlaceableDroppedWeapon(const ASBZPlaceableDroppedWeapon&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableDroppedWeapon(ASBZPlaceableDroppedWeapon&&); \
	NO_API ASBZPlaceableDroppedWeapon(const ASBZPlaceableDroppedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableDroppedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableDroppedWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableDroppedWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponPoint() { return STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, WeaponPoint); } \
	FORCEINLINE static uint32 __PPO__AttachedWeapon() { return STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, AttachedWeapon); } \
	FORCEINLINE static uint32 __PPO__AmmoLoadedLeft() { return STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, AmmoLoadedLeft); } \
	FORCEINLINE static uint32 __PPO__AmmoInventoryLeft() { return STRUCT_OFFSET(ASBZPlaceableDroppedWeapon, AmmoInventoryLeft); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableDroppedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableDroppedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
