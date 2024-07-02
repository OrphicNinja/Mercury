// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPreMatchLobbyStatus : uint8;
struct FUniqueNetIdRepl;
struct FSBZMissionInfo;
struct FPD3PlayerLoadout;
struct FSoftObjectPath;
enum class ESBZFirstPartyPlatform : uint8;
enum class ESBZPlatform : uint8;
enum class ESBZOnlineCode : uint8;
struct FSBZSlotData;
struct FSBZPlayerSlotInfo;
struct FSBZLobbyCharacterInfo;
enum class ESBZSlotStatus : uint8;
#ifdef STARBREEZE_SBZBeaconActionPhaseClient_generated_h
#error "SBZBeaconActionPhaseClient.generated.h already included, missing '#pragma once' in SBZBeaconActionPhaseClient.h"
#endif
#define STARBREEZE_SBZBeaconActionPhaseClient_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_RPC_WRAPPERS \
	virtual void ClientForceReadyButtonByServer_Implementation(); \
	virtual void ClientInitializeTravel_Implementation(); \
	virtual void ClientJoinPartyByCode_Implementation(const FString& PartyCode); \
	virtual void ClientPlayerReadyAck_Implementation(bool bIsReady); \
	virtual void ClientPlayerToReadyAck_Implementation(); \
	virtual void ClientPreMatchLobbyStatusUpdated_Implementation(ESBZPreMatchLobbyStatus InStatus); \
	virtual void ClientPreplanningAssetAdded_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual void ClientPreplanningAssetRejected_Implementation(); \
	virtual void ClientPreplanningAssetRemoved_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientReserveSlotAck_Implementation(bool bWasSuccessful, FSBZMissionInfo const& InMissionInfo); \
	virtual void ClientRestartPreMatchTimer_Implementation(float PreMatchReadyTimeLimit); \
	virtual void ClientRestartPreTravelTimer_Implementation(float PreTravelTimeLimit); \
	virtual void ClientSetGamePort_Implementation(int32 GamePort, const FString& ServerVersion, const FString& GameSessionId); \
	virtual void ClientSetPlayerLoadout_Implementation(FUniqueNetIdRepl const& InPlayerId, FPD3PlayerLoadout const& InLoadout, const FSoftObjectPath InSelectedCharacter, const ESBZFirstPartyPlatform FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled); \
	virtual void ClientStartTravelAck_Implementation(ESBZOnlineCode const& Result); \
	virtual void ClientStartWaitingPlayersLoadingComplete_Implementation(); \
	virtual void ClientUpdateSlotsData_Implementation(TArray<FSBZSlotData> const& InSlotsData); \
	virtual void ClientUpdateStayAsPartyList_Implementation(TArray<FString> const& BackendPlayerIds); \
	virtual void NotifyMissionEnd_Implementation(); \
	virtual void ServerAddPreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual void ServerGetGamePort_Implementation(); \
	virtual void ServerNotifyStartTravel_Implementation(FUniqueNetIdRepl const& InPlayerIdStartTravel); \
	virtual void ServerPlayerToReadyAck_Implementation(); \
	virtual void ServerPlayerToReadyReceive_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerRemovePreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual bool ServerReserveSlot_Validate(TArray<FSBZPlayerSlotInfo> const& ); \
	virtual void ServerReserveSlot_Implementation(TArray<FSBZPlayerSlotInfo> const& InPlayers); \
	virtual void ServerSetPlayerCharactersArray_Implementation(FUniqueNetIdRepl const& InPlayerId, TArray<FSoftObjectPath> const& InPreferredPlayerCharacters, TArray<FSoftObjectPath> const& InInventoryPlayerCharacters); \
	virtual void ServerSetPlayerData_Implementation(FSBZSlotData const& InSlotData); \
	virtual bool ServerSetPlayerInfo_Validate(FSBZLobbyCharacterInfo const& ); \
	virtual void ServerSetPlayerInfo_Implementation(FSBZLobbyCharacterInfo const& PlayerInfo); \
	virtual void ServerSetPlayerLoadingComplete_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerSetPlayerLoadout_Implementation(FUniqueNetIdRepl const& InPlayerId, FPD3PlayerLoadout const& InLoadout, ESBZFirstPartyPlatform const& FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled); \
	virtual void ServerSetPlayerReady_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerSetPlayerUnready_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerSetSlotStatus_Implementation(FUniqueNetIdRepl const& InPlayerId, ESBZSlotStatus Status); \
	virtual void ServerTogglePlayerReady_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerUpdateGameSession_Implementation(); \
	virtual void ServerVoteStayAsParty_Implementation(); \
 \
	DECLARE_FUNCTION(execClientForceReadyButtonByServer); \
	DECLARE_FUNCTION(execClientInitializeTravel); \
	DECLARE_FUNCTION(execClientJoinPartyByCode); \
	DECLARE_FUNCTION(execClientPlayerReadyAck); \
	DECLARE_FUNCTION(execClientPlayerToReadyAck); \
	DECLARE_FUNCTION(execClientPreMatchLobbyStatusUpdated); \
	DECLARE_FUNCTION(execClientPreplanningAssetAdded); \
	DECLARE_FUNCTION(execClientPreplanningAssetRejected); \
	DECLARE_FUNCTION(execClientPreplanningAssetRemoved); \
	DECLARE_FUNCTION(execClientReserveSlotAck); \
	DECLARE_FUNCTION(execClientRestartPreMatchTimer); \
	DECLARE_FUNCTION(execClientRestartPreTravelTimer); \
	DECLARE_FUNCTION(execClientSetGamePort); \
	DECLARE_FUNCTION(execClientSetPlayerLoadout); \
	DECLARE_FUNCTION(execClientStartTravelAck); \
	DECLARE_FUNCTION(execClientStartWaitingPlayersLoadingComplete); \
	DECLARE_FUNCTION(execClientTravelConnectionTimeout); \
	DECLARE_FUNCTION(execClientUpdateSlotsData); \
	DECLARE_FUNCTION(execClientUpdateStayAsPartyList); \
	DECLARE_FUNCTION(execNotifyMissionEnd); \
	DECLARE_FUNCTION(execOnActiveLoadoutChanged); \
	DECLARE_FUNCTION(execOnRep_CharactersInfo); \
	DECLARE_FUNCTION(execSendActiveLoadout); \
	DECLARE_FUNCTION(execSendPlayerReady); \
	DECLARE_FUNCTION(execSendPlayerUnready); \
	DECLARE_FUNCTION(execSendPreplanningAssets); \
	DECLARE_FUNCTION(execSendTogglePlayerReady); \
	DECLARE_FUNCTION(execServerAddPreplanningAsset); \
	DECLARE_FUNCTION(execServerGetGamePort); \
	DECLARE_FUNCTION(execServerNotifyStartTravel); \
	DECLARE_FUNCTION(execServerPlayerToReady); \
	DECLARE_FUNCTION(execServerPlayerToReadyAck); \
	DECLARE_FUNCTION(execServerPlayerToReadyReceive); \
	DECLARE_FUNCTION(execServerRemovePreplanningAsset); \
	DECLARE_FUNCTION(execServerReserveSlot); \
	DECLARE_FUNCTION(execServerSetPlayerCharactersArray); \
	DECLARE_FUNCTION(execServerSetPlayerData); \
	DECLARE_FUNCTION(execServerSetPlayerInfo); \
	DECLARE_FUNCTION(execServerSetPlayerLoadingComplete); \
	DECLARE_FUNCTION(execServerSetPlayerLoadout); \
	DECLARE_FUNCTION(execServerSetPlayerReady); \
	DECLARE_FUNCTION(execServerSetPlayerUnready); \
	DECLARE_FUNCTION(execServerSetSlotStatus); \
	DECLARE_FUNCTION(execServerTogglePlayerReady); \
	DECLARE_FUNCTION(execServerUpdateGameSession); \
	DECLARE_FUNCTION(execServerVoteStayAsParty);


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientForceReadyButtonByServer_Implementation(); \
	virtual void ClientInitializeTravel_Implementation(); \
	virtual void ClientJoinPartyByCode_Implementation(const FString& PartyCode); \
	virtual void ClientPlayerReadyAck_Implementation(bool bIsReady); \
	virtual void ClientPlayerToReadyAck_Implementation(); \
	virtual void ClientPreMatchLobbyStatusUpdated_Implementation(ESBZPreMatchLobbyStatus InStatus); \
	virtual void ClientPreplanningAssetAdded_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual void ClientPreplanningAssetRejected_Implementation(); \
	virtual void ClientPreplanningAssetRemoved_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientReserveSlotAck_Implementation(bool bWasSuccessful, FSBZMissionInfo const& InMissionInfo); \
	virtual void ClientRestartPreMatchTimer_Implementation(float PreMatchReadyTimeLimit); \
	virtual void ClientRestartPreTravelTimer_Implementation(float PreTravelTimeLimit); \
	virtual void ClientSetGamePort_Implementation(int32 GamePort, const FString& ServerVersion, const FString& GameSessionId); \
	virtual void ClientSetPlayerLoadout_Implementation(FUniqueNetIdRepl const& InPlayerId, FPD3PlayerLoadout const& InLoadout, const FSoftObjectPath InSelectedCharacter, const ESBZFirstPartyPlatform FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled); \
	virtual void ClientStartTravelAck_Implementation(ESBZOnlineCode const& Result); \
	virtual void ClientStartWaitingPlayersLoadingComplete_Implementation(); \
	virtual void ClientUpdateSlotsData_Implementation(TArray<FSBZSlotData> const& InSlotsData); \
	virtual void ClientUpdateStayAsPartyList_Implementation(TArray<FString> const& BackendPlayerIds); \
	virtual void NotifyMissionEnd_Implementation(); \
	virtual void ServerAddPreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual void ServerGetGamePort_Implementation(); \
	virtual void ServerNotifyStartTravel_Implementation(FUniqueNetIdRepl const& InPlayerIdStartTravel); \
	virtual void ServerPlayerToReadyAck_Implementation(); \
	virtual void ServerPlayerToReadyReceive_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerRemovePreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual bool ServerReserveSlot_Validate(TArray<FSBZPlayerSlotInfo> const& ); \
	virtual void ServerReserveSlot_Implementation(TArray<FSBZPlayerSlotInfo> const& InPlayers); \
	virtual void ServerSetPlayerCharactersArray_Implementation(FUniqueNetIdRepl const& InPlayerId, TArray<FSoftObjectPath> const& InPreferredPlayerCharacters, TArray<FSoftObjectPath> const& InInventoryPlayerCharacters); \
	virtual void ServerSetPlayerData_Implementation(FSBZSlotData const& InSlotData); \
	virtual bool ServerSetPlayerInfo_Validate(FSBZLobbyCharacterInfo const& ); \
	virtual void ServerSetPlayerInfo_Implementation(FSBZLobbyCharacterInfo const& PlayerInfo); \
	virtual void ServerSetPlayerLoadingComplete_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerSetPlayerLoadout_Implementation(FUniqueNetIdRepl const& InPlayerId, FPD3PlayerLoadout const& InLoadout, ESBZFirstPartyPlatform const& FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled); \
	virtual void ServerSetPlayerReady_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerSetPlayerUnready_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerSetSlotStatus_Implementation(FUniqueNetIdRepl const& InPlayerId, ESBZSlotStatus Status); \
	virtual void ServerTogglePlayerReady_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerUpdateGameSession_Implementation(); \
	virtual void ServerVoteStayAsParty_Implementation(); \
 \
	DECLARE_FUNCTION(execClientForceReadyButtonByServer); \
	DECLARE_FUNCTION(execClientInitializeTravel); \
	DECLARE_FUNCTION(execClientJoinPartyByCode); \
	DECLARE_FUNCTION(execClientPlayerReadyAck); \
	DECLARE_FUNCTION(execClientPlayerToReadyAck); \
	DECLARE_FUNCTION(execClientPreMatchLobbyStatusUpdated); \
	DECLARE_FUNCTION(execClientPreplanningAssetAdded); \
	DECLARE_FUNCTION(execClientPreplanningAssetRejected); \
	DECLARE_FUNCTION(execClientPreplanningAssetRemoved); \
	DECLARE_FUNCTION(execClientReserveSlotAck); \
	DECLARE_FUNCTION(execClientRestartPreMatchTimer); \
	DECLARE_FUNCTION(execClientRestartPreTravelTimer); \
	DECLARE_FUNCTION(execClientSetGamePort); \
	DECLARE_FUNCTION(execClientSetPlayerLoadout); \
	DECLARE_FUNCTION(execClientStartTravelAck); \
	DECLARE_FUNCTION(execClientStartWaitingPlayersLoadingComplete); \
	DECLARE_FUNCTION(execClientTravelConnectionTimeout); \
	DECLARE_FUNCTION(execClientUpdateSlotsData); \
	DECLARE_FUNCTION(execClientUpdateStayAsPartyList); \
	DECLARE_FUNCTION(execNotifyMissionEnd); \
	DECLARE_FUNCTION(execOnActiveLoadoutChanged); \
	DECLARE_FUNCTION(execOnRep_CharactersInfo); \
	DECLARE_FUNCTION(execSendActiveLoadout); \
	DECLARE_FUNCTION(execSendPlayerReady); \
	DECLARE_FUNCTION(execSendPlayerUnready); \
	DECLARE_FUNCTION(execSendPreplanningAssets); \
	DECLARE_FUNCTION(execSendTogglePlayerReady); \
	DECLARE_FUNCTION(execServerAddPreplanningAsset); \
	DECLARE_FUNCTION(execServerGetGamePort); \
	DECLARE_FUNCTION(execServerNotifyStartTravel); \
	DECLARE_FUNCTION(execServerPlayerToReady); \
	DECLARE_FUNCTION(execServerPlayerToReadyAck); \
	DECLARE_FUNCTION(execServerPlayerToReadyReceive); \
	DECLARE_FUNCTION(execServerRemovePreplanningAsset); \
	DECLARE_FUNCTION(execServerReserveSlot); \
	DECLARE_FUNCTION(execServerSetPlayerCharactersArray); \
	DECLARE_FUNCTION(execServerSetPlayerData); \
	DECLARE_FUNCTION(execServerSetPlayerInfo); \
	DECLARE_FUNCTION(execServerSetPlayerLoadingComplete); \
	DECLARE_FUNCTION(execServerSetPlayerLoadout); \
	DECLARE_FUNCTION(execServerSetPlayerReady); \
	DECLARE_FUNCTION(execServerSetPlayerUnready); \
	DECLARE_FUNCTION(execServerSetSlotStatus); \
	DECLARE_FUNCTION(execServerTogglePlayerReady); \
	DECLARE_FUNCTION(execServerUpdateGameSession); \
	DECLARE_FUNCTION(execServerVoteStayAsParty);


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_EVENT_PARMS \
	struct SBZBeaconActionPhaseClient_eventClientJoinPartyByCode_Parms \
	{ \
		FString PartyCode; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientPlayerReadyAck_Parms \
	{ \
		bool bIsReady; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientPreMatchLobbyStatusUpdated_Parms \
	{ \
		ESBZPreMatchLobbyStatus InStatus; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientPreplanningAssetAdded_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FString AccelByteItemSku; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientPreplanningAssetRemoved_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientReserveSlotAck_Parms \
	{ \
		bool bWasSuccessful; \
		FSBZMissionInfo InMissionInfo; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientRestartPreMatchTimer_Parms \
	{ \
		float PreMatchReadyTimeLimit; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientRestartPreTravelTimer_Parms \
	{ \
		float PreTravelTimeLimit; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientSetGamePort_Parms \
	{ \
		int32 GamePort; \
		FString ServerVersion; \
		FString GameSessionId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FPD3PlayerLoadout InLoadout; \
		FSoftObjectPath InSelectedCharacter; \
		ESBZFirstPartyPlatform FirstPartyPlatform; \
		ESBZPlatform InPlatform; \
		int32 InInfamyLevel; \
		FString AccelByteUserName; \
		FString AccelByteDisplayName; \
		bool bCrossPlayEnabled; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientStartTravelAck_Parms \
	{ \
		ESBZOnlineCode Result; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientUpdateSlotsData_Parms \
	{ \
		TArray<FSBZSlotData> InSlotsData; \
	}; \
	struct SBZBeaconActionPhaseClient_eventClientUpdateStayAsPartyList_Parms \
	{ \
		TArray<FString> BackendPlayerIds; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerAddPreplanningAsset_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FString AccelByteItemSku; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerNotifyStartTravel_Parms \
	{ \
		FUniqueNetIdRepl InPlayerIdStartTravel; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerPlayerToReadyReceive_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerRemovePreplanningAsset_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerReserveSlot_Parms \
	{ \
		TArray<FSBZPlayerSlotInfo> InPlayers; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerCharactersArray_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		TArray<FSoftObjectPath> InPreferredPlayerCharacters; \
		TArray<FSoftObjectPath> InInventoryPlayerCharacters; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerData_Parms \
	{ \
		FSBZSlotData InSlotData; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerInfo_Parms \
	{ \
		FSBZLobbyCharacterInfo PlayerInfo; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerLoadingComplete_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FPD3PlayerLoadout InLoadout; \
		ESBZFirstPartyPlatform FirstPartyPlatform; \
		ESBZPlatform InPlatform; \
		int32 InInfamyLevel; \
		FString AccelByteUserName; \
		FString AccelByteDisplayName; \
		bool bCrossPlayEnabled; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerReady_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetPlayerUnready_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerSetSlotStatus_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		ESBZSlotStatus Status; \
	}; \
	struct SBZBeaconActionPhaseClient_eventServerTogglePlayerReady_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBeaconActionPhaseClient(); \
	friend struct Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics; \
public: \
	DECLARE_CLASS(ASBZBeaconActionPhaseClient, ASBZOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBeaconActionPhaseClient) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersInfo=NETFIELD_REP_START, \
		NETFIELD_REP_END=PlayersInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZBeaconActionPhaseClient(); \
	friend struct Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics; \
public: \
	DECLARE_CLASS(ASBZBeaconActionPhaseClient, ASBZOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZBeaconActionPhaseClient) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayersInfo=NETFIELD_REP_START, \
		NETFIELD_REP_END=PlayersInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZBeaconActionPhaseClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBeaconActionPhaseClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBeaconActionPhaseClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBeaconActionPhaseClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBeaconActionPhaseClient(ASBZBeaconActionPhaseClient&&); \
	NO_API ASBZBeaconActionPhaseClient(const ASBZBeaconActionPhaseClient&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZBeaconActionPhaseClient(ASBZBeaconActionPhaseClient&&); \
	NO_API ASBZBeaconActionPhaseClient(const ASBZBeaconActionPhaseClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZBeaconActionPhaseClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBeaconActionPhaseClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBeaconActionPhaseClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PinnedLoadouts() { return STRUCT_OFFSET(ASBZBeaconActionPhaseClient, PinnedLoadouts); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBeaconActionPhaseClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBeaconActionPhaseClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
