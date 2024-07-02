// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZBlockedPlayerManager;
 struct FSBZFriendListEntry;
#ifdef STARBREEZE_SBZBlockedPlayerManager_generated_h
#error "SBZBlockedPlayerManager.generated.h already included, missing '#pragma once' in SBZBlockedPlayerManager.h"
#endif
#define STARBREEZE_SBZBlockedPlayerManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetBlockedPlayers); \
	DECLARE_FUNCTION(execIsPlayerBlocked); \
	DECLARE_FUNCTION(execOnBlockedPlayersUpdated); \
	DECLARE_FUNCTION(execOnPlatformUserInitialized); \
	DECLARE_FUNCTION(execXsxBlockListChangeTimer);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetBlockedPlayers); \
	DECLARE_FUNCTION(execIsPlayerBlocked); \
	DECLARE_FUNCTION(execOnBlockedPlayersUpdated); \
	DECLARE_FUNCTION(execOnPlatformUserInitialized); \
	DECLARE_FUNCTION(execXsxBlockListChangeTimer);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBlockedPlayerManager(); \
	friend struct Z_Construct_UClass_USBZBlockedPlayerManager_Statics; \
public: \
	DECLARE_CLASS(USBZBlockedPlayerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlockedPlayerManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBlockedPlayerManager(); \
	friend struct Z_Construct_UClass_USBZBlockedPlayerManager_Statics; \
public: \
	DECLARE_CLASS(USBZBlockedPlayerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlockedPlayerManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBlockedPlayerManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBlockedPlayerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlockedPlayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlockedPlayerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlockedPlayerManager(USBZBlockedPlayerManager&&); \
	NO_API USBZBlockedPlayerManager(const USBZBlockedPlayerManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlockedPlayerManager(USBZBlockedPlayerManager&&); \
	NO_API USBZBlockedPlayerManager(const USBZBlockedPlayerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlockedPlayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlockedPlayerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBlockedPlayerManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlatformsBlockedPlayersInfo() { return STRUCT_OFFSET(USBZBlockedPlayerManager, PlatformsBlockedPlayersInfo); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBlockedPlayerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBlockedPlayerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
