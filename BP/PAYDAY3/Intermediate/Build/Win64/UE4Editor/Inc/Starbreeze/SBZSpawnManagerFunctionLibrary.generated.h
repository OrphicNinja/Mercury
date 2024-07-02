// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZActorSpawnRequestHandle;
struct FSBZActorSpawnRequest;
enum class ESBZSpawnRequestStatus : uint8;
class AActor;
struct FSBZPawnSpawnRequestHandle;
class APawn;
struct FSBZPawnSpawnRequest;
class UObject;
struct FSBZSpawnRequestOptions;
struct FLatentActionInfo;
#ifdef STARBREEZE_SBZSpawnManagerFunctionLibrary_generated_h
#error "SBZSpawnManagerFunctionLibrary.generated.h already included, missing '#pragma once' in SBZSpawnManagerFunctionLibrary.h"
#endif
#define STARBREEZE_SBZSpawnManagerFunctionLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActorRequest); \
	DECLARE_FUNCTION(execGetActorRequestCount); \
	DECLARE_FUNCTION(execGetActorRequestStatus); \
	DECLARE_FUNCTION(execGetCreatedActors); \
	DECLARE_FUNCTION(execGetCreatedPawns); \
	DECLARE_FUNCTION(execGetPawnRequest); \
	DECLARE_FUNCTION(execGetPawnRequestCount); \
	DECLARE_FUNCTION(execGetPawnRequestStatus); \
	DECLARE_FUNCTION(execRequestActor); \
	DECLARE_FUNCTION(execRequestPawn); \
	DECLARE_FUNCTION(execWaitForActorRequest); \
	DECLARE_FUNCTION(execWaitForPawnRequest);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorRequest); \
	DECLARE_FUNCTION(execGetActorRequestCount); \
	DECLARE_FUNCTION(execGetActorRequestStatus); \
	DECLARE_FUNCTION(execGetCreatedActors); \
	DECLARE_FUNCTION(execGetCreatedPawns); \
	DECLARE_FUNCTION(execGetPawnRequest); \
	DECLARE_FUNCTION(execGetPawnRequestCount); \
	DECLARE_FUNCTION(execGetPawnRequestStatus); \
	DECLARE_FUNCTION(execRequestActor); \
	DECLARE_FUNCTION(execRequestPawn); \
	DECLARE_FUNCTION(execWaitForActorRequest); \
	DECLARE_FUNCTION(execWaitForPawnRequest);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSpawnManagerFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnManagerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnManagerFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSpawnManagerFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnManagerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnManagerFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnManagerFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnManagerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnManagerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnManagerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnManagerFunctionLibrary(USBZSpawnManagerFunctionLibrary&&); \
	NO_API USBZSpawnManagerFunctionLibrary(const USBZSpawnManagerFunctionLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnManagerFunctionLibrary(USBZSpawnManagerFunctionLibrary&&); \
	NO_API USBZSpawnManagerFunctionLibrary(const USBZSpawnManagerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnManagerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnManagerFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSpawnManagerFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_21_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSpawnManagerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnManagerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
