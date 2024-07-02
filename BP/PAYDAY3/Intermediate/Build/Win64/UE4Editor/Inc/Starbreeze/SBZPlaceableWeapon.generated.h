// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZPlaceableWeapon_generated_h
#error "SBZPlaceableWeapon.generated.h already included, missing '#pragma once' in SBZPlaceableWeapon.h"
#endif
#define STARBREEZE_SBZPlaceableWeapon_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableWeapon(); \
	friend struct Z_Construct_UClass_ASBZPlaceableWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableWeapon, ASBZPlaceableBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StoredWeaponConfig=NETFIELD_REP_START, \
		NETFIELD_REP_END=StoredWeaponConfig	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableWeapon(); \
	friend struct Z_Construct_UClass_ASBZPlaceableWeapon_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableWeapon, ASBZPlaceableBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StoredWeaponConfig=NETFIELD_REP_START, \
		NETFIELD_REP_END=StoredWeaponConfig	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableWeapon(ASBZPlaceableWeapon&&); \
	NO_API ASBZPlaceableWeapon(const ASBZPlaceableWeapon&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableWeapon(ASBZPlaceableWeapon&&); \
	NO_API ASBZPlaceableWeapon(const ASBZPlaceableWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableWeapon)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StoredWeaponConfig() { return STRUCT_OFFSET(ASBZPlaceableWeapon, StoredWeaponConfig); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ASBZPlaceableWeapon, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponMarker() { return STRUCT_OFFSET(ASBZPlaceableWeapon, WeaponMarker); } \
	FORCEINLINE static uint32 __PPO__bDestroyOnInteraction() { return STRUCT_OFFSET(ASBZPlaceableWeapon, bDestroyOnInteraction); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
