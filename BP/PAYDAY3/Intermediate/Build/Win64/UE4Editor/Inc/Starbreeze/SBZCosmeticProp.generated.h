// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZAnimationSpawnedActorCPD;
#ifdef STARBREEZE_SBZCosmeticProp_generated_h
#error "SBZCosmeticProp.generated.h already included, missing '#pragma once' in SBZCosmeticProp.h"
#endif
#define STARBREEZE_SBZCosmeticProp_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_RPC_WRAPPERS \
	virtual void OnDropped_Implementation(); \
	virtual void OnReceiveCPDs_Implementation(TArray<FSBZAnimationSpawnedActorCPD> const& CPDs); \
 \
	DECLARE_FUNCTION(execOnDropped); \
	DECLARE_FUNCTION(execOnReceiveCPDs);


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDropped_Implementation(); \
	virtual void OnReceiveCPDs_Implementation(TArray<FSBZAnimationSpawnedActorCPD> const& CPDs); \
 \
	DECLARE_FUNCTION(execOnDropped); \
	DECLARE_FUNCTION(execOnReceiveCPDs);


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_EVENT_PARMS \
	struct SBZCosmeticProp_eventOnReceiveCPDs_Parms \
	{ \
		TArray<FSBZAnimationSpawnedActorCPD> CPDs; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCosmeticProp(); \
	friend struct Z_Construct_UClass_ASBZCosmeticProp_Statics; \
public: \
	DECLARE_CLASS(ASBZCosmeticProp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCosmeticProp) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCosmeticProp*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASBZCosmeticProp(); \
	friend struct Z_Construct_UClass_ASBZCosmeticProp_Statics; \
public: \
	DECLARE_CLASS(ASBZCosmeticProp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCosmeticProp) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCosmeticProp*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCosmeticProp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCosmeticProp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCosmeticProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCosmeticProp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCosmeticProp(ASBZCosmeticProp&&); \
	NO_API ASBZCosmeticProp(const ASBZCosmeticProp&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCosmeticProp(ASBZCosmeticProp&&); \
	NO_API ASBZCosmeticProp(const ASBZCosmeticProp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCosmeticProp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCosmeticProp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCosmeticProp)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshArray() { return STRUCT_OFFSET(ASBZCosmeticProp, MeshArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCosmeticProp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCosmeticProp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
