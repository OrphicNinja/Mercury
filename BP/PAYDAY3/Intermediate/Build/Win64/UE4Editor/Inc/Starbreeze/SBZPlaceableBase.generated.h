// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STARBREEZE_SBZPlaceableBase_generated_h
#error "SBZPlaceableBase.generated.h already included, missing '#pragma once' in SBZPlaceableBase.h"
#endif
#define STARBREEZE_SBZPlaceableBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableBase(); \
	friend struct Z_Construct_UClass_ASBZPlaceableBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableBase, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlaceableBase*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableBase(); \
	friend struct Z_Construct_UClass_ASBZPlaceableBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableBase, ASBZEquippable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlaceableBase*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableBase(ASBZPlaceableBase&&); \
	NO_API ASBZPlaceableBase(const ASBZPlaceableBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableBase(ASBZPlaceableBase&&); \
	NO_API ASBZPlaceableBase(const ASBZPlaceableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttractComment() { return STRUCT_OFFSET(ASBZPlaceableBase, AttractComment); } \
	FORCEINLINE static uint32 __PPO__AttractCommentPriority() { return STRUCT_OFFSET(ASBZPlaceableBase, AttractCommentPriority); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZPlaceableBase, Interactable); } \
	FORCEINLINE static uint32 __PPO__Outline() { return STRUCT_OFFSET(ASBZPlaceableBase, Outline); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZPlaceableBase, AttractorComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
