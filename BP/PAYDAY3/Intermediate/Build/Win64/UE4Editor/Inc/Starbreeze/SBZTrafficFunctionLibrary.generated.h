// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ASBZTrafficSpline;
enum class ESBZTrafficNodeExec : uint8;
struct FLatentActionInfo;
class ASBZSpline;
struct FVector;
class USBZTrafficManager;
enum class ESBZTrafficNodeType : uint8;
struct FTransform;
class ASBZAerialVehicle;
class ASBZWheeledVehicle;
#ifdef STARBREEZE_SBZTrafficFunctionLibrary_generated_h
#error "SBZTrafficFunctionLibrary.generated.h already included, missing '#pragma once' in SBZTrafficFunctionLibrary.h"
#endif
#define STARBREEZE_SBZTrafficFunctionLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendEscapeVanRoute); \
	DECLARE_FUNCTION(execDriveEscapeVan); \
	DECLARE_FUNCTION(execGetLocationAlongPathWithinAngle); \
	DECLARE_FUNCTION(execGetTrafficManager); \
	DECLARE_FUNCTION(execGetTrafficSplineGroundTransform); \
	DECLARE_FUNCTION(execSetAndDriveAerialVehicleRoute); \
	DECLARE_FUNCTION(execSetAndDriveEscapeVanRoute); \
	DECLARE_FUNCTION(execSetEscapeVan); \
	DECLARE_FUNCTION(execSetEscapeVanRoute); \
	DECLARE_FUNCTION(execSpawnAndDriveSwatVan); \
	DECLARE_FUNCTION(execSpawnEscapeVan); \
	DECLARE_FUNCTION(execSpawnEscapeVanWithRoute);


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendEscapeVanRoute); \
	DECLARE_FUNCTION(execDriveEscapeVan); \
	DECLARE_FUNCTION(execGetLocationAlongPathWithinAngle); \
	DECLARE_FUNCTION(execGetTrafficManager); \
	DECLARE_FUNCTION(execGetTrafficSplineGroundTransform); \
	DECLARE_FUNCTION(execSetAndDriveAerialVehicleRoute); \
	DECLARE_FUNCTION(execSetAndDriveEscapeVanRoute); \
	DECLARE_FUNCTION(execSetEscapeVan); \
	DECLARE_FUNCTION(execSetEscapeVanRoute); \
	DECLARE_FUNCTION(execSpawnAndDriveSwatVan); \
	DECLARE_FUNCTION(execSpawnEscapeVan); \
	DECLARE_FUNCTION(execSpawnEscapeVanWithRoute);


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZTrafficFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZTrafficFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTrafficFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZTrafficFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZTrafficFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZTrafficFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTrafficFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTrafficFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTrafficFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTrafficFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTrafficFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTrafficFunctionLibrary(USBZTrafficFunctionLibrary&&); \
	NO_API USBZTrafficFunctionLibrary(const USBZTrafficFunctionLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTrafficFunctionLibrary(USBZTrafficFunctionLibrary&&); \
	NO_API USBZTrafficFunctionLibrary(const USBZTrafficFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTrafficFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTrafficFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZTrafficFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTrafficFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTrafficFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
