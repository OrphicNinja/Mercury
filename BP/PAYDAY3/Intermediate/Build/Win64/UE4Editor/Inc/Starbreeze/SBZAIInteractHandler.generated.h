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
#ifdef STARBREEZE_SBZAIInteractHandler_generated_h
#error "SBZAIInteractHandler.generated.h already included, missing '#pragma once' in SBZAIInteractHandler.h"
#endif
#define STARBREEZE_SBZAIInteractHandler_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionCompleted); \
	DECLARE_FUNCTION(execOnInteractionStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionCompleted); \
	DECLARE_FUNCTION(execOnInteractionStarted);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAIInteractHandler(); \
	friend struct Z_Construct_UClass_USBZAIInteractHandler_Statics; \
public: \
	DECLARE_CLASS(USBZAIInteractHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIInteractHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAIInteractHandler(); \
	friend struct Z_Construct_UClass_USBZAIInteractHandler_Statics; \
public: \
	DECLARE_CLASS(USBZAIInteractHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIInteractHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIInteractHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIInteractHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIInteractHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIInteractHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIInteractHandler(USBZAIInteractHandler&&); \
	NO_API USBZAIInteractHandler(const USBZAIInteractHandler&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIInteractHandler(USBZAIInteractHandler&&); \
	NO_API USBZAIInteractHandler(const USBZAIInteractHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIInteractHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIInteractHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAIInteractHandler)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIInteractHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIInteractHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
