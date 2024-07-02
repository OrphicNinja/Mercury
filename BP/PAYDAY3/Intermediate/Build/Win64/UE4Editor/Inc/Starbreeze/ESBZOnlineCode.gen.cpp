// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZOnlineCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZOnlineCode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZOnlineCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZOnlineCode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineCode>()
	{
		return ESBZOnlineCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZOnlineCode(ESBZOnlineCode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZOnlineCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZOnlineCode_Hash() { return 2158228621U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZOnlineCode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZOnlineCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZOnlineCode::Success", (int64)ESBZOnlineCode::Success },
				{ "ESBZOnlineCode::Interrupted", (int64)ESBZOnlineCode::Interrupted },
				{ "ESBZOnlineCode::PlatformTimedOut", (int64)ESBZOnlineCode::PlatformTimedOut },
				{ "ESBZOnlineCode::InvalidRequest", (int64)ESBZOnlineCode::InvalidRequest },
				{ "ESBZOnlineCode::InternalError", (int64)ESBZOnlineCode::InternalError },
				{ "ESBZOnlineCode::LostConnectionToHost", (int64)ESBZOnlineCode::LostConnectionToHost },
				{ "ESBZOnlineCode::HostFailedToStartLoading", (int64)ESBZOnlineCode::HostFailedToStartLoading },
				{ "ESBZOnlineCode::PrivilegeError", (int64)ESBZOnlineCode::PrivilegeError },
				{ "ESBZOnlineCode::MissionAlreadyFinished", (int64)ESBZOnlineCode::MissionAlreadyFinished },
				{ "ESBZOnlineCode::QuickMatchLostConnection", (int64)ESBZOnlineCode::QuickMatchLostConnection },
				{ "ESBZOnlineCode::BeaconSlotReservationFailed", (int64)ESBZOnlineCode::BeaconSlotReservationFailed },
				{ "ESBZOnlineCode::BeaconConnectionFailed", (int64)ESBZOnlineCode::BeaconConnectionFailed },
				{ "ESBZOnlineCode::OnlinePlatformRequestError", (int64)ESBZOnlineCode::OnlinePlatformRequestError },
				{ "ESBZOnlineCode::WrongBeaconPort", (int64)ESBZOnlineCode::WrongBeaconPort },
				{ "ESBZOnlineCode::WrongSessionPhase", (int64)ESBZOnlineCode::WrongSessionPhase },
				{ "ESBZOnlineCode::PartyFailedToJoinLobby", (int64)ESBZOnlineCode::PartyFailedToJoinLobby },
				{ "ESBZOnlineCode::ServerVersionMismatch", (int64)ESBZOnlineCode::ServerVersionMismatch },
				{ "ESBZOnlineCode::LostConnectionToMatchMakingService", (int64)ESBZOnlineCode::LostConnectionToMatchMakingService },
				{ "ESBZOnlineCode::MatchmakingRequestFailed", (int64)ESBZOnlineCode::MatchmakingRequestFailed },
				{ "ESBZOnlineCode::DataParsingError", (int64)ESBZOnlineCode::DataParsingError },
				{ "ESBZOnlineCode::PartyLeaderCancelledMatchmaking", (int64)ESBZOnlineCode::PartyLeaderCancelledMatchmaking },
				{ "ESBZOnlineCode::JoinedCrossPlatformLobby", (int64)ESBZOnlineCode::JoinedCrossPlatformLobby },
				{ "ESBZOnlineCode::SessionIsFull", (int64)ESBZOnlineCode::SessionIsFull },
				{ "ESBZOnlineCode::SessionDoesNotExist", (int64)ESBZOnlineCode::SessionDoesNotExist },
				{ "ESBZOnlineCode::ReturnToIIS", (int64)ESBZOnlineCode::ReturnToIIS },
				{ "ESBZOnlineCode::UserHasChanged", (int64)ESBZOnlineCode::UserHasChanged },
				{ "ESBZOnlineCode::SoloGameRequested", (int64)ESBZOnlineCode::SoloGameRequested },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeaconConnectionFailed.Name", "ESBZOnlineCode::BeaconConnectionFailed" },
				{ "BeaconSlotReservationFailed.Name", "ESBZOnlineCode::BeaconSlotReservationFailed" },
				{ "BlueprintType", "true" },
				{ "DataParsingError.Name", "ESBZOnlineCode::DataParsingError" },
				{ "HostFailedToStartLoading.Name", "ESBZOnlineCode::HostFailedToStartLoading" },
				{ "InternalError.Name", "ESBZOnlineCode::InternalError" },
				{ "Interrupted.Name", "ESBZOnlineCode::Interrupted" },
				{ "InvalidRequest.Name", "ESBZOnlineCode::InvalidRequest" },
				{ "JoinedCrossPlatformLobby.Name", "ESBZOnlineCode::JoinedCrossPlatformLobby" },
				{ "LostConnectionToHost.Name", "ESBZOnlineCode::LostConnectionToHost" },
				{ "LostConnectionToMatchMakingService.Name", "ESBZOnlineCode::LostConnectionToMatchMakingService" },
				{ "MatchmakingRequestFailed.Name", "ESBZOnlineCode::MatchmakingRequestFailed" },
				{ "MissionAlreadyFinished.Name", "ESBZOnlineCode::MissionAlreadyFinished" },
				{ "ModuleRelativePath", "Public/ESBZOnlineCode.h" },
				{ "OnlinePlatformRequestError.Name", "ESBZOnlineCode::OnlinePlatformRequestError" },
				{ "PartyFailedToJoinLobby.Name", "ESBZOnlineCode::PartyFailedToJoinLobby" },
				{ "PartyLeaderCancelledMatchmaking.Name", "ESBZOnlineCode::PartyLeaderCancelledMatchmaking" },
				{ "PlatformTimedOut.Name", "ESBZOnlineCode::PlatformTimedOut" },
				{ "PrivilegeError.Name", "ESBZOnlineCode::PrivilegeError" },
				{ "QuickMatchLostConnection.Name", "ESBZOnlineCode::QuickMatchLostConnection" },
				{ "ReturnToIIS.Name", "ESBZOnlineCode::ReturnToIIS" },
				{ "ServerVersionMismatch.Name", "ESBZOnlineCode::ServerVersionMismatch" },
				{ "SessionDoesNotExist.Name", "ESBZOnlineCode::SessionDoesNotExist" },
				{ "SessionIsFull.Name", "ESBZOnlineCode::SessionIsFull" },
				{ "SoloGameRequested.Name", "ESBZOnlineCode::SoloGameRequested" },
				{ "Success.Name", "ESBZOnlineCode::Success" },
				{ "UserHasChanged.Name", "ESBZOnlineCode::UserHasChanged" },
				{ "WrongBeaconPort.Name", "ESBZOnlineCode::WrongBeaconPort" },
				{ "WrongSessionPhase.Name", "ESBZOnlineCode::WrongSessionPhase" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZOnlineCode",
				"ESBZOnlineCode",
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
