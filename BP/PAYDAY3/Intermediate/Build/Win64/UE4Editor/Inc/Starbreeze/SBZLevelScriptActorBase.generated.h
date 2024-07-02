// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZLevelScriptActorBase_generated_h
#error "SBZLevelScriptActorBase.generated.h already included, missing '#pragma once' in SBZLevelScriptActorBase.h"
#endif
#define STARBREEZE_SBZLevelScriptActorBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoteEventWithActor); \
	DECLARE_FUNCTION(execRemoteEventWithActorsArray); \
	DECLARE_FUNCTION(execRemoteEventWithBool); \
	DECLARE_FUNCTION(execRemoteEventWithInt);


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoteEventWithActor); \
	DECLARE_FUNCTION(execRemoteEventWithActorsArray); \
	DECLARE_FUNCTION(execRemoteEventWithBool); \
	DECLARE_FUNCTION(execRemoteEventWithInt);


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLevelScriptActorBase(); \
	friend struct Z_Construct_UClass_ASBZLevelScriptActorBase_Statics; \
public: \
	DECLARE_CLASS(ASBZLevelScriptActorBase, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLevelScriptActorBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZLevelScriptActorBase(); \
	friend struct Z_Construct_UClass_ASBZLevelScriptActorBase_Statics; \
public: \
	DECLARE_CLASS(ASBZLevelScriptActorBase, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLevelScriptActorBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLevelScriptActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLevelScriptActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLevelScriptActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLevelScriptActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLevelScriptActorBase(ASBZLevelScriptActorBase&&); \
	NO_API ASBZLevelScriptActorBase(const ASBZLevelScriptActorBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLevelScriptActorBase(ASBZLevelScriptActorBase&&); \
	NO_API ASBZLevelScriptActorBase(const ASBZLevelScriptActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLevelScriptActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLevelScriptActorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLevelScriptActorBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLevelScriptActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
