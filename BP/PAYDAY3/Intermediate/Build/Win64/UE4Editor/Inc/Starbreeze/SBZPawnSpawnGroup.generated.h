// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZPawnSpawnGroup_generated_h
#error "SBZPawnSpawnGroup.generated.h already included, missing '#pragma once' in SBZPawnSpawnGroup.h"
#endif
#define STARBREEZE_SBZPawnSpawnGroup_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnSpawnDestroyed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnSpawnDestroyed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPawnSpawnGroup(); \
	friend struct Z_Construct_UClass_ASBZPawnSpawnGroup_Statics; \
public: \
	DECLARE_CLASS(ASBZPawnSpawnGroup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPawnSpawnGroup) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPawnSpawnGroup*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZPawnSpawnGroup(); \
	friend struct Z_Construct_UClass_ASBZPawnSpawnGroup_Statics; \
public: \
	DECLARE_CLASS(ASBZPawnSpawnGroup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPawnSpawnGroup) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPawnSpawnGroup*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPawnSpawnGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPawnSpawnGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPawnSpawnGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPawnSpawnGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPawnSpawnGroup(ASBZPawnSpawnGroup&&); \
	NO_API ASBZPawnSpawnGroup(const ASBZPawnSpawnGroup&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPawnSpawnGroup(ASBZPawnSpawnGroup&&); \
	NO_API ASBZPawnSpawnGroup(const ASBZPawnSpawnGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPawnSpawnGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPawnSpawnGroup); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPawnSpawnGroup)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSpawnArray() { return STRUCT_OFFSET(ASBZPawnSpawnGroup, PawnSpawnArray); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZPawnSpawnGroup, Seed); } \
	FORCEINLINE static uint32 __PPO__bShouldRandomizeSpawnPoints() { return STRUCT_OFFSET(ASBZPawnSpawnGroup, bShouldRandomizeSpawnPoints); } \
	FORCEINLINE static uint32 __PPO__SpawnGroupRoom() { return STRUCT_OFFSET(ASBZPawnSpawnGroup, SpawnGroupRoom); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPawnSpawnGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
