// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAIController;
class USBZAIOrder;
#ifdef STARBREEZE_SBZAgilityPawnSpawnPredefined_generated_h
#error "SBZAgilityPawnSpawnPredefined.generated.h already included, missing '#pragma once' in SBZAgilityPawnSpawnPredefined.h"
#endif
#define STARBREEZE_SBZAgilityPawnSpawnPredefined_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnedPawnOrderPushed); \
	DECLARE_FUNCTION(execUpdateAgilityTrajectory);


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnedPawnOrderPushed); \
	DECLARE_FUNCTION(execUpdateAgilityTrajectory);


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAgilityPawnSpawnPredefined(); \
	friend struct Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics; \
public: \
	DECLARE_CLASS(ASBZAgilityPawnSpawnPredefined, ASBZPawnSpawnPredefined, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAgilityPawnSpawnPredefined) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAgilityPawnSpawnPredefined*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZAgilityPawnSpawnPredefined(); \
	friend struct Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics; \
public: \
	DECLARE_CLASS(ASBZAgilityPawnSpawnPredefined, ASBZPawnSpawnPredefined, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAgilityPawnSpawnPredefined) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAgilityPawnSpawnPredefined*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAgilityPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAgilityPawnSpawnPredefined) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAgilityPawnSpawnPredefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAgilityPawnSpawnPredefined); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAgilityPawnSpawnPredefined(ASBZAgilityPawnSpawnPredefined&&); \
	NO_API ASBZAgilityPawnSpawnPredefined(const ASBZAgilityPawnSpawnPredefined&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAgilityPawnSpawnPredefined(ASBZAgilityPawnSpawnPredefined&&); \
	NO_API ASBZAgilityPawnSpawnPredefined(const ASBZAgilityPawnSpawnPredefined&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAgilityPawnSpawnPredefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAgilityPawnSpawnPredefined); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAgilityPawnSpawnPredefined)


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ForcedMontage() { return STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, ForcedMontage); } \
	FORCEINLINE static uint32 __PPO__bUseAnimationToComputeEnd() { return STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, bUseAnimationToComputeEnd); } \
	FORCEINLINE static uint32 __PPO__AgilityType() { return STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, AgilityType); } \
	FORCEINLINE static uint32 __PPO__NavLinkAgilityComponent() { return STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, NavLinkAgilityComponent); } \
	FORCEINLINE static uint32 __PPO__NavigationLink() { return STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, NavigationLink); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAgilityPawnSpawnPredefined>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAgilityPawnSpawnPredefined_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
