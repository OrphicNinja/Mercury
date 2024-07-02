// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTrafficSpline_generated_h
#error "SBZTrafficSpline.generated.h already included, missing '#pragma once' in SBZTrafficSpline.h"
#endif
#define STARBREEZE_SBZTrafficSpline_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZTrafficSpline(); \
	friend struct Z_Construct_UClass_ASBZTrafficSpline_Statics; \
public: \
	DECLARE_CLASS(ASBZTrafficSpline, ASBZSpline, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTrafficSpline)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZTrafficSpline(); \
	friend struct Z_Construct_UClass_ASBZTrafficSpline_Statics; \
public: \
	DECLARE_CLASS(ASBZTrafficSpline, ASBZSpline, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTrafficSpline)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZTrafficSpline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTrafficSpline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTrafficSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTrafficSpline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTrafficSpline(ASBZTrafficSpline&&); \
	NO_API ASBZTrafficSpline(const ASBZTrafficSpline&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTrafficSpline(ASBZTrafficSpline&&); \
	NO_API ASBZTrafficSpline(const ASBZTrafficSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTrafficSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTrafficSpline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTrafficSpline)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrafficManager() { return STRUCT_OFFSET(ASBZTrafficSpline, TrafficManager); } \
	FORCEINLINE static uint32 __PPO__SplineTypeFlags() { return STRUCT_OFFSET(ASBZTrafficSpline, SplineTypeFlags); } \
	FORCEINLINE static uint32 __PPO__VehicleTypeFlags() { return STRUCT_OFFSET(ASBZTrafficSpline, VehicleTypeFlags); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZTrafficSpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTrafficSpline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
