// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZActorContainer;
struct FVector;
class AActor;
#ifdef STARBREEZE_SBZActorContainerLibrary_generated_h
#error "SBZActorContainerLibrary.generated.h already included, missing '#pragma once' in SBZActorContainerLibrary.h"
#endif
#define STARBREEZE_SBZActorContainerLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindNearbyActorsFromContainer); \
	DECLARE_FUNCTION(execFindNearestActorFromContainer);


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindNearbyActorsFromContainer); \
	DECLARE_FUNCTION(execFindNearestActorFromContainer);


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZActorContainerLibrary(); \
	friend struct Z_Construct_UClass_USBZActorContainerLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZActorContainerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActorContainerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZActorContainerLibrary(); \
	friend struct Z_Construct_UClass_USBZActorContainerLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZActorContainerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActorContainerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZActorContainerLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActorContainerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActorContainerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActorContainerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActorContainerLibrary(USBZActorContainerLibrary&&); \
	NO_API USBZActorContainerLibrary(const USBZActorContainerLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActorContainerLibrary(USBZActorContainerLibrary&&); \
	NO_API USBZActorContainerLibrary(const USBZActorContainerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActorContainerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActorContainerLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZActorContainerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZActorContainerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActorContainerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
