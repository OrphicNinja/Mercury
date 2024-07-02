// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSlotStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSlotStatus() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSlotStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSlotStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSlotStatus"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSlotStatus>()
	{
		return ESBZSlotStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSlotStatus(ESBZSlotStatus_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSlotStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSlotStatus_Hash() { return 1280245658U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSlotStatus"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSlotStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSlotStatus::Initializing", (int64)ESBZSlotStatus::Initializing },
				{ "ESBZSlotStatus::PreMatch", (int64)ESBZSlotStatus::PreMatch },
				{ "ESBZSlotStatus::Connecting", (int64)ESBZSlotStatus::Connecting },
				{ "ESBZSlotStatus::JobOverview", (int64)ESBZSlotStatus::JobOverview },
				{ "ESBZSlotStatus::JobOverviewReady", (int64)ESBZSlotStatus::JobOverviewReady },
				{ "ESBZSlotStatus::ActionPhase", (int64)ESBZSlotStatus::ActionPhase },
				{ "ESBZSlotStatus::ResultScreen", (int64)ESBZSlotStatus::ResultScreen },
				{ "ESBZSlotStatus::Disconnected", (int64)ESBZSlotStatus::Disconnected },
				{ "ESBZSlotStatus::Default", (int64)ESBZSlotStatus::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionPhase.Name", "ESBZSlotStatus::ActionPhase" },
				{ "BlueprintType", "true" },
				{ "Connecting.Name", "ESBZSlotStatus::Connecting" },
				{ "Default.Name", "ESBZSlotStatus::Default" },
				{ "Disconnected.Name", "ESBZSlotStatus::Disconnected" },
				{ "Initializing.Name", "ESBZSlotStatus::Initializing" },
				{ "JobOverview.Name", "ESBZSlotStatus::JobOverview" },
				{ "JobOverviewReady.Name", "ESBZSlotStatus::JobOverviewReady" },
				{ "ModuleRelativePath", "Public/ESBZSlotStatus.h" },
				{ "PreMatch.Name", "ESBZSlotStatus::PreMatch" },
				{ "ResultScreen.Name", "ESBZSlotStatus::ResultScreen" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSlotStatus",
				"ESBZSlotStatus",
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
