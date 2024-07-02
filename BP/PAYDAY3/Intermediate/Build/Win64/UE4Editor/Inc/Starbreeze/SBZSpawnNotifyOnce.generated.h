// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STARBREEZE_SBZSpawnNotifyOnce_generated_h
#error "SBZSpawnNotifyOnce.generated.h already included, missing '#pragma once' in SBZSpawnNotifyOnce.h"
#endif
#define STARBREEZE_SBZSpawnNotifyOnce_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSpawnComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSpawnComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSpawnNotifyOnce(); \
	friend struct Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics; \
public: \
	DECLARE_CLASS(ASBZSpawnNotifyOnce, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSpawnNotifyOnce)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZSpawnNotifyOnce(); \
	friend struct Z_Construct_UClass_ASBZSpawnNotifyOnce_Statics; \
public: \
	DECLARE_CLASS(ASBZSpawnNotifyOnce, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSpawnNotifyOnce)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSpawnNotifyOnce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpawnNotifyOnce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSpawnNotifyOnce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpawnNotifyOnce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSpawnNotifyOnce(ASBZSpawnNotifyOnce&&); \
	NO_API ASBZSpawnNotifyOnce(const ASBZSpawnNotifyOnce&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSpawnNotifyOnce(ASBZSpawnNotifyOnce&&); \
	NO_API ASBZSpawnNotifyOnce(const ASBZSpawnNotifyOnce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSpawnNotifyOnce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSpawnNotifyOnce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSpawnNotifyOnce)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Spawner() { return STRUCT_OFFSET(ASBZSpawnNotifyOnce, Spawner); } \
	FORCEINLINE static uint32 __PPO__SpawnerArray() { return STRUCT_OFFSET(ASBZSpawnNotifyOnce, SpawnerArray); } \
	FORCEINLINE static uint32 __PPO__SpawnNotifyReactors() { return STRUCT_OFFSET(ASBZSpawnNotifyOnce, SpawnNotifyReactors); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSpawnNotifyOnce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnNotifyOnce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
