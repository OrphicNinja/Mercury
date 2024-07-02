// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
#ifdef STARBREEZE_SBZPlaceableWeaponBox_generated_h
#error "SBZPlaceableWeaponBox.generated.h already included, missing '#pragma once' in SBZPlaceableWeaponBox.h"
#endif
#define STARBREEZE_SBZPlaceableWeaponBox_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChange); \
	DECLARE_FUNCTION(execSetActiveState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionEnabledStateChange); \
	DECLARE_FUNCTION(execSetActiveState);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableWeaponBox(); \
	friend struct Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableWeaponBox, ASBZPlaceableWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableWeaponBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableWeaponBox(); \
	friend struct Z_Construct_UClass_ASBZPlaceableWeaponBox_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableWeaponBox, ASBZPlaceableWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableWeaponBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableWeaponBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableWeaponBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableWeaponBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableWeaponBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableWeaponBox(ASBZPlaceableWeaponBox&&); \
	NO_API ASBZPlaceableWeaponBox(const ASBZPlaceableWeaponBox&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableWeaponBox(ASBZPlaceableWeaponBox&&); \
	NO_API ASBZPlaceableWeaponBox(const ASBZPlaceableWeaponBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableWeaponBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableWeaponBox); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableWeaponBox)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(ASBZPlaceableWeaponBox, bIsActive); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableWeaponBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableWeaponBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
