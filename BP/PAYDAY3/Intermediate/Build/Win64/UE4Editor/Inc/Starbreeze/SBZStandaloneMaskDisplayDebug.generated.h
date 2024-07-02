// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZStandaloneMaskDisplayDebug_generated_h
#error "SBZStandaloneMaskDisplayDebug.generated.h already included, missing '#pragma once' in SBZStandaloneMaskDisplayDebug.h"
#endif
#define STARBREEZE_SBZStandaloneMaskDisplayDebug_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleMaskStrapVisibility); \
	DECLARE_FUNCTION(execUpdateSprayCanTextureSizeMinus); \
	DECLARE_FUNCTION(execUpdateSprayCanTextureSizePlus);


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleMaskStrapVisibility); \
	DECLARE_FUNCTION(execUpdateSprayCanTextureSizeMinus); \
	DECLARE_FUNCTION(execUpdateSprayCanTextureSizePlus);


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZStandaloneMaskDisplayDebug(); \
	friend struct Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics; \
public: \
	DECLARE_CLASS(ASBZStandaloneMaskDisplayDebug, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStandaloneMaskDisplayDebug)


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZStandaloneMaskDisplayDebug(); \
	friend struct Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics; \
public: \
	DECLARE_CLASS(ASBZStandaloneMaskDisplayDebug, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStandaloneMaskDisplayDebug)


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZStandaloneMaskDisplayDebug(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStandaloneMaskDisplayDebug) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStandaloneMaskDisplayDebug); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStandaloneMaskDisplayDebug); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStandaloneMaskDisplayDebug(ASBZStandaloneMaskDisplayDebug&&); \
	NO_API ASBZStandaloneMaskDisplayDebug(const ASBZStandaloneMaskDisplayDebug&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStandaloneMaskDisplayDebug(ASBZStandaloneMaskDisplayDebug&&); \
	NO_API ASBZStandaloneMaskDisplayDebug(const ASBZStandaloneMaskDisplayDebug&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStandaloneMaskDisplayDebug); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStandaloneMaskDisplayDebug); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStandaloneMaskDisplayDebug)


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnTransform() { return STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, SpawnTransform); } \
	FORCEINLINE static uint32 __PPO__SpawnedMask() { return STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, SpawnedMask); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZStandaloneMaskDisplayDebug>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStandaloneMaskDisplayDebug_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
