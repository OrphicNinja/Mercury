// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChallengeNotifPayload;
class ASBZAICharacter;
class USBZToolCuttingData;
class USBZEquippableData;
class USBZMaskData;
class USBZPlaceableData;
class USBZThrowableData;
class USBZToolData;
class UPaperSprite;
enum class ESBZPlatform : uint8;
struct FSoftObjectPath;
enum class EPD3DefeatState : uint8;
struct FPD3PlayerLoadout;
enum class EPD3MiniGameState : uint8;
class ASBZPlayerState;
struct FSBZReplicatedReloadState;
class AActor;
struct FSBZDropPlaceableEquippableData;
#ifdef STARBREEZE_SBZPlayerState_generated_h
#error "SBZPlayerState.generated.h already included, missing '#pragma once' in SBZPlayerState.h"
#endif
#define STARBREEZE_SBZPlayerState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_RPC_WRAPPERS \
	virtual void Client_ChallengeCompleted_Implementation(FChallengeNotifPayload const& ChallengeNotifPayload); \
	virtual void Client_CheatSetInfiniteAmmo_Implementation(bool bInHasInifiniteAmmo); \
	virtual void Client_OnSaveLoadoutPending_Implementation(); \
	virtual void Client_PickupAmmo_Implementation(uint32 ID); \
	virtual void Client_SendOverkillWeaponProgress_Implementation(float InOverkillWeaponProgress); \
	virtual void Client_SendPlayerReloadProgressionSaveGame_Implementation(); \
	virtual void Client_SetCustodyReleaseCost_Implementation(int32 InNewCustodyReleaseCost); \
	virtual void Client_SetReducedCustodyTime_Implementation(float InReducedCustodyTime); \
	virtual void Client_SetSurrenderedEnemy_Implementation(ASBZAICharacter* InSurrenderedEnemy); \
	virtual void Multicast_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex); \
	virtual void Multicast_OnKill_Implementation(uint32 NetID); \
	virtual void Multicast_RejectEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Multicast_SetAccelByteUserId_Implementation(const FString& InAccelByteUserId); \
	virtual void Multicast_SetAccelByteUserName_Implementation(const FString& InAccelByteUserName); \
	virtual void Multicast_SetCustodyCharacterClass_Implementation(FSoftObjectPath InCharacterClass); \
	virtual void Multicast_SetDefeatState_Implementation(EPD3DefeatState InDefeatState); \
	virtual void Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Multicast_SetLastArrestedByGuard_Implementation(bool bInIsLastArrestedByGuard); \
	virtual void Multicast_SetLoadout_Implementation(FPD3PlayerLoadout const& InLoadout); \
	virtual void Multicast_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState, ASBZPlayerState* InWinningParticipant); \
	virtual void Multicast_SetPlayerId_Implementation(int32 InPlayerId); \
	virtual void Multicast_SetPlayerSlotId_Implementation(uint8 NewSlotId); \
	virtual void Multicast_SetServerReloadState_Implementation(FSBZReplicatedReloadState const& InServerReloadState); \
	virtual void Multicast_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence); \
	virtual void Multicast_SetSpectateDurationModification_Implementation(float Duration); \
	virtual void Multicast_SetSpectateTime_Implementation(float Time); \
	virtual void Multicast_StartDodgeReplenish_Implementation(float InStartReplenishDodgeServerTime); \
	virtual void Multicast_StartTargeting_Implementation(); \
	virtual void Multicast_StopTargeting_Implementation(); \
	virtual bool Server_CheatSetLoadout_Validate(FPD3PlayerLoadout const& ); \
	virtual void Server_CheatSetLoadout_Implementation(FPD3PlayerLoadout const& InLoadout); \
	virtual void Server_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, bool bIsExecutedOnAll, int32 PlayerIndex); \
	virtual void Server_PickupAmmo_Implementation(uint32 ID, bool bIsSimulatedPickup); \
	virtual void Server_SetDropPlaceableEquippableData_Implementation(FSBZDropPlaceableEquippableData const& Data); \
	virtual void Server_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Server_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState); \
	virtual void Server_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence); \
	virtual void Server_StartTargeting_Implementation(); \
	virtual void Server_StopTargeting_Implementation(); \
	virtual void Server_UpdateGameSession_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_ChallengeCompleted); \
	DECLARE_FUNCTION(execClient_CheatSetInfiniteAmmo); \
	DECLARE_FUNCTION(execClient_OnSaveLoadoutPending); \
	DECLARE_FUNCTION(execClient_PickupAmmo); \
	DECLARE_FUNCTION(execClient_SendOverkillWeaponProgress); \
	DECLARE_FUNCTION(execClient_SendPlayerReloadProgressionSaveGame); \
	DECLARE_FUNCTION(execClient_SetCustodyReleaseCost); \
	DECLARE_FUNCTION(execClient_SetReducedCustodyTime); \
	DECLARE_FUNCTION(execClient_SetSurrenderedEnemy); \
	DECLARE_FUNCTION(execEquipCuttingToolToLoadout); \
	DECLARE_FUNCTION(execEquipEquippableToLoadoutAt); \
	DECLARE_FUNCTION(execEquipMaskToLoadout); \
	DECLARE_FUNCTION(execEquipPlaceableToLoadout); \
	DECLARE_FUNCTION(execEquipThrowableToLoadout); \
	DECLARE_FUNCTION(execEquipToolToLoadout); \
	DECLARE_FUNCTION(execGetAccelBytePlayerName); \
	DECLARE_FUNCTION(execGetCharacterIcon); \
	DECLARE_FUNCTION(execGetInfamyLevel); \
	DECLARE_FUNCTION(execGetMergePartySelected); \
	DECLARE_FUNCTION(execGetPlatform); \
	DECLARE_FUNCTION(execGetPlayerDisplayName); \
	DECLARE_FUNCTION(execIsPlayerDisplayNameReady); \
	DECLARE_FUNCTION(execIsSkipIntroSequence); \
	DECLARE_FUNCTION(execMulticast_DebugConsoleCommand); \
	DECLARE_FUNCTION(execMulticast_OnKill); \
	DECLARE_FUNCTION(execMulticast_RejectEquipStateAndIndex); \
	DECLARE_FUNCTION(execMulticast_SetAccelByteUserId); \
	DECLARE_FUNCTION(execMulticast_SetAccelByteUserName); \
	DECLARE_FUNCTION(execMulticast_SetCustodyCharacterClass); \
	DECLARE_FUNCTION(execMulticast_SetDefeatState); \
	DECLARE_FUNCTION(execMulticast_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execMulticast_SetLastArrestedByGuard); \
	DECLARE_FUNCTION(execMulticast_SetLoadout); \
	DECLARE_FUNCTION(execMulticast_SetMiniGameState); \
	DECLARE_FUNCTION(execMulticast_SetPlayerId); \
	DECLARE_FUNCTION(execMulticast_SetPlayerSlotId); \
	DECLARE_FUNCTION(execMulticast_SetServerReloadState); \
	DECLARE_FUNCTION(execMulticast_SetSkipIntroSequence); \
	DECLARE_FUNCTION(execMulticast_SetSpectateDurationModification); \
	DECLARE_FUNCTION(execMulticast_SetSpectateTime); \
	DECLARE_FUNCTION(execMulticast_StartDodgeReplenish); \
	DECLARE_FUNCTION(execMulticast_StartTargeting); \
	DECLARE_FUNCTION(execMulticast_StopTargeting); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnIsSkipIntroSequenceChanged); \
	DECLARE_FUNCTION(execOnRep_AccelByteDisplayName); \
	DECLARE_FUNCTION(execOnRep_AccelByteUserId); \
	DECLARE_FUNCTION(execOnRep_AccelByteUserName); \
	DECLARE_FUNCTION(execOnRep_CustodyCharacterClass); \
	DECLARE_FUNCTION(execOnRep_CustodyReleaseCost); \
	DECLARE_FUNCTION(execOnRep_DefeatState); \
	DECLARE_FUNCTION(execOnRep_EquipStateAndIndex); \
	DECLARE_FUNCTION(execOnRep_FirstPartyPlatform); \
	DECLARE_FUNCTION(execOnRep_InfamyLevel); \
	DECLARE_FUNCTION(execOnRep_IsMaskOn); \
	DECLARE_FUNCTION(execOnRep_IsTargeting); \
	DECLARE_FUNCTION(execOnRep_Loadout); \
	DECLARE_FUNCTION(execOnRep_MergePartySelected); \
	DECLARE_FUNCTION(execOnRep_MiniGameState); \
	DECLARE_FUNCTION(execOnRep_OnKillNetID); \
	DECLARE_FUNCTION(execOnRep_OverkillWeaponProgress); \
	DECLARE_FUNCTION(execOnRep_Platform); \
	DECLARE_FUNCTION(execOnRep_ReadyStatus); \
	DECLARE_FUNCTION(execOnRep_ReplicatedStartReplenishDodgeServerTime); \
	DECLARE_FUNCTION(execOnRep_ServerReloadState); \
	DECLARE_FUNCTION(execOnRep_SpectateTime); \
	DECLARE_FUNCTION(execOnRuntimeActorDestroyed); \
	DECLARE_FUNCTION(execOnRuntimeActorEndPlay); \
	DECLARE_FUNCTION(execOnRuntimeRoutedPingExpired); \
	DECLARE_FUNCTION(execOnRuntimeScramblerExpired); \
	DECLARE_FUNCTION(execOnRuntimeSecureLoopExpired); \
	DECLARE_FUNCTION(execOnSpectateDurationModificationChanged); \
	DECLARE_FUNCTION(execServer_CheatSetLoadout); \
	DECLARE_FUNCTION(execServer_DebugConsoleCommand); \
	DECLARE_FUNCTION(execServer_PickupAmmo); \
	DECLARE_FUNCTION(execServer_SetDropPlaceableEquippableData); \
	DECLARE_FUNCTION(execServer_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execServer_SetMiniGameState); \
	DECLARE_FUNCTION(execServer_SetSkipIntroSequence); \
	DECLARE_FUNCTION(execServer_StartTargeting); \
	DECLARE_FUNCTION(execServer_StopTargeting); \
	DECLARE_FUNCTION(execServer_UpdateGameSession); \
	DECLARE_FUNCTION(execSetSkipIntroSequence);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_ChallengeCompleted_Implementation(FChallengeNotifPayload const& ChallengeNotifPayload); \
	virtual void Client_CheatSetInfiniteAmmo_Implementation(bool bInHasInifiniteAmmo); \
	virtual void Client_OnSaveLoadoutPending_Implementation(); \
	virtual void Client_PickupAmmo_Implementation(uint32 ID); \
	virtual void Client_SendOverkillWeaponProgress_Implementation(float InOverkillWeaponProgress); \
	virtual void Client_SendPlayerReloadProgressionSaveGame_Implementation(); \
	virtual void Client_SetCustodyReleaseCost_Implementation(int32 InNewCustodyReleaseCost); \
	virtual void Client_SetReducedCustodyTime_Implementation(float InReducedCustodyTime); \
	virtual void Client_SetSurrenderedEnemy_Implementation(ASBZAICharacter* InSurrenderedEnemy); \
	virtual void Multicast_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex); \
	virtual void Multicast_OnKill_Implementation(uint32 NetID); \
	virtual void Multicast_RejectEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Multicast_SetAccelByteUserId_Implementation(const FString& InAccelByteUserId); \
	virtual void Multicast_SetAccelByteUserName_Implementation(const FString& InAccelByteUserName); \
	virtual void Multicast_SetCustodyCharacterClass_Implementation(FSoftObjectPath InCharacterClass); \
	virtual void Multicast_SetDefeatState_Implementation(EPD3DefeatState InDefeatState); \
	virtual void Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Multicast_SetLastArrestedByGuard_Implementation(bool bInIsLastArrestedByGuard); \
	virtual void Multicast_SetLoadout_Implementation(FPD3PlayerLoadout const& InLoadout); \
	virtual void Multicast_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState, ASBZPlayerState* InWinningParticipant); \
	virtual void Multicast_SetPlayerId_Implementation(int32 InPlayerId); \
	virtual void Multicast_SetPlayerSlotId_Implementation(uint8 NewSlotId); \
	virtual void Multicast_SetServerReloadState_Implementation(FSBZReplicatedReloadState const& InServerReloadState); \
	virtual void Multicast_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence); \
	virtual void Multicast_SetSpectateDurationModification_Implementation(float Duration); \
	virtual void Multicast_SetSpectateTime_Implementation(float Time); \
	virtual void Multicast_StartDodgeReplenish_Implementation(float InStartReplenishDodgeServerTime); \
	virtual void Multicast_StartTargeting_Implementation(); \
	virtual void Multicast_StopTargeting_Implementation(); \
	virtual bool Server_CheatSetLoadout_Validate(FPD3PlayerLoadout const& ); \
	virtual void Server_CheatSetLoadout_Implementation(FPD3PlayerLoadout const& InLoadout); \
	virtual void Server_DebugConsoleCommand_Implementation(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, bool bIsExecutedOnAll, int32 PlayerIndex); \
	virtual void Server_PickupAmmo_Implementation(uint32 ID, bool bIsSimulatedPickup); \
	virtual void Server_SetDropPlaceableEquippableData_Implementation(FSBZDropPlaceableEquippableData const& Data); \
	virtual void Server_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Server_SetMiniGameState_Implementation(EPD3MiniGameState InMiniGameState); \
	virtual void Server_SetSkipIntroSequence_Implementation(bool bInIsSkipIntroSequence); \
	virtual void Server_StartTargeting_Implementation(); \
	virtual void Server_StopTargeting_Implementation(); \
	virtual void Server_UpdateGameSession_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_ChallengeCompleted); \
	DECLARE_FUNCTION(execClient_CheatSetInfiniteAmmo); \
	DECLARE_FUNCTION(execClient_OnSaveLoadoutPending); \
	DECLARE_FUNCTION(execClient_PickupAmmo); \
	DECLARE_FUNCTION(execClient_SendOverkillWeaponProgress); \
	DECLARE_FUNCTION(execClient_SendPlayerReloadProgressionSaveGame); \
	DECLARE_FUNCTION(execClient_SetCustodyReleaseCost); \
	DECLARE_FUNCTION(execClient_SetReducedCustodyTime); \
	DECLARE_FUNCTION(execClient_SetSurrenderedEnemy); \
	DECLARE_FUNCTION(execEquipCuttingToolToLoadout); \
	DECLARE_FUNCTION(execEquipEquippableToLoadoutAt); \
	DECLARE_FUNCTION(execEquipMaskToLoadout); \
	DECLARE_FUNCTION(execEquipPlaceableToLoadout); \
	DECLARE_FUNCTION(execEquipThrowableToLoadout); \
	DECLARE_FUNCTION(execEquipToolToLoadout); \
	DECLARE_FUNCTION(execGetAccelBytePlayerName); \
	DECLARE_FUNCTION(execGetCharacterIcon); \
	DECLARE_FUNCTION(execGetInfamyLevel); \
	DECLARE_FUNCTION(execGetMergePartySelected); \
	DECLARE_FUNCTION(execGetPlatform); \
	DECLARE_FUNCTION(execGetPlayerDisplayName); \
	DECLARE_FUNCTION(execIsPlayerDisplayNameReady); \
	DECLARE_FUNCTION(execIsSkipIntroSequence); \
	DECLARE_FUNCTION(execMulticast_DebugConsoleCommand); \
	DECLARE_FUNCTION(execMulticast_OnKill); \
	DECLARE_FUNCTION(execMulticast_RejectEquipStateAndIndex); \
	DECLARE_FUNCTION(execMulticast_SetAccelByteUserId); \
	DECLARE_FUNCTION(execMulticast_SetAccelByteUserName); \
	DECLARE_FUNCTION(execMulticast_SetCustodyCharacterClass); \
	DECLARE_FUNCTION(execMulticast_SetDefeatState); \
	DECLARE_FUNCTION(execMulticast_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execMulticast_SetLastArrestedByGuard); \
	DECLARE_FUNCTION(execMulticast_SetLoadout); \
	DECLARE_FUNCTION(execMulticast_SetMiniGameState); \
	DECLARE_FUNCTION(execMulticast_SetPlayerId); \
	DECLARE_FUNCTION(execMulticast_SetPlayerSlotId); \
	DECLARE_FUNCTION(execMulticast_SetServerReloadState); \
	DECLARE_FUNCTION(execMulticast_SetSkipIntroSequence); \
	DECLARE_FUNCTION(execMulticast_SetSpectateDurationModification); \
	DECLARE_FUNCTION(execMulticast_SetSpectateTime); \
	DECLARE_FUNCTION(execMulticast_StartDodgeReplenish); \
	DECLARE_FUNCTION(execMulticast_StartTargeting); \
	DECLARE_FUNCTION(execMulticast_StopTargeting); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnIsSkipIntroSequenceChanged); \
	DECLARE_FUNCTION(execOnRep_AccelByteDisplayName); \
	DECLARE_FUNCTION(execOnRep_AccelByteUserId); \
	DECLARE_FUNCTION(execOnRep_AccelByteUserName); \
	DECLARE_FUNCTION(execOnRep_CustodyCharacterClass); \
	DECLARE_FUNCTION(execOnRep_CustodyReleaseCost); \
	DECLARE_FUNCTION(execOnRep_DefeatState); \
	DECLARE_FUNCTION(execOnRep_EquipStateAndIndex); \
	DECLARE_FUNCTION(execOnRep_FirstPartyPlatform); \
	DECLARE_FUNCTION(execOnRep_InfamyLevel); \
	DECLARE_FUNCTION(execOnRep_IsMaskOn); \
	DECLARE_FUNCTION(execOnRep_IsTargeting); \
	DECLARE_FUNCTION(execOnRep_Loadout); \
	DECLARE_FUNCTION(execOnRep_MergePartySelected); \
	DECLARE_FUNCTION(execOnRep_MiniGameState); \
	DECLARE_FUNCTION(execOnRep_OnKillNetID); \
	DECLARE_FUNCTION(execOnRep_OverkillWeaponProgress); \
	DECLARE_FUNCTION(execOnRep_Platform); \
	DECLARE_FUNCTION(execOnRep_ReadyStatus); \
	DECLARE_FUNCTION(execOnRep_ReplicatedStartReplenishDodgeServerTime); \
	DECLARE_FUNCTION(execOnRep_ServerReloadState); \
	DECLARE_FUNCTION(execOnRep_SpectateTime); \
	DECLARE_FUNCTION(execOnRuntimeActorDestroyed); \
	DECLARE_FUNCTION(execOnRuntimeActorEndPlay); \
	DECLARE_FUNCTION(execOnRuntimeRoutedPingExpired); \
	DECLARE_FUNCTION(execOnRuntimeScramblerExpired); \
	DECLARE_FUNCTION(execOnRuntimeSecureLoopExpired); \
	DECLARE_FUNCTION(execOnSpectateDurationModificationChanged); \
	DECLARE_FUNCTION(execServer_CheatSetLoadout); \
	DECLARE_FUNCTION(execServer_DebugConsoleCommand); \
	DECLARE_FUNCTION(execServer_PickupAmmo); \
	DECLARE_FUNCTION(execServer_SetDropPlaceableEquippableData); \
	DECLARE_FUNCTION(execServer_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execServer_SetMiniGameState); \
	DECLARE_FUNCTION(execServer_SetSkipIntroSequence); \
	DECLARE_FUNCTION(execServer_StartTargeting); \
	DECLARE_FUNCTION(execServer_StopTargeting); \
	DECLARE_FUNCTION(execServer_UpdateGameSession); \
	DECLARE_FUNCTION(execSetSkipIntroSequence);


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_EVENT_PARMS \
	struct SBZPlayerState_eventClient_ChallengeCompleted_Parms \
	{ \
		FChallengeNotifPayload ChallengeNotifPayload; \
	}; \
	struct SBZPlayerState_eventClient_CheatSetInfiniteAmmo_Parms \
	{ \
		bool bInHasInifiniteAmmo; \
	}; \
	struct SBZPlayerState_eventClient_PickupAmmo_Parms \
	{ \
		uint32 ID; \
	}; \
	struct SBZPlayerState_eventClient_SendOverkillWeaponProgress_Parms \
	{ \
		float InOverkillWeaponProgress; \
	}; \
	struct SBZPlayerState_eventClient_SetCustodyReleaseCost_Parms \
	{ \
		int32 InNewCustodyReleaseCost; \
	}; \
	struct SBZPlayerState_eventClient_SetReducedCustodyTime_Parms \
	{ \
		float InReducedCustodyTime; \
	}; \
	struct SBZPlayerState_eventClient_SetSurrenderedEnemy_Parms \
	{ \
		ASBZAICharacter* InSurrenderedEnemy; \
	}; \
	struct SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms \
	{ \
		FString Command; \
		FString InstigatorContextText; \
		bool bIsLocallyControlledOnly; \
		int32 PlayerIndex; \
	}; \
	struct SBZPlayerState_eventMulticast_OnKill_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZPlayerState_eventMulticast_RejectEquipStateAndIndex_Parms \
	{ \
		uint8 InEquipStateAndIndex; \
	}; \
	struct SBZPlayerState_eventMulticast_SetAccelByteUserId_Parms \
	{ \
		FString InAccelByteUserId; \
	}; \
	struct SBZPlayerState_eventMulticast_SetAccelByteUserName_Parms \
	{ \
		FString InAccelByteUserName; \
	}; \
	struct SBZPlayerState_eventMulticast_SetCustodyCharacterClass_Parms \
	{ \
		FSoftObjectPath InCharacterClass; \
	}; \
	struct SBZPlayerState_eventMulticast_SetDefeatState_Parms \
	{ \
		EPD3DefeatState InDefeatState; \
	}; \
	struct SBZPlayerState_eventMulticast_SetEquipStateAndIndex_Parms \
	{ \
		uint8 InEquipStateAndIndex; \
	}; \
	struct SBZPlayerState_eventMulticast_SetLastArrestedByGuard_Parms \
	{ \
		bool bInIsLastArrestedByGuard; \
	}; \
	struct SBZPlayerState_eventMulticast_SetLoadout_Parms \
	{ \
		FPD3PlayerLoadout InLoadout; \
	}; \
	struct SBZPlayerState_eventMulticast_SetMiniGameState_Parms \
	{ \
		EPD3MiniGameState InMiniGameState; \
		ASBZPlayerState* InWinningParticipant; \
	}; \
	struct SBZPlayerState_eventMulticast_SetPlayerId_Parms \
	{ \
		int32 InPlayerId; \
	}; \
	struct SBZPlayerState_eventMulticast_SetPlayerSlotId_Parms \
	{ \
		uint8 NewSlotId; \
	}; \
	struct SBZPlayerState_eventMulticast_SetServerReloadState_Parms \
	{ \
		FSBZReplicatedReloadState InServerReloadState; \
	}; \
	struct SBZPlayerState_eventMulticast_SetSkipIntroSequence_Parms \
	{ \
		bool bInIsSkipIntroSequence; \
	}; \
	struct SBZPlayerState_eventMulticast_SetSpectateDurationModification_Parms \
	{ \
		float Duration; \
	}; \
	struct SBZPlayerState_eventMulticast_SetSpectateTime_Parms \
	{ \
		float Time; \
	}; \
	struct SBZPlayerState_eventMulticast_StartDodgeReplenish_Parms \
	{ \
		float InStartReplenishDodgeServerTime; \
	}; \
	struct SBZPlayerState_eventServer_CheatSetLoadout_Parms \
	{ \
		FPD3PlayerLoadout InLoadout; \
	}; \
	struct SBZPlayerState_eventServer_DebugConsoleCommand_Parms \
	{ \
		FString Command; \
		FString InstigatorContextText; \
		bool bIsLocallyControlledOnly; \
		bool bIsExecutedOnAll; \
		int32 PlayerIndex; \
	}; \
	struct SBZPlayerState_eventServer_PickupAmmo_Parms \
	{ \
		uint32 ID; \
		bool bIsSimulatedPickup; \
	}; \
	struct SBZPlayerState_eventServer_SetDropPlaceableEquippableData_Parms \
	{ \
		FSBZDropPlaceableEquippableData Data; \
	}; \
	struct SBZPlayerState_eventServer_SetEquipStateAndIndex_Parms \
	{ \
		uint8 InEquipStateAndIndex; \
	}; \
	struct SBZPlayerState_eventServer_SetMiniGameState_Parms \
	{ \
		EPD3MiniGameState InMiniGameState; \
	}; \
	struct SBZPlayerState_eventServer_SetSkipIntroSequence_Parms \
	{ \
		bool bInIsSkipIntroSequence; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPlayerState(); \
	friend struct Z_Construct_UClass_ASBZPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReadyStatus=NETFIELD_REP_START, \
		InfamyLevel, \
		Platform, \
		FirstPartyPlatform, \
		AccelByteDisplayName, \
		AccelByteUserName, \
		AccelByteUserId, \
		bIsSkipIntroSequence, \
		PlayerSlotId, \
		ReplicatedStartReplenishDodgeServerTime, \
		bIsMaskOn, \
		Loadout, \
		EquipStateAndIndex, \
		ServerReloadState, \
		CustodyCharacterClass, \
		DefeatState, \
		OnKillNetID, \
		MiniGameState, \
		PlaceableToolsArray, \
		SpectateTime, \
		ReducedCustodyTime, \
		SpectateDurationModification, \
		OverkillWeaponProgress, \
		bIsLastArrestedByGuard, \
		bIsTargeting, \
		CustodyReleaseCost, \
		bIsMergePartySelected, \
		NETFIELD_REP_END=bIsMergePartySelected	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_INCLASS \
private: \
	static void StaticRegisterNativesASBZPlayerState(); \
	friend struct Z_Construct_UClass_ASBZPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASBZPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReadyStatus=NETFIELD_REP_START, \
		InfamyLevel, \
		Platform, \
		FirstPartyPlatform, \
		AccelByteDisplayName, \
		AccelByteUserName, \
		AccelByteUserId, \
		bIsSkipIntroSequence, \
		PlayerSlotId, \
		ReplicatedStartReplenishDodgeServerTime, \
		bIsMaskOn, \
		Loadout, \
		EquipStateAndIndex, \
		ServerReloadState, \
		CustodyCharacterClass, \
		DefeatState, \
		OnKillNetID, \
		MiniGameState, \
		PlaceableToolsArray, \
		SpectateTime, \
		ReducedCustodyTime, \
		SpectateDurationModification, \
		OverkillWeaponProgress, \
		bIsLastArrestedByGuard, \
		bIsTargeting, \
		CustodyReleaseCost, \
		bIsMergePartySelected, \
		NETFIELD_REP_END=bIsMergePartySelected	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerState(ASBZPlayerState&&); \
	NO_API ASBZPlayerState(const ASBZPlayerState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPlayerState(ASBZPlayerState&&); \
	NO_API ASBZPlayerState(const ASBZPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPlayerState)


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsSkipIntroSequence() { return STRUCT_OFFSET(ASBZPlayerState, bIsSkipIntroSequence); } \
	FORCEINLINE static uint32 __PPO__ServerRegion() { return STRUCT_OFFSET(ASBZPlayerState, ServerRegion); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ASBZPlayerState, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__AbilitySystem() { return STRUCT_OFFSET(ASBZPlayerState, AbilitySystem); } \
	FORCEINLINE static uint32 __PPO__UICharacterEffects() { return STRUCT_OFFSET(ASBZPlayerState, UICharacterEffects); } \
	FORCEINLINE static uint32 __PPO__PlayerSlotId() { return STRUCT_OFFSET(ASBZPlayerState, PlayerSlotId); } \
	FORCEINLINE static uint32 __PPO__PlayerColors() { return STRUCT_OFFSET(ASBZPlayerState, PlayerColors); } \
	FORCEINLINE static uint32 __PPO__WeaponTags() { return STRUCT_OFFSET(ASBZPlayerState, WeaponTags); } \
	FORCEINLINE static uint32 __PPO__EquippablePings() { return STRUCT_OFFSET(ASBZPlayerState, EquippablePings); } \
	FORCEINLINE static uint32 __PPO__SkillDataLookupMap() { return STRUCT_OFFSET(ASBZPlayerState, SkillDataLookupMap); } \
	FORCEINLINE static uint32 __PPO__SkillTagSet() { return STRUCT_OFFSET(ASBZPlayerState, SkillTagSet); } \
	FORCEINLINE static uint32 __PPO__ReplicatedStartReplenishDodgeServerTime() { return STRUCT_OFFSET(ASBZPlayerState, ReplicatedStartReplenishDodgeServerTime); } \
	FORCEINLINE static uint32 __PPO__StartReplenishDodgeServerTime() { return STRUCT_OFFSET(ASBZPlayerState, StartReplenishDodgeServerTime); } \
	FORCEINLINE static uint32 __PPO__StartReplenishDodgeValue() { return STRUCT_OFFSET(ASBZPlayerState, StartReplenishDodgeValue); } \
	FORCEINLINE static uint32 __PPO__bIsMaskOn() { return STRUCT_OFFSET(ASBZPlayerState, bIsMaskOn); } \
	FORCEINLINE static uint32 __PPO__Loadout() { return STRUCT_OFFSET(ASBZPlayerState, Loadout); } \
	FORCEINLINE static uint32 __PPO__OldLoadout() { return STRUCT_OFFSET(ASBZPlayerState, OldLoadout); } \
	FORCEINLINE static uint32 __PPO__bIsLocallyControlled() { return STRUCT_OFFSET(ASBZPlayerState, bIsLocallyControlled); } \
	FORCEINLINE static uint32 __PPO__EquipStateAndIndex() { return STRUCT_OFFSET(ASBZPlayerState, EquipStateAndIndex); } \
	FORCEINLINE static uint32 __PPO__ServerReloadState() { return STRUCT_OFFSET(ASBZPlayerState, ServerReloadState); } \
	FORCEINLINE static uint32 __PPO__CharacterClass() { return STRUCT_OFFSET(ASBZPlayerState, CharacterClass); } \
	FORCEINLINE static uint32 __PPO__CustodyCharacterClass() { return STRUCT_OFFSET(ASBZPlayerState, CustodyCharacterClass); } \
	FORCEINLINE static uint32 __PPO__bIsValidLoadout() { return STRUCT_OFFSET(ASBZPlayerState, bIsValidLoadout); } \
	FORCEINLINE static uint32 __PPO__DefeatState() { return STRUCT_OFFSET(ASBZPlayerState, DefeatState); } \
	FORCEINLINE static uint32 __PPO__OnKillNetID() { return STRUCT_OFFSET(ASBZPlayerState, OnKillNetID); } \
	FORCEINLINE static uint32 __PPO__MiniGameState() { return STRUCT_OFFSET(ASBZPlayerState, MiniGameState); } \
	FORCEINLINE static uint32 __PPO__ResultData() { return STRUCT_OFFSET(ASBZPlayerState, ResultData); } \
	FORCEINLINE static uint32 __PPO__bIsNetInitialized() { return STRUCT_OFFSET(ASBZPlayerState, bIsNetInitialized); } \
	FORCEINLINE static uint32 __PPO__bIsAttributeSetInitialized() { return STRUCT_OFFSET(ASBZPlayerState, bIsAttributeSetInitialized); } \
	FORCEINLINE static uint32 __PPO__bIsAttributeSetInitializedOnce() { return STRUCT_OFFSET(ASBZPlayerState, bIsAttributeSetInitializedOnce); } \
	FORCEINLINE static uint32 __PPO__bIsPendingReconnectData() { return STRUCT_OFFSET(ASBZPlayerState, bIsPendingReconnectData); } \
	FORCEINLINE static uint32 __PPO__AmmoPickupLookupMap() { return STRUCT_OFFSET(ASBZPlayerState, AmmoPickupLookupMap); } \
	FORCEINLINE static uint32 __PPO__bIsLoadoutLoaded() { return STRUCT_OFFSET(ASBZPlayerState, bIsLoadoutLoaded); } \
	FORCEINLINE static uint32 __PPO__bIsApplyingLoadout() { return STRUCT_OFFSET(ASBZPlayerState, bIsApplyingLoadout); } \
	FORCEINLINE static uint32 __PPO__LastLoadedAssetRefArray() { return STRUCT_OFFSET(ASBZPlayerState, LastLoadedAssetRefArray); } \
	FORCEINLINE static uint32 __PPO__CurrentCharacterData() { return STRUCT_OFFSET(ASBZPlayerState, CurrentCharacterData); } \
	FORCEINLINE static uint32 __PPO__PlaceableToolsArray() { return STRUCT_OFFSET(ASBZPlayerState, PlaceableToolsArray); } \
	FORCEINLINE static uint32 __PPO__TagCounterMap() { return STRUCT_OFFSET(ASBZPlayerState, TagCounterMap); } \
	FORCEINLINE static uint32 __PPO__PlayerCharacterArray() { return STRUCT_OFFSET(ASBZPlayerState, PlayerCharacterArray); } \
	FORCEINLINE static uint32 __PPO__AppliedLoadoutEffectArray() { return STRUCT_OFFSET(ASBZPlayerState, AppliedLoadoutEffectArray); } \
	FORCEINLINE static uint32 __PPO__AppliedCrewSkillEffectMap() { return STRUCT_OFFSET(ASBZPlayerState, AppliedCrewSkillEffectMap); } \
	FORCEINLINE static uint32 __PPO__PlayerMicroCamera() { return STRUCT_OFFSET(ASBZPlayerState, PlayerMicroCamera); } \
	FORCEINLINE static uint32 __PPO__ServerGrenadeProjectileArray() { return STRUCT_OFFSET(ASBZPlayerState, ServerGrenadeProjectileArray); } \
	FORCEINLINE static uint32 __PPO__bIsSaveLoadoutPending() { return STRUCT_OFFSET(ASBZPlayerState, bIsSaveLoadoutPending); } \
	FORCEINLINE static uint32 __PPO__SpectateDurationArray() { return STRUCT_OFFSET(ASBZPlayerState, SpectateDurationArray); } \
	FORCEINLINE static uint32 __PPO__ReconnectDefeatedCustodyDurationReductionArray() { return STRUCT_OFFSET(ASBZPlayerState, ReconnectDefeatedCustodyDurationReductionArray); } \
	FORCEINLINE static uint32 __PPO__MinimumSpectateDuration() { return STRUCT_OFFSET(ASBZPlayerState, MinimumSpectateDuration); } \
	FORCEINLINE static uint32 __PPO__SpectateTime() { return STRUCT_OFFSET(ASBZPlayerState, SpectateTime); } \
	FORCEINLINE static uint32 __PPO__ReducedCustodyTime() { return STRUCT_OFFSET(ASBZPlayerState, ReducedCustodyTime); } \
	FORCEINLINE static uint32 __PPO__SpectateDurationModification() { return STRUCT_OFFSET(ASBZPlayerState, SpectateDurationModification); } \
	FORCEINLINE static uint32 __PPO__ECMGUIEffectData() { return STRUCT_OFFSET(ASBZPlayerState, ECMGUIEffectData); } \
	FORCEINLINE static uint32 __PPO__SkillTankDisengageActivatedTimeSeconds() { return STRUCT_OFFSET(ASBZPlayerState, SkillTankDisengageActivatedTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__RuntimeActorArray() { return STRUCT_OFFSET(ASBZPlayerState, RuntimeActorArray); } \
	FORCEINLINE static uint32 __PPO__SurrenderedEnemy() { return STRUCT_OFFSET(ASBZPlayerState, SurrenderedEnemy); } \
	FORCEINLINE static uint32 __PPO__EnforcerSkillKillCount() { return STRUCT_OFFSET(ASBZPlayerState, EnforcerSkillKillCount); } \
	FORCEINLINE static uint32 __PPO__EnforcerSkillLastKillTime() { return STRUCT_OFFSET(ASBZPlayerState, EnforcerSkillLastKillTime); } \
	FORCEINLINE static uint32 __PPO__EnforcerAcedSkillKillCount() { return STRUCT_OFFSET(ASBZPlayerState, EnforcerAcedSkillKillCount); } \
	FORCEINLINE static uint32 __PPO__SelectedCharacter() { return STRUCT_OFFSET(ASBZPlayerState, SelectedCharacter); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponProgress() { return STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgress); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponProgressKillIncrease() { return STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressKillIncrease); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponProgressHeadshotAdditionalIncrease() { return STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressHeadshotAdditionalIncrease); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponProgressObjectiveIncrease() { return STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressObjectiveIncrease); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponProgressSubObjectiveIncrease() { return STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressSubObjectiveIncrease); } \
	FORCEINLINE static uint32 __PPO__bIsLastArrestedByGuard() { return STRUCT_OFFSET(ASBZPlayerState, bIsLastArrestedByGuard); } \
	FORCEINLINE static uint32 __PPO__bIsTargeting() { return STRUCT_OFFSET(ASBZPlayerState, bIsTargeting); } \
	FORCEINLINE static uint32 __PPO__CustodyCount() { return STRUCT_OFFSET(ASBZPlayerState, CustodyCount); } \
	FORCEINLINE static uint32 __PPO__CustodyReleaseCost() { return STRUCT_OFFSET(ASBZPlayerState, CustodyReleaseCost); } \
	FORCEINLINE static uint32 __PPO__CurrentTradeReduction() { return STRUCT_OFFSET(ASBZPlayerState, CurrentTradeReduction); } \
	FORCEINLINE static uint32 __PPO__bServerIsHardBargainCustody() { return STRUCT_OFFSET(ASBZPlayerState, bServerIsHardBargainCustody); } \
	FORCEINLINE static uint32 __PPO__bIsMergePartySelected() { return STRUCT_OFFSET(ASBZPlayerState, bIsMergePartySelected); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_52_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
