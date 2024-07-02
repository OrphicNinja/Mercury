// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMissionGameMode_generated_h
#error "SBZMissionGameMode.generated.h already included, missing '#pragma once' in SBZMissionGameMode.h"
#endif
#define STARBREEZE_SBZMissionGameMode_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActionPhaseExited); \
	DECLARE_FUNCTION(execOnActionPhaseStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActionPhaseExited); \
	DECLARE_FUNCTION(execOnActionPhaseStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMissionGameMode(); \
	friend struct Z_Construct_UClass_ASBZMissionGameMode_Statics; \
public: \
	DECLARE_CLASS(ASBZMissionGameMode, ASBZGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMissionGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZMissionGameMode(); \
	friend struct Z_Construct_UClass_ASBZMissionGameMode_Statics; \
public: \
	DECLARE_CLASS(ASBZMissionGameMode, ASBZGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMissionGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMissionGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMissionGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMissionGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMissionGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMissionGameMode(ASBZMissionGameMode&&); \
	NO_API ASBZMissionGameMode(const ASBZMissionGameMode&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMissionGameMode(ASBZMissionGameMode&&); \
	NO_API ASBZMissionGameMode(const ASBZMissionGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMissionGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMissionGameMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMissionGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnManager() { return STRUCT_OFFSET(ASBZMissionGameMode, SpawnManager); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityManager() { return STRUCT_OFFSET(ASBZMissionGameMode, AIVisibilityManager); } \
	FORCEINLINE static uint32 __PPO__CoverPointManager() { return STRUCT_OFFSET(ASBZMissionGameMode, CoverPointManager); } \
	FORCEINLINE static uint32 __PPO__FirePermissionManager() { return STRUCT_OFFSET(ASBZMissionGameMode, FirePermissionManager); } \
	FORCEINLINE static uint32 __PPO__ReconnectPlayerStateDataArray() { return STRUCT_OFFSET(ASBZMissionGameMode, ReconnectPlayerStateDataArray); } \
	FORCEINLINE static uint32 __PPO__MaxInactivePlayers() { return STRUCT_OFFSET(ASBZMissionGameMode, MaxInactivePlayers); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMissionGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMissionGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
