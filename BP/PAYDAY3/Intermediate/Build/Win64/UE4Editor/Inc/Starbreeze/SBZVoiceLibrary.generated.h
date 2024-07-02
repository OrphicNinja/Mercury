// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZDialogDataAsset;
class AActor;
enum class ESBZPlayDialogResult : uint8;
class USBZVoiceCommentDataAsset;
struct FVector;
#ifdef STARBREEZE_SBZVoiceLibrary_generated_h
#error "SBZVoiceLibrary.generated.h already included, missing '#pragma once' in SBZVoiceLibrary.h"
#endif
#define STARBREEZE_SBZVoiceLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayDialog); \
	DECLARE_FUNCTION(execPlayDialogWithSuitablePlayers); \
	DECLARE_FUNCTION(execSayCommentWithClosestHeisterToActor); \
	DECLARE_FUNCTION(execSayCommentWithClosestHeisterToLocation);


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayDialog); \
	DECLARE_FUNCTION(execPlayDialogWithSuitablePlayers); \
	DECLARE_FUNCTION(execSayCommentWithClosestHeisterToActor); \
	DECLARE_FUNCTION(execSayCommentWithClosestHeisterToLocation);


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVoiceLibrary(); \
	friend struct Z_Construct_UClass_USBZVoiceLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZVoiceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVoiceLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVoiceLibrary(); \
	friend struct Z_Construct_UClass_USBZVoiceLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZVoiceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVoiceLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVoiceLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVoiceLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVoiceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVoiceLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVoiceLibrary(USBZVoiceLibrary&&); \
	NO_API USBZVoiceLibrary(const USBZVoiceLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVoiceLibrary(USBZVoiceLibrary&&); \
	NO_API USBZVoiceLibrary(const USBZVoiceLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVoiceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVoiceLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVoiceLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVoiceLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVoiceLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
