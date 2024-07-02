// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGlobalLobbyRequestResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGlobalLobbyRequestResult() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGlobalLobbyRequestResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGlobalLobbyRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGlobalLobbyRequestResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGlobalLobbyRequestResult"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGlobalLobbyRequestResult>()
	{
		return ESBZGlobalLobbyRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGlobalLobbyRequestResult(ESBZGlobalLobbyRequestResult_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGlobalLobbyRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGlobalLobbyRequestResult_Hash() { return 1804762680U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGlobalLobbyRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGlobalLobbyRequestResult"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGlobalLobbyRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZGlobalLobbyRequestResult::Success", (int64)ESBZGlobalLobbyRequestResult::Success },
				{ "ESBZGlobalLobbyRequestResult::LobbyConnectionFailed", (int64)ESBZGlobalLobbyRequestResult::LobbyConnectionFailed },
				{ "ESBZGlobalLobbyRequestResult::SetupChallengesFailed", (int64)ESBZGlobalLobbyRequestResult::SetupChallengesFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LobbyConnectionFailed.Name", "ESBZGlobalLobbyRequestResult::LobbyConnectionFailed" },
				{ "ModuleRelativePath", "Public/ESBZGlobalLobbyRequestResult.h" },
				{ "SetupChallengesFailed.Name", "ESBZGlobalLobbyRequestResult::SetupChallengesFailed" },
				{ "Success.Name", "ESBZGlobalLobbyRequestResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGlobalLobbyRequestResult",
				"ESBZGlobalLobbyRequestResult",
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
