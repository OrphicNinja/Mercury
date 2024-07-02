// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSpline;
#ifdef STARBREEZE_SBZSpline_generated_h
#error "SBZSpline.generated.h already included, missing '#pragma once' in SBZSpline.h"
#endif
#define STARBREEZE_SBZSpline_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputSplines); \
	DECLARE_FUNCTION(execGetOutputSplines);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputSplines); \
	DECLARE_FUNCTION(execGetOutputSplines);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSpline(); \
	friend struct Z_Construct_UClass_ASBZSpline_Statics; \
public: \
	DECLARE_CLASS(ASBZSpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSpline)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZSpline(); \
	friend struct Z_Construct_UClass_ASBZSpline_Statics; \
public: \
	DECLARE_CLASS(ASBZSpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSpline)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSpline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSpline(ASBZSpline&&); \
	NO_API ASBZSpline(const ASBZSpline&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSpline(ASBZSpline&&); \
	NO_API ASBZSpline(const ASBZSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpline)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpline_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
