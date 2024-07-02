// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UPrimitiveComponent;
class AActor;
struct FVector;
#ifdef STARBREEZE_SBZBaseDebris_generated_h
#error "SBZBaseDebris.generated.h already included, missing '#pragma once' in SBZBaseDebris.h"
#endif
#define STARBREEZE_SBZBaseDebris_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateImpactPoint); \
	DECLARE_FUNCTION(execOnHit);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateImpactPoint); \
	DECLARE_FUNCTION(execOnHit);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBaseDebris(); \
	friend struct Z_Construct_UClass_ASBZBaseDebris_Statics; \
public: \
	DECLARE_CLASS(ASBZBaseDebris, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBaseDebris)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZBaseDebris(); \
	friend struct Z_Construct_UClass_ASBZBaseDebris_Statics; \
public: \
	DECLARE_CLASS(ASBZBaseDebris, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBaseDebris)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZBaseDebris(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBaseDebris) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBaseDebris); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBaseDebris); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBaseDebris(ASBZBaseDebris&&); \
	NO_API ASBZBaseDebris(const ASBZBaseDebris&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBaseDebris(ASBZBaseDebris&&); \
	NO_API ASBZBaseDebris(const ASBZBaseDebris&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBaseDebris); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBaseDebris); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBaseDebris)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBaseDebris>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBaseDebris_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS