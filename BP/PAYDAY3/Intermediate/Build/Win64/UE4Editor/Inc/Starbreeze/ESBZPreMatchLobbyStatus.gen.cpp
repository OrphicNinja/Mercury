// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPreMatchLobbyStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPreMatchLobbyStatus() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPreMatchLobbyStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPreMatchLobbyStatus"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPreMatchLobbyStatus>()
	{
		return ESBZPreMatchLobbyStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPreMatchLobbyStatus(ESBZPreMatchLobbyStatus_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPreMatchLobbyStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus_Hash() { return 182223613U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPreMatchLobbyStatus"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPreMatchLobbyStatus::WaitingForReady", (int64)ESBZPreMatchLobbyStatus::WaitingForReady },
				{ "ESBZPreMatchLobbyStatus::WaitingForLoading", (int64)ESBZPreMatchLobbyStatus::WaitingForLoading },
				{ "ESBZPreMatchLobbyStatus::ReadyToTravel", (int64)ESBZPreMatchLobbyStatus::ReadyToTravel },
				{ "ESBZPreMatchLobbyStatus::MatchInProgress", (int64)ESBZPreMatchLobbyStatus::MatchInProgress },
				{ "ESBZPreMatchLobbyStatus::Default", (int64)ESBZPreMatchLobbyStatus::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZPreMatchLobbyStatus::Default" },
				{ "MatchInProgress.Name", "ESBZPreMatchLobbyStatus::MatchInProgress" },
				{ "ModuleRelativePath", "Public/ESBZPreMatchLobbyStatus.h" },
				{ "ReadyToTravel.Name", "ESBZPreMatchLobbyStatus::ReadyToTravel" },
				{ "WaitingForLoading.Name", "ESBZPreMatchLobbyStatus::WaitingForLoading" },
				{ "WaitingForReady.Name", "ESBZPreMatchLobbyStatus::WaitingForReady" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPreMatchLobbyStatus",
				"ESBZPreMatchLobbyStatus",
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
