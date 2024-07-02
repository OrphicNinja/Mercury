// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZActorSpawnBase_generated_h
#error "SBZActorSpawnBase.generated.h already included, missing '#pragma once' in SBZActorSpawnBase.h"
#endif
#define STARBREEZE_SBZActorSpawnBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZActorSpawnBase(); \
	friend struct Z_Construct_UClass_ASBZActorSpawnBase_Statics; \
public: \
	DECLARE_CLASS(ASBZActorSpawnBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZActorSpawnBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesASBZActorSpawnBase(); \
	friend struct Z_Construct_UClass_ASBZActorSpawnBase_Statics; \
public: \
	DECLARE_CLASS(ASBZActorSpawnBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZActorSpawnBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZActorSpawnBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZActorSpawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZActorSpawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZActorSpawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZActorSpawnBase(ASBZActorSpawnBase&&); \
	NO_API ASBZActorSpawnBase(const ASBZActorSpawnBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZActorSpawnBase(ASBZActorSpawnBase&&); \
	NO_API ASBZActorSpawnBase(const ASBZActorSpawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZActorSpawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZActorSpawnBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZActorSpawnBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZActorSpawnBase, Seed); } \
	FORCEINLINE static uint32 __PPO__bRandomizeSpawnTransformStartingIndex() { return STRUCT_OFFSET(ASBZActorSpawnBase, bRandomizeSpawnTransformStartingIndex); } \
	FORCEINLINE static uint32 __PPO__SpawnTransformArray() { return STRUCT_OFFSET(ASBZActorSpawnBase, SpawnTransformArray); } \
	FORCEINLINE static uint32 __PPO__NextSpawnTransformIndex() { return STRUCT_OFFSET(ASBZActorSpawnBase, NextSpawnTransformIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZActorSpawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorSpawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
