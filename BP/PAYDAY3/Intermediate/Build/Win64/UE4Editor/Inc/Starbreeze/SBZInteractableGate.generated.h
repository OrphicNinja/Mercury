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
enum class EPD3MiniGameState : uint8;
#ifdef STARBREEZE_SBZInteractableGate_generated_h
#error "SBZInteractableGate.generated.h already included, missing '#pragma once' in SBZInteractableGate.h"
#endif
#define STARBREEZE_SBZInteractableGate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckRejectedPredictedInteraction); \
	DECLARE_FUNCTION(execOnMiniGameStateChanged); \
	DECLARE_FUNCTION(execOnPredictedEndInteraction); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnStartInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckRejectedPredictedInteraction); \
	DECLARE_FUNCTION(execOnMiniGameStateChanged); \
	DECLARE_FUNCTION(execOnPredictedEndInteraction); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execOnStartInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZInteractableGate(); \
	friend struct Z_Construct_UClass_ASBZInteractableGate_Statics; \
public: \
	DECLARE_CLASS(ASBZInteractableGate, ASBZGate, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInteractableGate) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZInteractableGate*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZInteractableGate(); \
	friend struct Z_Construct_UClass_ASBZInteractableGate_Statics; \
public: \
	DECLARE_CLASS(ASBZInteractableGate, ASBZGate, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZInteractableGate) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZInteractableGate*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZInteractableGate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInteractableGate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInteractableGate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInteractableGate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInteractableGate(ASBZInteractableGate&&); \
	NO_API ASBZInteractableGate(const ASBZInteractableGate&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZInteractableGate(ASBZInteractableGate&&); \
	NO_API ASBZInteractableGate(const ASBZInteractableGate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZInteractableGate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZInteractableGate); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZInteractableGate)


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZInteractableGate, Interactable); } \
	FORCEINLINE static uint32 __PPO__MiniGameComponent() { return STRUCT_OFFSET(ASBZInteractableGate, MiniGameComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZInteractableGate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInteractableGate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
