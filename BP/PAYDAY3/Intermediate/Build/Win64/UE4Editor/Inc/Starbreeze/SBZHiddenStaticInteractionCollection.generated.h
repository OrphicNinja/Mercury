// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZHiddenStaticInteractionCollection_generated_h
#error "SBZHiddenStaticInteractionCollection.generated.h already included, missing '#pragma once' in SBZHiddenStaticInteractionCollection.h"
#endif
#define STARBREEZE_SBZHiddenStaticInteractionCollection_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnKeyItemInteractionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnKeyItemInteractionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHiddenStaticInteractionCollection(); \
	friend struct Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics; \
public: \
	DECLARE_CLASS(ASBZHiddenStaticInteractionCollection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHiddenStaticInteractionCollection) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHiddenStaticInteractionCollection*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZHiddenStaticInteractionCollection(); \
	friend struct Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics; \
public: \
	DECLARE_CLASS(ASBZHiddenStaticInteractionCollection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHiddenStaticInteractionCollection) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHiddenStaticInteractionCollection*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHiddenStaticInteractionCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHiddenStaticInteractionCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHiddenStaticInteractionCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHiddenStaticInteractionCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHiddenStaticInteractionCollection(ASBZHiddenStaticInteractionCollection&&); \
	NO_API ASBZHiddenStaticInteractionCollection(const ASBZHiddenStaticInteractionCollection&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHiddenStaticInteractionCollection(ASBZHiddenStaticInteractionCollection&&); \
	NO_API ASBZHiddenStaticInteractionCollection(const ASBZHiddenStaticInteractionCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHiddenStaticInteractionCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHiddenStaticInteractionCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHiddenStaticInteractionCollection)


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfContainers() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, NumberOfContainers); } \
	FORCEINLINE static uint32 __PPO__SpawnLocationArray() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, SpawnLocationArray); } \
	FORCEINLINE static uint32 __PPO__TraceDirectionAndLength() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, TraceDirectionAndLength); } \
	FORCEINLINE static uint32 __PPO__ContainerYawRotationInterval() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ContainerYawRotationInterval); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, Seed); } \
	FORCEINLINE static uint32 __PPO__ItemContainerClass() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ItemContainerClass); } \
	FORCEINLINE static uint32 __PPO__ItemContainers() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ItemContainers); } \
	FORCEINLINE static uint32 __PPO__ContainerAfterKeyItemIndex() { return STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ContainerAfterKeyItemIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHiddenStaticInteractionCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHiddenStaticInteractionCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
