// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STARBREEZE_SBZAirNavigation_generated_h
#error "SBZAirNavigation.generated.h already included, missing '#pragma once' in SBZAirNavigation.h"
#endif
#define STARBREEZE_SBZAirNavigation_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateNavigationData); \
	DECLARE_FUNCTION(execHasValidNavigationAt);


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateNavigationData); \
	DECLARE_FUNCTION(execHasValidNavigationAt);


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAirNavigation(); \
	friend struct Z_Construct_UClass_ASBZAirNavigation_Statics; \
public: \
	DECLARE_CLASS(ASBZAirNavigation, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZAirNavigation)


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZAirNavigation(); \
	friend struct Z_Construct_UClass_ASBZAirNavigation_Statics; \
public: \
	DECLARE_CLASS(ASBZAirNavigation, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZAirNavigation)


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZAirNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAirNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZAirNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAirNavigation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZAirNavigation(ASBZAirNavigation&&); \
	STARBREEZE_API ASBZAirNavigation(const ASBZAirNavigation&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZAirNavigation(ASBZAirNavigation&&); \
	STARBREEZE_API ASBZAirNavigation(const ASBZAirNavigation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZAirNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAirNavigation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAirNavigation)


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavData() { return STRUCT_OFFSET(ASBZAirNavigation, NavData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAirNavigation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAirNavigation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
