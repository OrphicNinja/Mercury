// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAIUtilityScorer_generated_h
#error "SBZAIUtilityScorer.generated.h already included, missing '#pragma once' in SBZAIUtilityScorer.h"
#endif
#define STARBREEZE_SBZAIUtilityScorer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_RPC_WRAPPERS \
	virtual float CalcScoreBP_Implementation() const; \
 \
	DECLARE_FUNCTION(execCalcScoreBP);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float CalcScoreBP_Implementation() const; \
 \
	DECLARE_FUNCTION(execCalcScoreBP);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_EVENT_PARMS \
	struct SBZAIUtilityScorer_eventCalcScoreBP_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZAIUtilityScorer_eventCalcScoreBP_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZAIUtilityScorer_eventOnDeactivatedBP_Parms \
	{ \
		TEnumAsByte<EBTNodeResult::Type> NodeResult; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIUtilityScorer(); \
	friend struct Z_Construct_UClass_USBZAIUtilityScorer_Statics; \
public: \
	DECLARE_CLASS(USBZAIUtilityScorer, USBZAIScorer, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIUtilityScorer)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIUtilityScorer(); \
	friend struct Z_Construct_UClass_USBZAIUtilityScorer_Statics; \
public: \
	DECLARE_CLASS(USBZAIUtilityScorer, USBZAIScorer, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIUtilityScorer)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIUtilityScorer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIUtilityScorer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIUtilityScorer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIUtilityScorer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIUtilityScorer(USBZAIUtilityScorer&&); \
	NO_API USBZAIUtilityScorer(const USBZAIUtilityScorer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIUtilityScorer(USBZAIUtilityScorer&&); \
	NO_API USBZAIUtilityScorer(const USBZAIUtilityScorer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIUtilityScorer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIUtilityScorer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZAIUtilityScorer)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIUtilityScorer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIUtilityScorer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
