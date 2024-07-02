// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnlineSessionUtils_generated_h
#error "SBZOnlineSessionUtils.generated.h already included, missing '#pragma once' in SBZOnlineSessionUtils.h"
#endif
#define STARBREEZE_SBZOnlineSessionUtils_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActionPhaseClient); \
	DECLARE_FUNCTION(execIsActionPhaseHost); \
	DECLARE_FUNCTION(execIsInParty); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsLobbyClient); \
	DECLARE_FUNCTION(execIsLobbyHost); \
	DECLARE_FUNCTION(execIsPartyClient); \
	DECLARE_FUNCTION(execIsPartyOwner);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActionPhaseClient); \
	DECLARE_FUNCTION(execIsActionPhaseHost); \
	DECLARE_FUNCTION(execIsInParty); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsLobbyClient); \
	DECLARE_FUNCTION(execIsLobbyHost); \
	DECLARE_FUNCTION(execIsPartyClient); \
	DECLARE_FUNCTION(execIsPartyOwner);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineSessionUtils(); \
	friend struct Z_Construct_UClass_USBZOnlineSessionUtils_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSessionUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSessionUtils) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineSessionUtils(); \
	friend struct Z_Construct_UClass_USBZOnlineSessionUtils_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSessionUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSessionUtils) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineSessionUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineSessionUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSessionUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSessionUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSessionUtils(USBZOnlineSessionUtils&&); \
	NO_API USBZOnlineSessionUtils(const USBZOnlineSessionUtils&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSessionUtils(USBZOnlineSessionUtils&&); \
	NO_API USBZOnlineSessionUtils(const USBZOnlineSessionUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSessionUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSessionUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineSessionUtils)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineSessionUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineSessionUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
