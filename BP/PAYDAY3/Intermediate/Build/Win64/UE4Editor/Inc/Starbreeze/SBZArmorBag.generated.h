// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZArmorBag_generated_h
#error "SBZArmorBag.generated.h already included, missing '#pragma once' in SBZArmorBag.h"
#endif
#define STARBREEZE_SBZArmorBag_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZArmorBag(); \
	friend struct Z_Construct_UClass_ASBZArmorBag_Statics; \
public: \
	DECLARE_CLASS(ASBZArmorBag, ASBZPlaceableCharges, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZArmorBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_INCLASS \
private: \
	static void StaticRegisterNativesASBZArmorBag(); \
	friend struct Z_Construct_UClass_ASBZArmorBag_Statics; \
public: \
	DECLARE_CLASS(ASBZArmorBag, ASBZPlaceableCharges, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZArmorBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZArmorBag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZArmorBag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZArmorBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZArmorBag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZArmorBag(ASBZArmorBag&&); \
	NO_API ASBZArmorBag(const ASBZArmorBag&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZArmorBag(ASBZArmorBag&&); \
	NO_API ASBZArmorBag(const ASBZArmorBag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZArmorBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZArmorBag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZArmorBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmorChunkSizePerCharge() { return STRUCT_OFFSET(ASBZArmorBag, ArmorChunkSizePerCharge); }


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZArmorBag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZArmorBag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
