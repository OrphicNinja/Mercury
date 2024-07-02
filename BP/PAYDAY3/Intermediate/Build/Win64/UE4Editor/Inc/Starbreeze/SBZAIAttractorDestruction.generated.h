// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UActorComponent;
struct FSBZPropDamageContext;
#ifdef STARBREEZE_SBZAIAttractorDestruction_generated_h
#error "SBZAIAttractorDestruction.generated.h already included, missing '#pragma once' in SBZAIAttractorDestruction.h"
#endif
#define STARBREEZE_SBZAIAttractorDestruction_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_RPC_WRAPPERS \
	virtual void Multicast_BreakDestructionAttractor_Implementation(); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execBreakDestructionAttractor); \
	DECLARE_FUNCTION(execMulticast_BreakDestructionAttractor); \
	DECLARE_FUNCTION(execOnPropDamageHealth); \
	DECLARE_FUNCTION(execOnPropDamageHits);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_BreakDestructionAttractor_Implementation(); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execBreakDestructionAttractor); \
	DECLARE_FUNCTION(execMulticast_BreakDestructionAttractor); \
	DECLARE_FUNCTION(execOnPropDamageHealth); \
	DECLARE_FUNCTION(execOnPropDamageHits);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIAttractorDestruction(); \
	friend struct Z_Construct_UClass_ASBZAIAttractorDestruction_Statics; \
public: \
	DECLARE_CLASS(ASBZAIAttractorDestruction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIAttractorDestruction) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIAttractorDestruction*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIAttractorDestruction(); \
	friend struct Z_Construct_UClass_ASBZAIAttractorDestruction_Statics; \
public: \
	DECLARE_CLASS(ASBZAIAttractorDestruction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIAttractorDestruction) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIAttractorDestruction*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIAttractorDestruction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIAttractorDestruction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIAttractorDestruction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIAttractorDestruction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIAttractorDestruction(ASBZAIAttractorDestruction&&); \
	NO_API ASBZAIAttractorDestruction(const ASBZAIAttractorDestruction&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIAttractorDestruction(ASBZAIAttractorDestruction&&); \
	NO_API ASBZAIAttractorDestruction(const ASBZAIAttractorDestruction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIAttractorDestruction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIAttractorDestruction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIAttractorDestruction)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PropDamage() { return STRUCT_OFFSET(ASBZAIAttractorDestruction, PropDamage); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZAIAttractorDestruction, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__bIsAirNavOnDestruction() { return STRUCT_OFFSET(ASBZAIAttractorDestruction, bIsAirNavOnDestruction); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIAttractorDestruction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorDestruction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
