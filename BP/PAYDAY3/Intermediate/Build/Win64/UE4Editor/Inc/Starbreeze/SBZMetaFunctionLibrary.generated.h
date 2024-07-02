// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSBZMetaEventData;
struct FSBZMetaEventModifierData;
enum class ESBZMetaEventType : uint8;
#ifdef STARBREEZE_SBZMetaFunctionLibrary_generated_h
#error "SBZMetaFunctionLibrary.generated.h already included, missing '#pragma once' in SBZMetaFunctionLibrary.h"
#endif
#define STARBREEZE_SBZMetaFunctionLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveMetaEvent); \
	DECLARE_FUNCTION(execGetActiveMetaEventModifiers); \
	DECLARE_FUNCTION(execGetActiveMetaEventType);


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveMetaEvent); \
	DECLARE_FUNCTION(execGetActiveMetaEventModifiers); \
	DECLARE_FUNCTION(execGetActiveMetaEventType);


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMetaFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZMetaFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMetaFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMetaFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMetaFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZMetaFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMetaFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMetaFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMetaFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMetaFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMetaFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMetaFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMetaFunctionLibrary(USBZMetaFunctionLibrary&&); \
	NO_API USBZMetaFunctionLibrary(const USBZMetaFunctionLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMetaFunctionLibrary(USBZMetaFunctionLibrary&&); \
	NO_API USBZMetaFunctionLibrary(const USBZMetaFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMetaFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMetaFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMetaFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMetaFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMetaFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
