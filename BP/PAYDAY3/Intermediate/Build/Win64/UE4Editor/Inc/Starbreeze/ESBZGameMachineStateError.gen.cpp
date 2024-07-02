// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGameMachineStateError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGameMachineStateError() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGameMachineStateError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGameMachineStateError"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGameMachineStateError>()
	{
		return ESBZGameMachineStateError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGameMachineStateError(ESBZGameMachineStateError_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGameMachineStateError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError_Hash() { return 492649087U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGameMachineStateError"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZGameMachineStateError::HostDisconnected", (int64)ESBZGameMachineStateError::HostDisconnected },
				{ "ESBZGameMachineStateError::HostFailedToStartLoading", (int64)ESBZGameMachineStateError::HostFailedToStartLoading },
				{ "ESBZGameMachineStateError::DropInIntoEndedMission", (int64)ESBZGameMachineStateError::DropInIntoEndedMission },
				{ "ESBZGameMachineStateError::WrongGameVersion", (int64)ESBZGameMachineStateError::WrongGameVersion },
				{ "ESBZGameMachineStateError::NoMatchingServerVersion", (int64)ESBZGameMachineStateError::NoMatchingServerVersion },
				{ "ESBZGameMachineStateError::MatchmakingError", (int64)ESBZGameMachineStateError::MatchmakingError },
				{ "ESBZGameMachineStateError::HostBeaconDisconnected", (int64)ESBZGameMachineStateError::HostBeaconDisconnected },
				{ "ESBZGameMachineStateError::ActionBeaconTimeout", (int64)ESBZGameMachineStateError::ActionBeaconTimeout },
				{ "ESBZGameMachineStateError::TravelToHostTimeout", (int64)ESBZGameMachineStateError::TravelToHostTimeout },
				{ "ESBZGameMachineStateError::StartTravellingHandshakeFailed", (int64)ESBZGameMachineStateError::StartTravellingHandshakeFailed },
				{ "ESBZGameMachineStateError::MissionEnded", (int64)ESBZGameMachineStateError::MissionEnded },
				{ "ESBZGameMachineStateError::InvalidReturnToMainMenu", (int64)ESBZGameMachineStateError::InvalidReturnToMainMenu },
				{ "ESBZGameMachineStateError::HostMigrationFailed", (int64)ESBZGameMachineStateError::HostMigrationFailed },
				{ "ESBZGameMachineStateError::WrongLevel", (int64)ESBZGameMachineStateError::WrongLevel },
				{ "ESBZGameMachineStateError::SteamNotSignedIn", (int64)ESBZGameMachineStateError::SteamNotSignedIn },
				{ "ESBZGameMachineStateError::EOSNotSignedIn", (int64)ESBZGameMachineStateError::EOSNotSignedIn },
				{ "ESBZGameMachineStateError::PSNNotSignedIn", (int64)ESBZGameMachineStateError::PSNNotSignedIn },
				{ "ESBZGameMachineStateError::XboxLiveNotSignedIn", (int64)ESBZGameMachineStateError::XboxLiveNotSignedIn },
				{ "ESBZGameMachineStateError::PremiumAccountEligibilityCheck", (int64)ESBZGameMachineStateError::PremiumAccountEligibilityCheck },
				{ "ESBZGameMachineStateError::NetworkNoConnection", (int64)ESBZGameMachineStateError::NetworkNoConnection },
				{ "ESBZGameMachineStateError::FailedToFetchRequiredAccelByteData", (int64)ESBZGameMachineStateError::FailedToFetchRequiredAccelByteData },
				{ "ESBZGameMachineStateError::LostConnectionToMatchMakingService", (int64)ESBZGameMachineStateError::LostConnectionToMatchMakingService },
				{ "ESBZGameMachineStateError::SessionIsFull", (int64)ESBZGameMachineStateError::SessionIsFull },
				{ "ESBZGameMachineStateError::NebulaLoginConnectionFailed", (int64)ESBZGameMachineStateError::NebulaLoginConnectionFailed },
				{ "ESBZGameMachineStateError::NebulaLoginConnectionFailedAlreadyLinked", (int64)ESBZGameMachineStateError::NebulaLoginConnectionFailedAlreadyLinked },
				{ "ESBZGameMachineStateError::NebulaLoginFailed", (int64)ESBZGameMachineStateError::NebulaLoginFailed },
				{ "ESBZGameMachineStateError::NebulaLoginLinking", (int64)ESBZGameMachineStateError::NebulaLoginLinking },
				{ "ESBZGameMachineStateError::NebulaLoginLinkingOtherXbox", (int64)ESBZGameMachineStateError::NebulaLoginLinkingOtherXbox },
				{ "ESBZGameMachineStateError::NebulaLoginWrongCreds", (int64)ESBZGameMachineStateError::NebulaLoginWrongCreds },
				{ "ESBZGameMachineStateError::Unknown", (int64)ESBZGameMachineStateError::Unknown },
				{ "ESBZGameMachineStateError::FailedToResumeGame", (int64)ESBZGameMachineStateError::FailedToResumeGame },
				{ "ESBZGameMachineStateError::PartySessionDoesNotExist", (int64)ESBZGameMachineStateError::PartySessionDoesNotExist },
				{ "ESBZGameMachineStateError::GameSessionDoesNotExist", (int64)ESBZGameMachineStateError::GameSessionDoesNotExist },
				{ "ESBZGameMachineStateError::ReturningFromSuspendedState", (int64)ESBZGameMachineStateError::ReturningFromSuspendedState },
				{ "ESBZGameMachineStateError::LobbyClosedConnection", (int64)ESBZGameMachineStateError::LobbyClosedConnection },
				{ "ESBZGameMachineStateError::PlayerBanned", (int64)ESBZGameMachineStateError::PlayerBanned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionBeaconTimeout.Name", "ESBZGameMachineStateError::ActionBeaconTimeout" },
				{ "BlueprintType", "true" },
				{ "DropInIntoEndedMission.Name", "ESBZGameMachineStateError::DropInIntoEndedMission" },
				{ "EOSNotSignedIn.Name", "ESBZGameMachineStateError::EOSNotSignedIn" },
				{ "FailedToFetchRequiredAccelByteData.Name", "ESBZGameMachineStateError::FailedToFetchRequiredAccelByteData" },
				{ "FailedToResumeGame.Name", "ESBZGameMachineStateError::FailedToResumeGame" },
				{ "GameSessionDoesNotExist.Name", "ESBZGameMachineStateError::GameSessionDoesNotExist" },
				{ "HostBeaconDisconnected.Name", "ESBZGameMachineStateError::HostBeaconDisconnected" },
				{ "HostDisconnected.Name", "ESBZGameMachineStateError::HostDisconnected" },
				{ "HostFailedToStartLoading.Name", "ESBZGameMachineStateError::HostFailedToStartLoading" },
				{ "HostMigrationFailed.Name", "ESBZGameMachineStateError::HostMigrationFailed" },
				{ "InvalidReturnToMainMenu.Name", "ESBZGameMachineStateError::InvalidReturnToMainMenu" },
				{ "LobbyClosedConnection.Name", "ESBZGameMachineStateError::LobbyClosedConnection" },
				{ "LostConnectionToMatchMakingService.Name", "ESBZGameMachineStateError::LostConnectionToMatchMakingService" },
				{ "MatchmakingError.Name", "ESBZGameMachineStateError::MatchmakingError" },
				{ "MissionEnded.Name", "ESBZGameMachineStateError::MissionEnded" },
				{ "ModuleRelativePath", "Public/ESBZGameMachineStateError.h" },
				{ "NebulaLoginConnectionFailed.Name", "ESBZGameMachineStateError::NebulaLoginConnectionFailed" },
				{ "NebulaLoginConnectionFailedAlreadyLinked.Name", "ESBZGameMachineStateError::NebulaLoginConnectionFailedAlreadyLinked" },
				{ "NebulaLoginFailed.Name", "ESBZGameMachineStateError::NebulaLoginFailed" },
				{ "NebulaLoginLinking.Name", "ESBZGameMachineStateError::NebulaLoginLinking" },
				{ "NebulaLoginLinkingOtherXbox.Name", "ESBZGameMachineStateError::NebulaLoginLinkingOtherXbox" },
				{ "NebulaLoginWrongCreds.Name", "ESBZGameMachineStateError::NebulaLoginWrongCreds" },
				{ "NetworkNoConnection.Name", "ESBZGameMachineStateError::NetworkNoConnection" },
				{ "NoMatchingServerVersion.Name", "ESBZGameMachineStateError::NoMatchingServerVersion" },
				{ "PartySessionDoesNotExist.Name", "ESBZGameMachineStateError::PartySessionDoesNotExist" },
				{ "PlayerBanned.Name", "ESBZGameMachineStateError::PlayerBanned" },
				{ "PremiumAccountEligibilityCheck.Name", "ESBZGameMachineStateError::PremiumAccountEligibilityCheck" },
				{ "PSNNotSignedIn.Name", "ESBZGameMachineStateError::PSNNotSignedIn" },
				{ "ReturningFromSuspendedState.Name", "ESBZGameMachineStateError::ReturningFromSuspendedState" },
				{ "SessionIsFull.Name", "ESBZGameMachineStateError::SessionIsFull" },
				{ "StartTravellingHandshakeFailed.Name", "ESBZGameMachineStateError::StartTravellingHandshakeFailed" },
				{ "SteamNotSignedIn.Name", "ESBZGameMachineStateError::SteamNotSignedIn" },
				{ "TravelToHostTimeout.Name", "ESBZGameMachineStateError::TravelToHostTimeout" },
				{ "Unknown.Name", "ESBZGameMachineStateError::Unknown" },
				{ "WrongGameVersion.Name", "ESBZGameMachineStateError::WrongGameVersion" },
				{ "WrongLevel.Name", "ESBZGameMachineStateError::WrongLevel" },
				{ "XboxLiveNotSignedIn.Name", "ESBZGameMachineStateError::XboxLiveNotSignedIn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGameMachineStateError",
				"ESBZGameMachineStateError",
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
