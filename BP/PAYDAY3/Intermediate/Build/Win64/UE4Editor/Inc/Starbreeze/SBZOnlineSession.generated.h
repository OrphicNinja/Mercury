// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZMissionInfo;
class USBZLobbyLocalState;
struct FSBZLobbyCharacterInfoUi;
enum class ESBZOnlineSessionRequestType : uint8;
enum class ESBZServiceStatus : uint8;
#ifdef STARBREEZE_SBZOnlineSession_generated_h
#error "SBZOnlineSession.generated.h already included, missing '#pragma once' in SBZOnlineSession.h"
#endif
#define STARBREEZE_SBZOnlineSession_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBeaconMissionInfo); \
	DECLARE_FUNCTION(execGetFoundPlayersCount); \
	DECLARE_FUNCTION(execGetLobbyState); \
	DECLARE_FUNCTION(execGetMatchmakingRegion); \
	DECLARE_FUNCTION(execGetMenuEvent); \
	DECLARE_FUNCTION(execGetPartyMembersCount); \
	DECLARE_FUNCTION(execGetPlayersCount); \
	DECLARE_FUNCTION(execGetUiLobbyInfo); \
	DECLARE_FUNCTION(execHandleOnlinePlatformError); \
	DECLARE_FUNCTION(execIsLocalClientReady); \
	DECLARE_FUNCTION(execOnNetworkStatus); \
	DECLARE_FUNCTION(execSetLocalClientReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBeaconMissionInfo); \
	DECLARE_FUNCTION(execGetFoundPlayersCount); \
	DECLARE_FUNCTION(execGetLobbyState); \
	DECLARE_FUNCTION(execGetMatchmakingRegion); \
	DECLARE_FUNCTION(execGetMenuEvent); \
	DECLARE_FUNCTION(execGetPartyMembersCount); \
	DECLARE_FUNCTION(execGetPlayersCount); \
	DECLARE_FUNCTION(execGetUiLobbyInfo); \
	DECLARE_FUNCTION(execHandleOnlinePlatformError); \
	DECLARE_FUNCTION(execIsLocalClientReady); \
	DECLARE_FUNCTION(execOnNetworkStatus); \
	DECLARE_FUNCTION(execSetLocalClientReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZOnlineSession(); \
	friend struct Z_Construct_UClass_USBZOnlineSession_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSession, UOnlineSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSession) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUSBZOnlineSession(); \
	friend struct Z_Construct_UClass_USBZOnlineSession_Statics; \
public: \
	DECLARE_CLASS(USBZOnlineSession, UOnlineSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZOnlineSession) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZOnlineSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZOnlineSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSession(USBZOnlineSession&&); \
	NO_API USBZOnlineSession(const USBZOnlineSession&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZOnlineSession(USBZOnlineSession&&); \
	NO_API USBZOnlineSession(const USBZOnlineSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZOnlineSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZOnlineSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZOnlineSession)


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHostPartyByDefault() { return STRUCT_OFFSET(USBZOnlineSession, bHostPartyByDefault); } \
	FORCEINLINE static uint32 __PPO__GameRecordsManager() { return STRUCT_OFFSET(USBZOnlineSession, GameRecordsManager); } \
	FORCEINLINE static uint32 __PPO__BlockedPlayerManager() { return STRUCT_OFFSET(USBZOnlineSession, BlockedPlayerManager); } \
	FORCEINLINE static uint32 __PPO__AvatarCache() { return STRUCT_OFFSET(USBZOnlineSession, AvatarCache); }


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_47_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZOnlineSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnlineSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
