// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZOnlineSessionPhase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZOnlineSessionPhase() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZOnlineSessionPhase_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZOnlineSessionPhase"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineSessionPhase>()
	{
		return ESBZOnlineSessionPhase_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZOnlineSessionPhase(ESBZOnlineSessionPhase_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZOnlineSessionPhase"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase_Hash() { return 3690326950U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZOnlineSessionPhase"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZOnlineSessionPhase::Undefined", (int64)ESBZOnlineSessionPhase::Undefined },
				{ "ESBZOnlineSessionPhase::PartyCreation", (int64)ESBZOnlineSessionPhase::PartyCreation },
				{ "ESBZOnlineSessionPhase::Matchmaking", (int64)ESBZOnlineSessionPhase::Matchmaking },
				{ "ESBZOnlineSessionPhase::Lobby", (int64)ESBZOnlineSessionPhase::Lobby },
				{ "ESBZOnlineSessionPhase::Loading", (int64)ESBZOnlineSessionPhase::Loading },
				{ "ESBZOnlineSessionPhase::WaitActionPhase", (int64)ESBZOnlineSessionPhase::WaitActionPhase },
				{ "ESBZOnlineSessionPhase::DSWaitingForClients", (int64)ESBZOnlineSessionPhase::DSWaitingForClients },
				{ "ESBZOnlineSessionPhase::ActionPhase", (int64)ESBZOnlineSessionPhase::ActionPhase },
				{ "ESBZOnlineSessionPhase::ActionPhaseEnd", (int64)ESBZOnlineSessionPhase::ActionPhaseEnd },
				{ "ESBZOnlineSessionPhase::WaitingResult", (int64)ESBZOnlineSessionPhase::WaitingResult },
				{ "ESBZOnlineSessionPhase::ResultSuccess", (int64)ESBZOnlineSessionPhase::ResultSuccess },
				{ "ESBZOnlineSessionPhase::ResultFail", (int64)ESBZOnlineSessionPhase::ResultFail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionPhase.Name", "ESBZOnlineSessionPhase::ActionPhase" },
				{ "ActionPhaseEnd.Name", "ESBZOnlineSessionPhase::ActionPhaseEnd" },
				{ "BlueprintType", "true" },
				{ "DSWaitingForClients.Name", "ESBZOnlineSessionPhase::DSWaitingForClients" },
				{ "Loading.Name", "ESBZOnlineSessionPhase::Loading" },
				{ "Lobby.Name", "ESBZOnlineSessionPhase::Lobby" },
				{ "Matchmaking.Name", "ESBZOnlineSessionPhase::Matchmaking" },
				{ "ModuleRelativePath", "Public/ESBZOnlineSessionPhase.h" },
				{ "PartyCreation.Name", "ESBZOnlineSessionPhase::PartyCreation" },
				{ "ResultFail.Name", "ESBZOnlineSessionPhase::ResultFail" },
				{ "ResultSuccess.Name", "ESBZOnlineSessionPhase::ResultSuccess" },
				{ "Undefined.Name", "ESBZOnlineSessionPhase::Undefined" },
				{ "WaitActionPhase.Name", "ESBZOnlineSessionPhase::WaitActionPhase" },
				{ "WaitingResult.Name", "ESBZOnlineSessionPhase::WaitingResult" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZOnlineSessionPhase",
				"ESBZOnlineSessionPhase",
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
