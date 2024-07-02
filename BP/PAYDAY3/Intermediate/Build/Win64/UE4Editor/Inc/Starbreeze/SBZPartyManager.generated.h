// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineJoinType : uint8;
struct FSBZPartyMember;
class UObject;
class USBZPartyManager;
#ifdef STARBREEZE_SBZPartyManager_generated_h
#error "SBZPartyManager.generated.h already included, missing '#pragma once' in SBZPartyManager.h"
#endif
#define STARBREEZE_SBZPartyManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLobbyType); \
	DECLARE_FUNCTION(execGetPartyLeader); \
	DECLARE_FUNCTION(execGetPartyManager); \
	DECLARE_FUNCTION(execGetPartyPlayersNumber); \
	DECLARE_FUNCTION(execIsMatchmakingRequestedByPartyLeader); \
	DECLARE_FUNCTION(execSendJoinPublicChatChannel); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSendPrivateMessage); \
	DECLARE_FUNCTION(execSendPublicMessage); \
	DECLARE_FUNCTION(execSetLobbyType);


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLobbyType); \
	DECLARE_FUNCTION(execGetPartyLeader); \
	DECLARE_FUNCTION(execGetPartyManager); \
	DECLARE_FUNCTION(execGetPartyPlayersNumber); \
	DECLARE_FUNCTION(execIsMatchmakingRequestedByPartyLeader); \
	DECLARE_FUNCTION(execSendJoinPublicChatChannel); \
	DECLARE_FUNCTION(execSendPartyMessage); \
	DECLARE_FUNCTION(execSendPrivateMessage); \
	DECLARE_FUNCTION(execSendPublicMessage); \
	DECLARE_FUNCTION(execSetLobbyType);


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPartyManager(); \
	friend struct Z_Construct_UClass_USBZPartyManager_Statics; \
public: \
	DECLARE_CLASS(USBZPartyManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPartyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPartyManager(); \
	friend struct Z_Construct_UClass_USBZPartyManager_Statics; \
public: \
	DECLARE_CLASS(USBZPartyManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPartyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPartyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPartyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPartyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPartyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPartyManager(USBZPartyManager&&); \
	NO_API USBZPartyManager(const USBZPartyManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPartyManager(USBZPartyManager&&); \
	NO_API USBZPartyManager(const USBZPartyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPartyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPartyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPartyManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PartyId() { return STRUCT_OFFSET(USBZPartyManager, PartyId); } \
	FORCEINLINE static uint32 __PPO__PartyCode() { return STRUCT_OFFSET(USBZPartyManager, PartyCode); } \
	FORCEINLINE static uint32 __PPO__InvitesReceived() { return STRUCT_OFFSET(USBZPartyManager, InvitesReceived); } \
	FORCEINLINE static uint32 __PPO__InvitesSent() { return STRUCT_OFFSET(USBZPartyManager, InvitesSent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_24_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPartyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPartyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
