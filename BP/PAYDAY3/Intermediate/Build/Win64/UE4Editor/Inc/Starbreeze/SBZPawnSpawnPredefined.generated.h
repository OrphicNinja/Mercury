// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPawnSpawnRequestHandle;
struct FLatentActionInfo;
#ifdef STARBREEZE_SBZPawnSpawnPredefined_generated_h
#error "SBZPawnSpawnPredefined.generated.h already included, missing '#pragma once' in SBZPawnSpawnPredefined.h"
#endif
#define STARBREEZE_SBZPawnSpawnPredefined_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnPredefined); \
	DECLARE_FUNCTION(execSpawnPredefinedLatent);


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnPredefined); \
	DECLARE_FUNCTION(execSpawnPredefinedLatent);


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPawnSpawnPredefined(); \
	friend struct Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics; \
public: \
	DECLARE_CLASS(ASBZPawnSpawnPredefined, ASBZPawnSpawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPawnSpawnPredefined)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZPawnSpawnPredefined(); \
	friend struct Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics; \
public: \
	DECLARE_CLASS(ASBZPawnSpawnPredefined, ASBZPawnSpawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPawnSpawnPredefined)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPawnSpawnPredefined) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPawnSpawnPredefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPawnSpawnPredefined); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPawnSpawnPredefined(ASBZPawnSpawnPredefined&&); \
	NO_API ASBZPawnSpawnPredefined(const ASBZPawnSpawnPredefined&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPawnSpawnPredefined(ASBZPawnSpawnPredefined&&); \
	NO_API ASBZPawnSpawnPredefined(const ASBZPawnSpawnPredefined&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPawnSpawnPredefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPawnSpawnPredefined); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPawnSpawnPredefined)


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSpawnOnBeginPlay() { return STRUCT_OFFSET(ASBZPawnSpawnPredefined, bSpawnOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__bOverrideSpawningMethod() { return STRUCT_OFFSET(ASBZPawnSpawnPredefined, bOverrideSpawningMethod); } \
	FORCEINLINE static uint32 __PPO__OverridenSpawningMethod() { return STRUCT_OFFSET(ASBZPawnSpawnPredefined, OverridenSpawningMethod); } \
	FORCEINLINE static uint32 __PPO__bEnableRandomMeshScale() { return STRUCT_OFFSET(ASBZPawnSpawnPredefined, bEnableRandomMeshScale); } \
	FORCEINLINE static uint32 __PPO__KilledPawnDelegate() { return STRUCT_OFFSET(ASBZPawnSpawnPredefined, KilledPawnDelegate); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPawnSpawnPredefined>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnSpawnPredefined_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
