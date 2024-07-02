// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZOnlineAnalyticsReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZOnlineAnalyticsReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineAnalyticsReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZOnlineAnalyticsReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZOnlineAnalyticsReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZOnlineAnalyticsReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineAnalyticsReason>()
	{
		return ESBZOnlineAnalyticsReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZOnlineAnalyticsReason(ESBZOnlineAnalyticsReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZOnlineAnalyticsReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZOnlineAnalyticsReason_Hash() { return 2726058357U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineAnalyticsReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZOnlineAnalyticsReason"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZOnlineAnalyticsReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZOnlineAnalyticsReason::Undefined", (int64)ESBZOnlineAnalyticsReason::Undefined },
				{ "ESBZOnlineAnalyticsReason::InitialParty", (int64)ESBZOnlineAnalyticsReason::InitialParty },
				{ "ESBZOnlineAnalyticsReason::Matchmaking", (int64)ESBZOnlineAnalyticsReason::Matchmaking },
				{ "ESBZOnlineAnalyticsReason::PlayTogether", (int64)ESBZOnlineAnalyticsReason::PlayTogether },
				{ "ESBZOnlineAnalyticsReason::DebugSession", (int64)ESBZOnlineAnalyticsReason::DebugSession },
				{ "ESBZOnlineAnalyticsReason::BeaconLostConnectionToHost", (int64)ESBZOnlineAnalyticsReason::BeaconLostConnectionToHost },
				{ "ESBZOnlineAnalyticsReason::PartyHostChangedSession", (int64)ESBZOnlineAnalyticsReason::PartyHostChangedSession },
				{ "ESBZOnlineAnalyticsReason::MatchmakingFoundNewSession", (int64)ESBZOnlineAnalyticsReason::MatchmakingFoundNewSession },
				{ "ESBZOnlineAnalyticsReason::DebugLeaveSessionNode", (int64)ESBZOnlineAnalyticsReason::DebugLeaveSessionNode },
				{ "ESBZOnlineAnalyticsReason::InviteProcessing", (int64)ESBZOnlineAnalyticsReason::InviteProcessing },
				{ "ESBZOnlineAnalyticsReason::InviteProcessingFailed", (int64)ESBZOnlineAnalyticsReason::InviteProcessingFailed },
				{ "ESBZOnlineAnalyticsReason::AcceptMatchCooldown", (int64)ESBZOnlineAnalyticsReason::AcceptMatchCooldown },
				{ "ESBZOnlineAnalyticsReason::RestartMatchCooldown", (int64)ESBZOnlineAnalyticsReason::RestartMatchCooldown },
				{ "ESBZOnlineAnalyticsReason::DisconnectedWaitingResult", (int64)ESBZOnlineAnalyticsReason::DisconnectedWaitingResult },
				{ "ESBZOnlineAnalyticsReason::UserLaunchedSoloGame", (int64)ESBZOnlineAnalyticsReason::UserLaunchedSoloGame },
				{ "ESBZOnlineAnalyticsReason::UserLeftParty", (int64)ESBZOnlineAnalyticsReason::UserLeftParty },
				{ "ESBZOnlineAnalyticsReason::ReturnToMenuFromActionPhase", (int64)ESBZOnlineAnalyticsReason::ReturnToMenuFromActionPhase },
				{ "ESBZOnlineAnalyticsReason::ReturnToMenuFromLobby", (int64)ESBZOnlineAnalyticsReason::ReturnToMenuFromLobby },
				{ "ESBZOnlineAnalyticsReason::ReturnToMenuFromMatchmaking", (int64)ESBZOnlineAnalyticsReason::ReturnToMenuFromMatchmaking },
				{ "ESBZOnlineAnalyticsReason::ReturnToMenuFromResult", (int64)ESBZOnlineAnalyticsReason::ReturnToMenuFromResult },
				{ "ESBZOnlineAnalyticsReason::GameError", (int64)ESBZOnlineAnalyticsReason::GameError },
				{ "ESBZOnlineAnalyticsReason::IisError", (int64)ESBZOnlineAnalyticsReason::IisError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcceptMatchCooldown.Name", "ESBZOnlineAnalyticsReason::AcceptMatchCooldown" },
				{ "BeaconLostConnectionToHost.Name", "ESBZOnlineAnalyticsReason::BeaconLostConnectionToHost" },
				{ "BlueprintType", "true" },
				{ "DebugLeaveSessionNode.Name", "ESBZOnlineAnalyticsReason::DebugLeaveSessionNode" },
				{ "DebugSession.Name", "ESBZOnlineAnalyticsReason::DebugSession" },
				{ "DisconnectedWaitingResult.Name", "ESBZOnlineAnalyticsReason::DisconnectedWaitingResult" },
				{ "GameError.Name", "ESBZOnlineAnalyticsReason::GameError" },
				{ "IisError.Name", "ESBZOnlineAnalyticsReason::IisError" },
				{ "InitialParty.Name", "ESBZOnlineAnalyticsReason::InitialParty" },
				{ "InviteProcessing.Name", "ESBZOnlineAnalyticsReason::InviteProcessing" },
				{ "InviteProcessingFailed.Name", "ESBZOnlineAnalyticsReason::InviteProcessingFailed" },
				{ "Matchmaking.Name", "ESBZOnlineAnalyticsReason::Matchmaking" },
				{ "MatchmakingFoundNewSession.Name", "ESBZOnlineAnalyticsReason::MatchmakingFoundNewSession" },
				{ "ModuleRelativePath", "Public/ESBZOnlineAnalyticsReason.h" },
				{ "PartyHostChangedSession.Name", "ESBZOnlineAnalyticsReason::PartyHostChangedSession" },
				{ "PlayTogether.Name", "ESBZOnlineAnalyticsReason::PlayTogether" },
				{ "RestartMatchCooldown.Name", "ESBZOnlineAnalyticsReason::RestartMatchCooldown" },
				{ "ReturnToMenuFromActionPhase.Name", "ESBZOnlineAnalyticsReason::ReturnToMenuFromActionPhase" },
				{ "ReturnToMenuFromLobby.Name", "ESBZOnlineAnalyticsReason::ReturnToMenuFromLobby" },
				{ "ReturnToMenuFromMatchmaking.Name", "ESBZOnlineAnalyticsReason::ReturnToMenuFromMatchmaking" },
				{ "ReturnToMenuFromResult.Name", "ESBZOnlineAnalyticsReason::ReturnToMenuFromResult" },
				{ "Undefined.Name", "ESBZOnlineAnalyticsReason::Undefined" },
				{ "UserLaunchedSoloGame.Name", "ESBZOnlineAnalyticsReason::UserLaunchedSoloGame" },
				{ "UserLeftParty.Name", "ESBZOnlineAnalyticsReason::UserLeftParty" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZOnlineAnalyticsReason",
				"ESBZOnlineAnalyticsReason",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
