// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBagRespawnPoint_generated_h
#error "SBZBagRespawnPoint.generated.h already included, missing '#pragma once' in SBZBagRespawnPoint.h"
#endif
#define STARBREEZE_SBZBagRespawnPoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableBagRespawnPoint); \
	DECLARE_FUNCTION(execEnableBagRespawnPoint);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableBagRespawnPoint); \
	DECLARE_FUNCTION(execEnableBagRespawnPoint);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBagRespawnPoint(); \
	friend struct Z_Construct_UClass_ASBZBagRespawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASBZBagRespawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBagRespawnPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_INCLASS \
private: \
	static void StaticRegisterNativesASBZBagRespawnPoint(); \
	friend struct Z_Construct_UClass_ASBZBagRespawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASBZBagRespawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBagRespawnPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZBagRespawnPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagRespawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBagRespawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagRespawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBagRespawnPoint(ASBZBagRespawnPoint&&); \
	NO_API ASBZBagRespawnPoint(const ASBZBagRespawnPoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBagRespawnPoint(ASBZBagRespawnPoint&&); \
	NO_API ASBZBagRespawnPoint(const ASBZBagRespawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBagRespawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagRespawnPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagRespawnPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bStartEnabled() { return STRUCT_OFFSET(ASBZBagRespawnPoint, bStartEnabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBagRespawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagRespawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
