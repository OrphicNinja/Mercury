// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZLocalPlayerFeedback;
struct FVector;
class ASBZPlayerCharacter;
class AActor;
class APlayerController;
class APawn;
class ASBZPlayerState;
struct FRandomStream;
#ifdef STARBREEZE_SBZPlayerLibrary_generated_h
#error "SBZPlayerLibrary.generated.h already included, missing '#pragma once' in SBZPlayerLibrary.h"
#endif
#define STARBREEZE_SBZPlayerLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyCameraFeedbackToLocalPlayer); \
	DECLARE_FUNCTION(execGetAllSBZPlayerCharacters); \
	DECLARE_FUNCTION(execGetClosestPlayerToActor); \
	DECLARE_FUNCTION(execGetClosestPlayerToLocation); \
	DECLARE_FUNCTION(execGetLocalPlayerController); \
	DECLARE_FUNCTION(execGetLocalPlayerPawn); \
	DECLARE_FUNCTION(execGetLocalPlayerState); \
	DECLARE_FUNCTION(execGetNumAlivePlayers); \
	DECLARE_FUNCTION(execGetNumConnectedPlayers); \
	DECLARE_FUNCTION(execGetRandomPlayerCharacter); \
	DECLARE_FUNCTION(execGetRandomPlayerCharacterFromStream); \
	DECLARE_FUNCTION(execIsPlayerInRange);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyCameraFeedbackToLocalPlayer); \
	DECLARE_FUNCTION(execGetAllSBZPlayerCharacters); \
	DECLARE_FUNCTION(execGetClosestPlayerToActor); \
	DECLARE_FUNCTION(execGetClosestPlayerToLocation); \
	DECLARE_FUNCTION(execGetLocalPlayerController); \
	DECLARE_FUNCTION(execGetLocalPlayerPawn); \
	DECLARE_FUNCTION(execGetLocalPlayerState); \
	DECLARE_FUNCTION(execGetNumAlivePlayers); \
	DECLARE_FUNCTION(execGetNumConnectedPlayers); \
	DECLARE_FUNCTION(execGetRandomPlayerCharacter); \
	DECLARE_FUNCTION(execGetRandomPlayerCharacterFromStream); \
	DECLARE_FUNCTION(execIsPlayerInRange);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPlayerLibrary(); \
	friend struct Z_Construct_UClass_USBZPlayerLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPlayerLibrary(); \
	friend struct Z_Construct_UClass_USBZPlayerLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZPlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPlayerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPlayerLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPlayerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerLibrary(USBZPlayerLibrary&&); \
	NO_API USBZPlayerLibrary(const USBZPlayerLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPlayerLibrary(USBZPlayerLibrary&&); \
	NO_API USBZPlayerLibrary(const USBZPlayerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPlayerLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPlayerLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_17_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPlayerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
