// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZReplicationGraph_generated_h
#error "SBZReplicationGraph.generated.h already included, missing '#pragma once' in SBZReplicationGraph.h"
#endif
#define STARBREEZE_SBZReplicationGraph_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorDependencyAdded); \
	DECLARE_FUNCTION(execOnActorDependencyRemoved);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorDependencyAdded); \
	DECLARE_FUNCTION(execOnActorDependencyRemoved);


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZReplicationGraph(); \
	friend struct Z_Construct_UClass_USBZReplicationGraph_Statics; \
public: \
	DECLARE_CLASS(USBZReplicationGraph, UReplicationGraph, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReplicationGraph)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZReplicationGraph(); \
	friend struct Z_Construct_UClass_USBZReplicationGraph_Statics; \
public: \
	DECLARE_CLASS(USBZReplicationGraph, UReplicationGraph, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReplicationGraph)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZReplicationGraph(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZReplicationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReplicationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReplicationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReplicationGraph(USBZReplicationGraph&&); \
	NO_API USBZReplicationGraph(const USBZReplicationGraph&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReplicationGraph(USBZReplicationGraph&&); \
	NO_API USBZReplicationGraph(const USBZReplicationGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReplicationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReplicationGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZReplicationGraph)


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConfigRepClasses() { return STRUCT_OFFSET(USBZReplicationGraph, ConfigRepClasses); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZReplicationGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReplicationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
