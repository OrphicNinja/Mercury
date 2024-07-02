// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class UParticleSystem;
struct FVector;
struct FRotator;
class UParticleSystemComponent;
class UObject;
#ifdef STARBREEZE_SBZParticleLibrary_generated_h
#error "SBZParticleLibrary.generated.h already included, missing '#pragma once' in SBZParticleLibrary.h"
#endif
#define STARBREEZE_SBZParticleLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInternalSpawnPooledEmitterAtLocation); \
	DECLARE_FUNCTION(execSpawnPooledEmitterAtLocation);


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInternalSpawnPooledEmitterAtLocation); \
	DECLARE_FUNCTION(execSpawnPooledEmitterAtLocation);


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZParticleLibrary(); \
	friend struct Z_Construct_UClass_USBZParticleLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZParticleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZParticleLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZParticleLibrary(); \
	friend struct Z_Construct_UClass_USBZParticleLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZParticleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZParticleLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZParticleLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZParticleLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZParticleLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZParticleLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZParticleLibrary(USBZParticleLibrary&&); \
	NO_API USBZParticleLibrary(const USBZParticleLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZParticleLibrary(USBZParticleLibrary&&); \
	NO_API USBZParticleLibrary(const USBZParticleLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZParticleLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZParticleLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZParticleLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZParticleLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZParticleLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
