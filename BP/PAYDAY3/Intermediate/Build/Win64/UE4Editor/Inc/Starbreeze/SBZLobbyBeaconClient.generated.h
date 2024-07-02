// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FSBZSlotData;
struct FSBZLobbyCharacterInfo;
#ifdef STARBREEZE_SBZLobbyBeaconClient_generated_h
#error "SBZLobbyBeaconClient.generated.h already included, missing '#pragma once' in SBZLobbyBeaconClient.h"
#endif
#define STARBREEZE_SBZLobbyBeaconClient_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_RPC_WRAPPERS \
	virtual void ClientAddSlot_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientFreeSlot_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientInitiateWaitActionPhase_Implementation(); \
	virtual void ClientPreplanningAssetAdded_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual void ClientPreplanningAssetRejected_Implementation(); \
	virtual void ClientPreplanningAssetRemoved_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientReserveSlotAck_Implementation(bool bWasSuccessful); \
	virtual void ClientStopWaitingOtherPlayers_Implementation(); \
	virtual void MulticastSlotUpdated_Implementation(FSBZSlotData InSlotData); \
	virtual void ServerAddPreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual bool ServerMoveToServerAck_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerMoveToServerAck_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual bool ServerPlayerToReadyReceive_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerPlayerToReadyReceive_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerRemovePreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual bool ServerReserveSlot_Validate(TArray<FUniqueNetIdRepl> const& ); \
	virtual void ServerReserveSlot_Implementation(TArray<FUniqueNetIdRepl> const& InPlayerIds); \
	virtual bool ServerSetPlayerAcceptedMatch_Validate(FUniqueNetIdRepl const& , bool ); \
	virtual void ServerSetPlayerAcceptedMatch_Implementation(FUniqueNetIdRepl const& InPlayerId, bool bIsConfirmed); \
	virtual bool ServerSetPlayerReady_Validate(FUniqueNetIdRepl const& , bool ); \
	virtual void ServerSetPlayerReady_Implementation(FUniqueNetIdRepl const& InPlayerId, bool bIsReady); \
	virtual bool ServerUpdatePlayerInfo_Validate(FSBZLobbyCharacterInfo const& ); \
	virtual void ServerUpdatePlayerInfo_Implementation(FSBZLobbyCharacterInfo const& PlayerInfo); \
	virtual void ServerUpdateSlot_Implementation(FUniqueNetIdRepl const& InPlayerId, FSBZSlotData InSlotData); \
 \
	DECLARE_FUNCTION(execClientAddSlot); \
	DECLARE_FUNCTION(execClientFreeSlot); \
	DECLARE_FUNCTION(execClientInitiateWaitActionPhase); \
	DECLARE_FUNCTION(execClientPreplanningAssetAdded); \
	DECLARE_FUNCTION(execClientPreplanningAssetRejected); \
	DECLARE_FUNCTION(execClientPreplanningAssetRemoved); \
	DECLARE_FUNCTION(execClientReserveSlotAck); \
	DECLARE_FUNCTION(execClientStopWaitingOtherPlayers); \
	DECLARE_FUNCTION(execMulticastSlotUpdated); \
	DECLARE_FUNCTION(execOnRep_LobbyState); \
	DECLARE_FUNCTION(execServerAddPreplanningAsset); \
	DECLARE_FUNCTION(execServerMoveToServerAck); \
	DECLARE_FUNCTION(execServerPlayerToReady); \
	DECLARE_FUNCTION(execServerPlayerToReadyReceive); \
	DECLARE_FUNCTION(execServerRemovePreplanningAsset); \
	DECLARE_FUNCTION(execServerReserveSlot); \
	DECLARE_FUNCTION(execServerSetPlayerAcceptedMatch); \
	DECLARE_FUNCTION(execServerSetPlayerReady); \
	DECLARE_FUNCTION(execServerUpdatePlayerInfo); \
	DECLARE_FUNCTION(execServerUpdateSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientAddSlot_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientFreeSlot_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientInitiateWaitActionPhase_Implementation(); \
	virtual void ClientPreplanningAssetAdded_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual void ClientPreplanningAssetRejected_Implementation(); \
	virtual void ClientPreplanningAssetRemoved_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ClientReserveSlotAck_Implementation(bool bWasSuccessful); \
	virtual void ClientStopWaitingOtherPlayers_Implementation(); \
	virtual void MulticastSlotUpdated_Implementation(FSBZSlotData InSlotData); \
	virtual void ServerAddPreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku); \
	virtual bool ServerMoveToServerAck_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerMoveToServerAck_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual bool ServerPlayerToReadyReceive_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerPlayerToReadyReceive_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual void ServerRemovePreplanningAsset_Implementation(FUniqueNetIdRepl const& InPlayerId); \
	virtual bool ServerReserveSlot_Validate(TArray<FUniqueNetIdRepl> const& ); \
	virtual void ServerReserveSlot_Implementation(TArray<FUniqueNetIdRepl> const& InPlayerIds); \
	virtual bool ServerSetPlayerAcceptedMatch_Validate(FUniqueNetIdRepl const& , bool ); \
	virtual void ServerSetPlayerAcceptedMatch_Implementation(FUniqueNetIdRepl const& InPlayerId, bool bIsConfirmed); \
	virtual bool ServerSetPlayerReady_Validate(FUniqueNetIdRepl const& , bool ); \
	virtual void ServerSetPlayerReady_Implementation(FUniqueNetIdRepl const& InPlayerId, bool bIsReady); \
	virtual bool ServerUpdatePlayerInfo_Validate(FSBZLobbyCharacterInfo const& ); \
	virtual void ServerUpdatePlayerInfo_Implementation(FSBZLobbyCharacterInfo const& PlayerInfo); \
	virtual void ServerUpdateSlot_Implementation(FUniqueNetIdRepl const& InPlayerId, FSBZSlotData InSlotData); \
 \
	DECLARE_FUNCTION(execClientAddSlot); \
	DECLARE_FUNCTION(execClientFreeSlot); \
	DECLARE_FUNCTION(execClientInitiateWaitActionPhase); \
	DECLARE_FUNCTION(execClientPreplanningAssetAdded); \
	DECLARE_FUNCTION(execClientPreplanningAssetRejected); \
	DECLARE_FUNCTION(execClientPreplanningAssetRemoved); \
	DECLARE_FUNCTION(execClientReserveSlotAck); \
	DECLARE_FUNCTION(execClientStopWaitingOtherPlayers); \
	DECLARE_FUNCTION(execMulticastSlotUpdated); \
	DECLARE_FUNCTION(execOnRep_LobbyState); \
	DECLARE_FUNCTION(execServerAddPreplanningAsset); \
	DECLARE_FUNCTION(execServerMoveToServerAck); \
	DECLARE_FUNCTION(execServerPlayerToReady); \
	DECLARE_FUNCTION(execServerPlayerToReadyReceive); \
	DECLARE_FUNCTION(execServerRemovePreplanningAsset); \
	DECLARE_FUNCTION(execServerReserveSlot); \
	DECLARE_FUNCTION(execServerSetPlayerAcceptedMatch); \
	DECLARE_FUNCTION(execServerSetPlayerReady); \
	DECLARE_FUNCTION(execServerUpdatePlayerInfo); \
	DECLARE_FUNCTION(execServerUpdateSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_EVENT_PARMS \
	struct SBZLobbyBeaconClient_eventClientAddSlot_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZLobbyBeaconClient_eventClientFreeSlot_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZLobbyBeaconClient_eventClientPreplanningAssetAdded_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FString AccelByteItemSku; \
	}; \
	struct SBZLobbyBeaconClient_eventClientPreplanningAssetRemoved_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZLobbyBeaconClient_eventClientReserveSlotAck_Parms \
	{ \
		bool bWasSuccessful; \
	}; \
	struct SBZLobbyBeaconClient_eventMulticastSlotUpdated_Parms \
	{ \
		FSBZSlotData InSlotData; \
	}; \
	struct SBZLobbyBeaconClient_eventServerAddPreplanningAsset_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FString AccelByteItemSku; \
	}; \
	struct SBZLobbyBeaconClient_eventServerMoveToServerAck_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZLobbyBeaconClient_eventServerPlayerToReadyReceive_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZLobbyBeaconClient_eventServerRemovePreplanningAsset_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
	}; \
	struct SBZLobbyBeaconClient_eventServerReserveSlot_Parms \
	{ \
		TArray<FUniqueNetIdRepl> InPlayerIds; \
	}; \
	struct SBZLobbyBeaconClient_eventServerSetPlayerAcceptedMatch_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		bool bIsConfirmed; \
	}; \
	struct SBZLobbyBeaconClient_eventServerSetPlayerReady_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		bool bIsReady; \
	}; \
	struct SBZLobbyBeaconClient_eventServerUpdatePlayerInfo_Parms \
	{ \
		FSBZLobbyCharacterInfo PlayerInfo; \
	}; \
	struct SBZLobbyBeaconClient_eventServerUpdateSlot_Parms \
	{ \
		FUniqueNetIdRepl InPlayerId; \
		FSBZSlotData InSlotData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLobbyBeaconClient(); \
	friend struct Z_Construct_UClass_ASBZLobbyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASBZLobbyBeaconClient, ASBZOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLobbyBeaconClient) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LobbyState=NETFIELD_REP_START, \
		NETFIELD_REP_END=LobbyState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZLobbyBeaconClient(); \
	friend struct Z_Construct_UClass_ASBZLobbyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASBZLobbyBeaconClient, ASBZOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLobbyBeaconClient) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LobbyState=NETFIELD_REP_START, \
		NETFIELD_REP_END=LobbyState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLobbyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLobbyBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLobbyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLobbyBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLobbyBeaconClient(ASBZLobbyBeaconClient&&); \
	NO_API ASBZLobbyBeaconClient(const ASBZLobbyBeaconClient&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLobbyBeaconClient(ASBZLobbyBeaconClient&&); \
	NO_API ASBZLobbyBeaconClient(const ASBZLobbyBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLobbyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLobbyBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLobbyBeaconClient)


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLobbyBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLobbyBeaconClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
