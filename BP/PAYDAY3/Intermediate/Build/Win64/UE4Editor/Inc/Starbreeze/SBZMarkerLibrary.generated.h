// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZMarkerDataAsset;
struct FVector;
class USceneComponent;
#ifdef STARBREEZE_SBZMarkerLibrary_generated_h
#error "SBZMarkerLibrary.generated.h already included, missing '#pragma once' in SBZMarkerLibrary.h"
#endif
#define STARBREEZE_SBZMarkerLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddLocalMarker); \
	DECLARE_FUNCTION(execAddReplicatedMarker); \
	DECLARE_FUNCTION(execRemoveLocalMarker); \
	DECLARE_FUNCTION(execRemoveReplicatedMarker);


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddLocalMarker); \
	DECLARE_FUNCTION(execAddReplicatedMarker); \
	DECLARE_FUNCTION(execRemoveLocalMarker); \
	DECLARE_FUNCTION(execRemoveReplicatedMarker);


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMarkerLibrary(); \
	friend struct Z_Construct_UClass_USBZMarkerLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMarkerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMarkerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMarkerLibrary(); \
	friend struct Z_Construct_UClass_USBZMarkerLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMarkerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMarkerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMarkerLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMarkerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMarkerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMarkerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMarkerLibrary(USBZMarkerLibrary&&); \
	NO_API USBZMarkerLibrary(const USBZMarkerLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMarkerLibrary(USBZMarkerLibrary&&); \
	NO_API USBZMarkerLibrary(const USBZMarkerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMarkerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMarkerLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMarkerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMarkerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMarkerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
