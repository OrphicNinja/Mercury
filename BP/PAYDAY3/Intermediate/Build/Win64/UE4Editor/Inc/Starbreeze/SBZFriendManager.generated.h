// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FSBZFriendListEntry;
class UObject;
class USBZFriendManager;
struct FSBZUIStackChangedEvent;
struct FSBZFriendListEntry;
#ifdef STARBREEZE_SBZFriendManager_generated_h
#error "SBZFriendManager.generated.h already included, missing '#pragma once' in SBZFriendManager.h"
#endif
#define STARBREEZE_SBZFriendManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccelByteFriendEntries); \
	DECLARE_FUNCTION(execGetBlockedPlayerEntries); \
	DECLARE_FUNCTION(execGetFriendManager); \
	DECLARE_FUNCTION(execGetIncomingFriendRequests); \
	DECLARE_FUNCTION(execGetOfflineFriendEntries); \
	DECLARE_FUNCTION(execGetOutgoingFriendRequests); \
	DECLARE_FUNCTION(execGetPlatformFriendEntries); \
	DECLARE_FUNCTION(execGetUserSearchEntries); \
	DECLARE_FUNCTION(execHandleStateEntered); \
	DECLARE_FUNCTION(execHandleUIStackChanged); \
	DECLARE_FUNCTION(execIsCrossplayAllowed); \
	DECLARE_FUNCTION(execIsPlayingOnSamePlatform); \
	DECLARE_FUNCTION(execOnBlockedPlayerChanged); \
	DECLARE_FUNCTION(execOnBlockPlayerComplete); \
	DECLARE_FUNCTION(execOnPlatformUserInitialized); \
	DECLARE_FUNCTION(execOnUnblockPlayerComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccelByteFriendEntries); \
	DECLARE_FUNCTION(execGetBlockedPlayerEntries); \
	DECLARE_FUNCTION(execGetFriendManager); \
	DECLARE_FUNCTION(execGetIncomingFriendRequests); \
	DECLARE_FUNCTION(execGetOfflineFriendEntries); \
	DECLARE_FUNCTION(execGetOutgoingFriendRequests); \
	DECLARE_FUNCTION(execGetPlatformFriendEntries); \
	DECLARE_FUNCTION(execGetUserSearchEntries); \
	DECLARE_FUNCTION(execHandleStateEntered); \
	DECLARE_FUNCTION(execHandleUIStackChanged); \
	DECLARE_FUNCTION(execIsCrossplayAllowed); \
	DECLARE_FUNCTION(execIsPlayingOnSamePlatform); \
	DECLARE_FUNCTION(execOnBlockedPlayerChanged); \
	DECLARE_FUNCTION(execOnBlockPlayerComplete); \
	DECLARE_FUNCTION(execOnPlatformUserInitialized); \
	DECLARE_FUNCTION(execOnUnblockPlayerComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZFriendManager(); \
	friend struct Z_Construct_UClass_USBZFriendManager_Statics; \
public: \
	DECLARE_CLASS(USBZFriendManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFriendManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZFriendManager(); \
	friend struct Z_Construct_UClass_USBZFriendManager_Statics; \
public: \
	DECLARE_CLASS(USBZFriendManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFriendManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZFriendManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZFriendManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFriendManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFriendManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFriendManager(USBZFriendManager&&); \
	NO_API USBZFriendManager(const USBZFriendManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFriendManager(USBZFriendManager&&); \
	NO_API USBZFriendManager(const USBZFriendManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFriendManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFriendManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZFriendManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZFriendManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFriendManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
