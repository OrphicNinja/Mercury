// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZHealthPlaceable_generated_h
#error "SBZHealthPlaceable.generated.h already included, missing '#pragma once' in SBZHealthPlaceable.h"
#endif
#define STARBREEZE_SBZHealthPlaceable_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHealthPlaceable(); \
	friend struct Z_Construct_UClass_ASBZHealthPlaceable_Statics; \
public: \
	DECLARE_CLASS(ASBZHealthPlaceable, ASBZPlaceableCharges, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHealthPlaceable)


#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_INCLASS \
private: \
	static void StaticRegisterNativesASBZHealthPlaceable(); \
	friend struct Z_Construct_UClass_ASBZHealthPlaceable_Statics; \
public: \
	DECLARE_CLASS(ASBZHealthPlaceable, ASBZPlaceableCharges, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHealthPlaceable)


#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHealthPlaceable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHealthPlaceable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHealthPlaceable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHealthPlaceable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHealthPlaceable(ASBZHealthPlaceable&&); \
	NO_API ASBZHealthPlaceable(const ASBZHealthPlaceable&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHealthPlaceable(ASBZHealthPlaceable&&); \
	NO_API ASBZHealthPlaceable(const ASBZHealthPlaceable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHealthPlaceable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHealthPlaceable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHealthPlaceable)


#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthGainedPerCharge() { return STRUCT_OFFSET(ASBZHealthPlaceable, HealthGainedPerCharge); } \
	FORCEINLINE static uint32 __PPO__DownsGainedPerCharge() { return STRUCT_OFFSET(ASBZHealthPlaceable, DownsGainedPerCharge); } \
	FORCEINLINE static uint32 __PPO__bAllowPartialCharges() { return STRUCT_OFFSET(ASBZHealthPlaceable, bAllowPartialCharges); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHealthPlaceable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHealthPlaceable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
