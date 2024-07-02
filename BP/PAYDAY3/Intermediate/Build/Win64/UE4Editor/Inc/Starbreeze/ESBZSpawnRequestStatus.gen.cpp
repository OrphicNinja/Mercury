// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSpawnRequestStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSpawnRequestStatus() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSpawnRequestStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSpawnRequestStatus"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSpawnRequestStatus>()
	{
		return ESBZSpawnRequestStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSpawnRequestStatus(ESBZSpawnRequestStatus_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSpawnRequestStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus_Hash() { return 3551777083U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSpawnRequestStatus"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSpawnRequestStatus::Pending", (int64)ESBZSpawnRequestStatus::Pending },
				{ "ESBZSpawnRequestStatus::Started", (int64)ESBZSpawnRequestStatus::Started },
				{ "ESBZSpawnRequestStatus::Finished", (int64)ESBZSpawnRequestStatus::Finished },
				{ "ESBZSpawnRequestStatus::Canceled", (int64)ESBZSpawnRequestStatus::Canceled },
				{ "ESBZSpawnRequestStatus::TimedOut", (int64)ESBZSpawnRequestStatus::TimedOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Canceled.Name", "ESBZSpawnRequestStatus::Canceled" },
				{ "Finished.Name", "ESBZSpawnRequestStatus::Finished" },
				{ "ModuleRelativePath", "Public/ESBZSpawnRequestStatus.h" },
				{ "Pending.Name", "ESBZSpawnRequestStatus::Pending" },
				{ "Started.Name", "ESBZSpawnRequestStatus::Started" },
				{ "TimedOut.Name", "ESBZSpawnRequestStatus::TimedOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSpawnRequestStatus",
				"ESBZSpawnRequestStatus",
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
