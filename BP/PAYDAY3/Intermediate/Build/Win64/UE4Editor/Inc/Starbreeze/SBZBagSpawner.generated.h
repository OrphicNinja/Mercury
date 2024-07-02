// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBagSpawner_generated_h
#error "SBZBagSpawner.generated.h already included, missing '#pragma once' in SBZBagSpawner.h"
#endif
#define STARBREEZE_SBZBagSpawner_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSpawningBags);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSpawningBags);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBagSpawner(); \
	friend struct Z_Construct_UClass_ASBZBagSpawner_Statics; \
public: \
	DECLARE_CLASS(ASBZBagSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBagSpawner)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZBagSpawner(); \
	friend struct Z_Construct_UClass_ASBZBagSpawner_Statics; \
public: \
	DECLARE_CLASS(ASBZBagSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBagSpawner)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZBagSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBagSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBagSpawner(ASBZBagSpawner&&); \
	NO_API ASBZBagSpawner(const ASBZBagSpawner&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBagSpawner(ASBZBagSpawner&&); \
	NO_API ASBZBagSpawner(const ASBZBagSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBagSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagSpawner)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfBags() { return STRUCT_OFFSET(ASBZBagSpawner, NumberOfBags); } \
	FORCEINLINE static uint32 __PPO__DelayBetweenSpawns() { return STRUCT_OFFSET(ASBZBagSpawner, DelayBetweenSpawns); } \
	FORCEINLINE static uint32 __PPO__BagTypeToSpawn() { return STRUCT_OFFSET(ASBZBagSpawner, BagTypeToSpawn); } \
	FORCEINLINE static uint32 __PPO__bShouldLaunchBag() { return STRUCT_OFFSET(ASBZBagSpawner, bShouldLaunchBag); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(ASBZBagSpawner, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__LaunchDirection() { return STRUCT_OFFSET(ASBZBagSpawner, LaunchDirection); } \
	FORCEINLINE static uint32 __PPO__bShouldLaunchWithinCone() { return STRUCT_OFFSET(ASBZBagSpawner, bShouldLaunchWithinCone); } \
	FORCEINLINE static uint32 __PPO__ConeAngle() { return STRUCT_OFFSET(ASBZBagSpawner, ConeAngle); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBagSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
