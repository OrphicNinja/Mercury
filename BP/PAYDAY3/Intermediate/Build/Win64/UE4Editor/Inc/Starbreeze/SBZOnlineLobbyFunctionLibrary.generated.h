// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZOnlineSession;
#ifdef STARBREEZE_SBZOnlineLobbyFunctionLibrary_generated_h
#error "SBZOnlineLobbyFunctionLibrary.generated.h already included, missing '#pragma once' in SBZOnlineLobbyFunctionLibrary.h"
#endif
#define STARBREEZE_SBZOnlineLobbyFunctionLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOnlineSession); \
	DECLARE_FUNCTION(execIsPlayerReady); \
	DECLARE_FUNCTION(execSetPlayerReady); \
	DECLARE_FUNCTION(execSetPlayerUnready); \
	DECLARE_FUNCTION(execTogglePlayerReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOnlineSession); \
	DECLARE_FUNCTION(execIsPlayerReady); \
	DECLARE_FUNCTION(execSetPlayerReady); \
	DECLARE_FUNCTION(execSetPlayerUnready); \
	DECLARE_FUNCTION(execTogglePlayerReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineLobbyFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineLobbyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineLobbyFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineLobbyFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineLobbyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineLobbyFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineLobbyFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineLobbyFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineLobbyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineLobbyFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineLobbyFunctionLibrary(USBZOnlineLobbyFunctionLibrary&&); \
	NO_API USBZOnlineLobbyFunctionLibrary(const USBZOnlineLobbyFunctionLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineLobbyFunctionLibrary(USBZOnlineLobbyFunctionLibrary&&); \
	NO_API USBZOnlineLobbyFunctionLibrary(const USBZOnlineLobbyFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineLobbyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineLobbyFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineLobbyFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineLobbyFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineLobbyFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
