// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAmmoBag_generated_h
#error "SBZAmmoBag.generated.h already included, missing '#pragma once' in SBZAmmoBag.h"
#endif
#define STARBREEZE_SBZAmmoBag_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAmmoBag(); \
	friend struct Z_Construct_UClass_ASBZAmmoBag_Statics; \
public: \
	DECLARE_CLASS(ASBZAmmoBag, ASBZPlaceableCharges, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAmmoBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_INCLASS \
private: \
	static void StaticRegisterNativesASBZAmmoBag(); \
	friend struct Z_Construct_UClass_ASBZAmmoBag_Statics; \
public: \
	DECLARE_CLASS(ASBZAmmoBag, ASBZPlaceableCharges, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAmmoBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAmmoBag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAmmoBag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAmmoBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAmmoBag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAmmoBag(ASBZAmmoBag&&); \
	NO_API ASBZAmmoBag(const ASBZAmmoBag&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAmmoBag(ASBZAmmoBag&&); \
	NO_API ASBZAmmoBag(const ASBZAmmoBag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAmmoBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAmmoBag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAmmoBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfMagazinesPerCharge() { return STRUCT_OFFSET(ASBZAmmoBag, NumberOfMagazinesPerCharge); } \
	FORCEINLINE static uint32 __PPO__NumberOfGrenadesPerCharge() { return STRUCT_OFFSET(ASBZAmmoBag, NumberOfGrenadesPerCharge); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAmmoBag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAmmoBag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
