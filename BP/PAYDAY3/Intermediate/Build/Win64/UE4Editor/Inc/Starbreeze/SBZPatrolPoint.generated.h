// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPatrolPoint;
#ifdef STARBREEZE_SBZPatrolPoint_generated_h
#error "SBZPatrolPoint.generated.h already included, missing '#pragma once' in SBZPatrolPoint.h"
#endif
#define STARBREEZE_SBZPatrolPoint_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsTestingPoint);


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsTestingPoint);


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPatrolPoint(); \
	friend struct Z_Construct_UClass_ASBZPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(ASBZPatrolPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPatrolPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZPatrolPoint(); \
	friend struct Z_Construct_UClass_ASBZPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(ASBZPatrolPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPatrolPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPatrolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPatrolPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPatrolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPatrolPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPatrolPoint(ASBZPatrolPoint&&); \
	NO_API ASBZPatrolPoint(const ASBZPatrolPoint&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPatrolPoint(ASBZPatrolPoint&&); \
	NO_API ASBZPatrolPoint(const ASBZPatrolPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPatrolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPatrolPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPatrolPoint)


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaitTimeInterval() { return STRUCT_OFFSET(ASBZPatrolPoint, WaitTimeInterval); } \
	FORCEINLINE static uint32 __PPO__bUsePointRotation() { return STRUCT_OFFSET(ASBZPatrolPoint, bUsePointRotation); } \
	FORCEINLINE static uint32 __PPO__bIsTesting() { return STRUCT_OFFSET(ASBZPatrolPoint, bIsTesting); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPatrolPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPatrolPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
