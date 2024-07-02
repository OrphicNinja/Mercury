// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class AActor;
class AController;
struct FVector;
class UDamageType;
class UPrimitiveComponent;
struct FRadialDamageParams;
#ifdef STARBREEZE_SBZSmallCosmeticDestruction_generated_h
#error "SBZSmallCosmeticDestruction.generated.h already included, missing '#pragma once' in SBZSmallCosmeticDestruction.h"
#endif
#define STARBREEZE_SBZSmallCosmeticDestruction_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateImpactPoint); \
	DECLARE_FUNCTION(execHandleTakeOverlapDamage); \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnHit);


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateImpactPoint); \
	DECLARE_FUNCTION(execHandleTakeOverlapDamage); \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleTakeRadialDamage); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnHit);


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSmallCosmeticDestruction(); \
	friend struct Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics; \
public: \
	DECLARE_CLASS(ASBZSmallCosmeticDestruction, ASBZNoCookDS, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSmallCosmeticDestruction)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZSmallCosmeticDestruction(); \
	friend struct Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics; \
public: \
	DECLARE_CLASS(ASBZSmallCosmeticDestruction, ASBZNoCookDS, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSmallCosmeticDestruction)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSmallCosmeticDestruction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSmallCosmeticDestruction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSmallCosmeticDestruction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSmallCosmeticDestruction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSmallCosmeticDestruction(ASBZSmallCosmeticDestruction&&); \
	NO_API ASBZSmallCosmeticDestruction(const ASBZSmallCosmeticDestruction&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSmallCosmeticDestruction(ASBZSmallCosmeticDestruction&&); \
	NO_API ASBZSmallCosmeticDestruction(const ASBZSmallCosmeticDestruction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSmallCosmeticDestruction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSmallCosmeticDestruction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSmallCosmeticDestruction)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bMoveToDebris() { return STRUCT_OFFSET(ASBZSmallCosmeticDestruction, bMoveToDebris); } \
	FORCEINLINE static uint32 __PPO__bDestroyWhenActivated() { return STRUCT_OFFSET(ASBZSmallCosmeticDestruction, bDestroyWhenActivated); } \
	FORCEINLINE static uint32 __PPO__bCanBeActivatedByPlayerOverlap() { return STRUCT_OFFSET(ASBZSmallCosmeticDestruction, bCanBeActivatedByPlayerOverlap); } \
	FORCEINLINE static uint32 __PPO__bReceivesDamageFromMelee() { return STRUCT_OFFSET(ASBZSmallCosmeticDestruction, bReceivesDamageFromMelee); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_16_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSmallCosmeticDestruction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSmallCosmeticDestruction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
