// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPawnSpawnRequestHandle;
class APawn;
class ASBZPawnSpawnBase;
#ifdef STARBREEZE_PD3PawnSpawnGroup_generated_h
#error "PD3PawnSpawnGroup.generated.h already included, missing '#pragma once' in PD3PawnSpawnGroup.h"
#endif
#define STARBREEZE_PD3PawnSpawnGroup_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSpawnFinished); \
	DECLARE_FUNCTION(execSetEnabledForAssault); \
	DECLARE_FUNCTION(execSetEnabledForCivilians);


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSpawnFinished); \
	DECLARE_FUNCTION(execSetEnabledForAssault); \
	DECLARE_FUNCTION(execSetEnabledForCivilians);


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPD3PawnSpawnGroup(); \
	friend struct Z_Construct_UClass_APD3PawnSpawnGroup_Statics; \
public: \
	DECLARE_CLASS(APD3PawnSpawnGroup, ASBZPawnSpawnGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(APD3PawnSpawnGroup)


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPD3PawnSpawnGroup(); \
	friend struct Z_Construct_UClass_APD3PawnSpawnGroup_Statics; \
public: \
	DECLARE_CLASS(APD3PawnSpawnGroup, ASBZPawnSpawnGroup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(APD3PawnSpawnGroup)


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APD3PawnSpawnGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APD3PawnSpawnGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APD3PawnSpawnGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APD3PawnSpawnGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APD3PawnSpawnGroup(APD3PawnSpawnGroup&&); \
	NO_API APD3PawnSpawnGroup(const APD3PawnSpawnGroup&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APD3PawnSpawnGroup(APD3PawnSpawnGroup&&); \
	NO_API APD3PawnSpawnGroup(const APD3PawnSpawnGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APD3PawnSpawnGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APD3PawnSpawnGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APD3PawnSpawnGroup)


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsEnabledForAssault() { return STRUCT_OFFSET(APD3PawnSpawnGroup, bIsEnabledForAssault); } \
	FORCEINLINE static uint32 __PPO__bIsEnabledForCivilians() { return STRUCT_OFFSET(APD3PawnSpawnGroup, bIsEnabledForCivilians); } \
	FORCEINLINE static uint32 __PPO__AllowedPawnTypeContainer() { return STRUCT_OFFSET(APD3PawnSpawnGroup, AllowedPawnTypeContainer); }


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class APD3PawnSpawnGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3PawnSpawnGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
