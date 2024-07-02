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
class AActor;
#ifdef STARBREEZE_SBZPlaceableToolBase_generated_h
#error "SBZPlaceableToolBase.generated.h already included, missing '#pragma once' in SBZPlaceableToolBase.h"
#endif
#define STARBREEZE_SBZPlaceableToolBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlaceableToolBase(); \
	friend struct Z_Construct_UClass_ASBZPlaceableToolBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableToolBase, ASBZTool, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableToolBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlaceableToolBase(); \
	friend struct Z_Construct_UClass_ASBZPlaceableToolBase_Statics; \
public: \
	DECLARE_CLASS(ASBZPlaceableToolBase, ASBZTool, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlaceableToolBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlaceableToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableToolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableToolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableToolBase(ASBZPlaceableToolBase&&); \
	NO_API ASBZPlaceableToolBase(const ASBZPlaceableToolBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlaceableToolBase(ASBZPlaceableToolBase&&); \
	NO_API ASBZPlaceableToolBase(const ASBZPlaceableToolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlaceableToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlaceableToolBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlaceableToolBase)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetonationTickInterval() { return STRUCT_OFFSET(ASBZPlaceableToolBase, DetonationTickInterval); } \
	FORCEINLINE static uint32 __PPO__DetonationRange() { return STRUCT_OFFSET(ASBZPlaceableToolBase, DetonationRange); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZPlaceableToolBase, Interactable); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlaceableToolBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlaceableToolBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
