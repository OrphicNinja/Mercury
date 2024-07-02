// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPawnSpawnBase_generated_h
#error "SBZPawnSpawnBase.generated.h already included, missing '#pragma once' in SBZPawnSpawnBase.h"
#endif
#define STARBREEZE_SBZPawnSpawnBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPawnSpawnBase(); \
	friend struct Z_Construct_UClass_ASBZPawnSpawnBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPawnSpawnBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPawnSpawnBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZPawnSpawnBase(); \
	friend struct Z_Construct_UClass_ASBZPawnSpawnBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPawnSpawnBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPawnSpawnBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPawnSpawnBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPawnSpawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPawnSpawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPawnSpawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPawnSpawnBase(ASBZPawnSpawnBase&&); \
	NO_API ASBZPawnSpawnBase(const ASBZPawnSpawnBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPawnSpawnBase(ASBZPawnSpawnBase&&); \
	NO_API ASBZPawnSpawnBase(const ASBZPawnSpawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPawnSpawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPawnSpawnBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPawnSpawnBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZPawnSpawnBase, Seed); } \
	FORCEINLINE static uint32 __PPO__bRandomizeSpawnTransformStartingIndex() { return STRUCT_OFFSET(ASBZPawnSpawnBase, bRandomizeSpawnTransformStartingIndex); } \
	FORCEINLINE static uint32 __PPO__RotationHandling() { return STRUCT_OFFSET(ASBZPawnSpawnBase, RotationHandling); } \
	FORCEINLINE static uint32 __PPO__SpawnDefinitionArray() { return STRUCT_OFFSET(ASBZPawnSpawnBase, SpawnDefinitionArray); } \
	FORCEINLINE static uint32 __PPO__NextSpawnDefinitionIndex() { return STRUCT_OFFSET(ASBZPawnSpawnBase, NextSpawnDefinitionIndex); } \
	FORCEINLINE static uint32 __PPO__WeightedLocation() { return STRUCT_OFFSET(ASBZPawnSpawnBase, WeightedLocation); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPawnSpawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
