// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAirPathStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAirPathStatus() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAirPathStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAirPathStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAirPathStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAirPathStatus"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAirPathStatus>()
	{
		return ESBZAirPathStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAirPathStatus(ESBZAirPathStatus_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAirPathStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAirPathStatus_Hash() { return 1605255048U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAirPathStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAirPathStatus"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAirPathStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAirPathStatus::Rejected", (int64)ESBZAirPathStatus::Rejected },
				{ "ESBZAirPathStatus::Failed", (int64)ESBZAirPathStatus::Failed },
				{ "ESBZAirPathStatus::Partial", (int64)ESBZAirPathStatus::Partial },
				{ "ESBZAirPathStatus::Succeeded", (int64)ESBZAirPathStatus::Succeeded },
				{ "ESBZAirPathStatus::InProgress", (int64)ESBZAirPathStatus::InProgress },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "ESBZAirPathStatus::Failed" },
				{ "InProgress.Name", "ESBZAirPathStatus::InProgress" },
				{ "ModuleRelativePath", "Public/ESBZAirPathStatus.h" },
				{ "Partial.Name", "ESBZAirPathStatus::Partial" },
				{ "Rejected.Name", "ESBZAirPathStatus::Rejected" },
				{ "Succeeded.Name", "ESBZAirPathStatus::Succeeded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAirPathStatus",
				"ESBZAirPathStatus",
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
