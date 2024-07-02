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
#ifdef STARBREEZE_SBZItemContainer_generated_h
#error "SBZItemContainer.generated.h already included, missing '#pragma once' in SBZItemContainer.h"
#endif
#define STARBREEZE_SBZItemContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZItemContainer(); \
	friend struct Z_Construct_UClass_ASBZItemContainer_Statics; \
public: \
	DECLARE_CLASS(ASBZItemContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZItemContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZItemContainer(); \
	friend struct Z_Construct_UClass_ASBZItemContainer_Statics; \
public: \
	DECLARE_CLASS(ASBZItemContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZItemContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZItemContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZItemContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZItemContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZItemContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZItemContainer(ASBZItemContainer&&); \
	NO_API ASBZItemContainer(const ASBZItemContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZItemContainer(ASBZItemContainer&&); \
	NO_API ASBZItemContainer(const ASBZItemContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZItemContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZItemContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZItemContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZItemContainer, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__ItemSpawnPointSelector() { return STRUCT_OFFSET(ASBZItemContainer, ItemSpawnPointSelector); } \
	FORCEINLINE static uint32 __PPO__HiddenItem() { return STRUCT_OFFSET(ASBZItemContainer, HiddenItem); } \
	FORCEINLINE static uint32 __PPO__OtherContainer() { return STRUCT_OFFSET(ASBZItemContainer, OtherContainer); } \
	FORCEINLINE static uint32 __PPO__bHasItem() { return STRUCT_OFFSET(ASBZItemContainer, bHasItem); } \
	FORCEINLINE static uint32 __PPO__bIsBeforeOtherContainer() { return STRUCT_OFFSET(ASBZItemContainer, bIsBeforeOtherContainer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZItemContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZItemContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
