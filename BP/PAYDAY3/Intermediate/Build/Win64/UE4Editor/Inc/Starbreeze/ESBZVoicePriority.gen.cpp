// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZVoicePriority.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZVoicePriority() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZVoicePriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZVoicePriority"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZVoicePriority>()
	{
		return ESBZVoicePriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZVoicePriority(ESBZVoicePriority_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZVoicePriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZVoicePriority_Hash() { return 620234476U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZVoicePriority"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZVoicePriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZVoicePriority::VeryLowPriority", (int64)ESBZVoicePriority::VeryLowPriority },
				{ "ESBZVoicePriority::LowPriority", (int64)ESBZVoicePriority::LowPriority },
				{ "ESBZVoicePriority::MediumPriority", (int64)ESBZVoicePriority::MediumPriority },
				{ "ESBZVoicePriority::HighPriority", (int64)ESBZVoicePriority::HighPriority },
				{ "ESBZVoicePriority::VeryHighPriority", (int64)ESBZVoicePriority::VeryHighPriority },
				{ "ESBZVoicePriority::ExtremelyHighPriority", (int64)ESBZVoicePriority::ExtremelyHighPriority },
				{ "ESBZVoicePriority::MaxPriority", (int64)ESBZVoicePriority::MaxPriority },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ExtremelyHighPriority.Name", "ESBZVoicePriority::ExtremelyHighPriority" },
				{ "HighPriority.Name", "ESBZVoicePriority::HighPriority" },
				{ "LowPriority.Name", "ESBZVoicePriority::LowPriority" },
				{ "MaxPriority.Name", "ESBZVoicePriority::MaxPriority" },
				{ "MediumPriority.Name", "ESBZVoicePriority::MediumPriority" },
				{ "ModuleRelativePath", "Public/ESBZVoicePriority.h" },
				{ "VeryHighPriority.Name", "ESBZVoicePriority::VeryHighPriority" },
				{ "VeryLowPriority.Name", "ESBZVoicePriority::VeryLowPriority" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZVoicePriority",
				"ESBZVoicePriority",
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
