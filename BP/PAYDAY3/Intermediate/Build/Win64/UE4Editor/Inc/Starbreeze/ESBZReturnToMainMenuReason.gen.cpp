// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZReturnToMainMenuReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZReturnToMainMenuReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZReturnToMainMenuReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZReturnToMainMenuReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZReturnToMainMenuReason>()
	{
		return ESBZReturnToMainMenuReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZReturnToMainMenuReason(ESBZReturnToMainMenuReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZReturnToMainMenuReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason_Hash() { return 3112274967U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZReturnToMainMenuReason"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZReturnToMainMenuReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZReturnToMainMenuReason::Unknown", (int64)ESBZReturnToMainMenuReason::Unknown },
				{ "ESBZReturnToMainMenuReason::UserRequest", (int64)ESBZReturnToMainMenuReason::UserRequest },
				{ "ESBZReturnToMainMenuReason::PartyHostRequest", (int64)ESBZReturnToMainMenuReason::PartyHostRequest },
				{ "ESBZReturnToMainMenuReason::MatchmakingTimeout", (int64)ESBZReturnToMainMenuReason::MatchmakingTimeout },
				{ "ESBZReturnToMainMenuReason::MissionEnded", (int64)ESBZReturnToMainMenuReason::MissionEnded },
				{ "ESBZReturnToMainMenuReason::QuickMatchLostConnectionToSession", (int64)ESBZReturnToMainMenuReason::QuickMatchLostConnectionToSession },
				{ "ESBZReturnToMainMenuReason::MatchmakingError", (int64)ESBZReturnToMainMenuReason::MatchmakingError },
				{ "ESBZReturnToMainMenuReason::InviteProcessing", (int64)ESBZReturnToMainMenuReason::InviteProcessing },
				{ "ESBZReturnToMainMenuReason::PartyFailedToJoinLobby", (int64)ESBZReturnToMainMenuReason::PartyFailedToJoinLobby },
				{ "ESBZReturnToMainMenuReason::InvalidReplay", (int64)ESBZReturnToMainMenuReason::InvalidReplay },
				{ "ESBZReturnToMainMenuReason::CanPlayOnlineCheckFailed", (int64)ESBZReturnToMainMenuReason::CanPlayOnlineCheckFailed },
				{ "ESBZReturnToMainMenuReason::JoinProcessing", (int64)ESBZReturnToMainMenuReason::JoinProcessing },
				{ "ESBZReturnToMainMenuReason::CancelMatchmaking", (int64)ESBZReturnToMainMenuReason::CancelMatchmaking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CancelMatchmaking.Name", "ESBZReturnToMainMenuReason::CancelMatchmaking" },
				{ "CanPlayOnlineCheckFailed.Name", "ESBZReturnToMainMenuReason::CanPlayOnlineCheckFailed" },
				{ "InvalidReplay.Name", "ESBZReturnToMainMenuReason::InvalidReplay" },
				{ "InviteProcessing.Name", "ESBZReturnToMainMenuReason::InviteProcessing" },
				{ "JoinProcessing.Name", "ESBZReturnToMainMenuReason::JoinProcessing" },
				{ "MatchmakingError.Name", "ESBZReturnToMainMenuReason::MatchmakingError" },
				{ "MatchmakingTimeout.Name", "ESBZReturnToMainMenuReason::MatchmakingTimeout" },
				{ "MissionEnded.Name", "ESBZReturnToMainMenuReason::MissionEnded" },
				{ "ModuleRelativePath", "Public/ESBZReturnToMainMenuReason.h" },
				{ "PartyFailedToJoinLobby.Name", "ESBZReturnToMainMenuReason::PartyFailedToJoinLobby" },
				{ "PartyHostRequest.Name", "ESBZReturnToMainMenuReason::PartyHostRequest" },
				{ "QuickMatchLostConnectionToSession.Name", "ESBZReturnToMainMenuReason::QuickMatchLostConnectionToSession" },
				{ "Unknown.Name", "ESBZReturnToMainMenuReason::Unknown" },
				{ "UserRequest.Name", "ESBZReturnToMainMenuReason::UserRequest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZReturnToMainMenuReason",
				"ESBZReturnToMainMenuReason",
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
