// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIScorer_generated_h
#error "SBZAIScorer.generated.h already included, missing '#pragma once' in SBZAIScorer.h"
#endif
#define STARBREEZE_SBZAIScorer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIScorer(); \
	friend struct Z_Construct_UClass_USBZAIScorer_Statics; \
public: \
	DECLARE_CLASS(USBZAIScorer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIScorer)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIScorer(); \
	friend struct Z_Construct_UClass_USBZAIScorer_Statics; \
public: \
	DECLARE_CLASS(USBZAIScorer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIScorer)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIScorer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIScorer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIScorer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIScorer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIScorer(USBZAIScorer&&); \
	NO_API USBZAIScorer(const USBZAIScorer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIScorer(USBZAIScorer&&); \
	NO_API USBZAIScorer(const USBZAIScorer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIScorer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIScorer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZAIScorer)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Weight() { return STRUCT_OFFSET(USBZAIScorer, Weight); } \
	FORCEINLINE static uint32 __PPO__SubScorers() { return STRUCT_OFFSET(USBZAIScorer, SubScorers); } \
	FORCEINLINE static uint32 __PPO__OutputCurve() { return STRUCT_OFFSET(USBZAIScorer, OutputCurve); } \
	FORCEINLINE static uint32 __PPO__bIsInversed() { return STRUCT_OFFSET(USBZAIScorer, bIsInversed); } \
	FORCEINLINE static uint32 __PPO__AIController() { return STRUCT_OFFSET(USBZAIScorer, AIController); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIScorer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIScorer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
